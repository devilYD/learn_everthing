#include<windows.h>
#include<stdio.h>
#include<time.h>
#define turn(x, y) (mapSize.X * (y) + (x))
#define Outside(x, y) (x < 0 || mapSize.X - 1 < x || y < 0 || mapSize.Y - 1 < y)
int *map, *mark, count, bomb, firstOpen, game, bombCount, baginTime;
int node[8][2] = { 1,0,-1,0,0,1,0,-1,-1,-1,-1,1,1,-1,1,1 };
char *num[10] = { "  ", "��", "��", "��", "��", "��", "��", "��", "��", "��" };
COORD size = { 18,11 }, origin = { 0,0 }, mapSize = { 0,0 }, pos = { 0,0 };
HANDLE hOut, hIn;
INPUT_RECORD Buf;
int *color[10] = { 0,11,10,12,14,1,2,6,4,4 };
//��궨λ
void gotoxy(int x,int y)
{
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(hOut, pos);
}
//���ô��ڴ�С
void setScreenSize(int lines, int cols)
{
	COORD size = { lines,cols };
	SMALL_RECT rect = { 0,0,size.X - 1,size.Y - 1 };
	SetConsoleWindowInfo(hOut, 1, &rect);
	SetConsoleScreenBufferSize(hOut, size);
	SetConsoleWindowInfo(hOut, 1, &rect);
}
//���ع��
void hideCursor()
{
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(hOut, &CursorInfo);
	CursorInfo.bVisible = 0;
	SetConsoleCursorInfo(hOut, &CursorInfo);
}
//��׼��ʱ
void delay(int ms)
{
	static clock_t oldtime = 0;
	while (clock() - ms < oldtime)
		Sleep(1);
	oldtime = clock();
}
//����һ��λ��
void open(int x,int y)
{
	if (Outside(x,y))return;
	if (!mark[turn(x,y)])return;
	mark[turn(x, y)] = 0;
	gotoxy(x * 2, y);
	SetConsoleTextAttribute(hOut, color[map[turn(x, y)]]);
	printf(num[map[turn(x, y)]]);
	count--;
	if (map[turn(x, y)] > 0)return;
	for (int i = 0; i < 8; i++)
		open(x + node[i][0], y + node[i][1]);
}
//���һ��λ��
void sign(int x, int y)
{
	if (Outside(x, y))return;
	int *temp = &mark[turn(x, y)];
	if (!*temp)return;
	gotoxy(x * 2, y);
	if (*temp == 1)
	{
		*temp = 2;
		SetConsoleTextAttribute(hOut, 4);
		printf("��");
		bombCount--;
	}
	else
	{
		*temp = 1;
		SetConsoleTextAttribute(hOut, 15);
		printf("��");
		bombCount++;
	}
}
//����ը��
void setBomb(int x, int y)
{
	for (int i = 0,j,k; i < bomb;)
	{
		j = rand() % mapSize.X, k = rand() % mapSize.Y;
		if ((-2 < x - j && x - j < 2) && (-2 < y - k && y - k < 2))continue;
		if (map[turn(j, k)] == 9)continue;
		map[turn(j, k)] = 9, i++;
		for (int i = 0,m,n; i < 8; i++)
		{
			m = j + node[i][0], n = k + node[i][1];
			if (!Outside(m, n) && map[turn(m, n)] - 9)map[turn(m, n)]++;
		}
	}
}
//չ��
void fun(int x,int y)
{
	int num = 0;
	for (int i = 0,j,k; i < 8; i++)
	{
		j = x + node[i][0], k = y + node[i][1];
		if (!Outside(j, k) && mark[turn(j, k)] == 2)num++;
	}
	if (map[turn(x, y)] == num)
	{
		for (int i = 0,j,k; i < 8; i++)
		{
			j = x + node[i][0], k = y + node[i][1];
			if (Outside(j, k) || mark[turn(j, k)] - 1)continue;
			if (open(j, k), map[turn(j, k)] == 9)game = 0;
		}
	}
}

int main()
{
	int Result, i = 0, fps = 10;
	hIn = GetStdHandle(STD_INPUT_HANDLE);
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	hideCursor();
back:;
	setScreenSize(18, 11);
	FillConsoleOutputCharacter(hOut, ' ', (size.X - 1)*(size.Y + 1), origin, &i);
	SetConsoleCursorPosition(hOut, origin);
	SetConsoleTextAttribute(hOut, 15), printf("   Minesweeper!  \n\n");
	SetConsoleTextAttribute(hOut, 10), printf("       Easy      \n");
	SetConsoleTextAttribute(hOut, 14), printf("      Medium     \n");
	SetConsoleTextAttribute(hOut, 13), printf("       Hard      \n");
	SetConsoleTextAttribute(hOut, 12), printf("      Custom     \n\n\n");
	SetConsoleTextAttribute(hOut, 11), printf(" by:RainbowRoad1");
	SetConsoleTextAttribute(hOut, 15);
	while (1)
	{
		ReadConsoleInput(hIn, &Buf, 1, &Result);
		pos = Buf.Event.MouseEvent.dwMousePosition;
		if (Buf.Event.MouseEvent.dwButtonState)
		{
			if (pos.Y == 2)mapSize.X = mapSize.Y = 9, bomb = 10;
			else if (pos.Y == 3)mapSize.X = mapSize.Y = 16, bomb = 40;
			else if (pos.Y == 4)mapSize.X = 30, mapSize.Y = 16, bomb = 99;
			else if (pos.Y == 5)
			{
				gotoxy(0, 6);
				printf("input:");
				scanf_s("%d,%d,%d", &mapSize.X, &mapSize.Y, &bomb);
				num[0] = "  ";
			}
			else continue;
			break;
		}
		if (GetAsyncKeyState(' ') & 0x8000)exit(0);
	}
	size.X = mapSize.X * 2, size.Y = mapSize.Y + 2;
	setScreenSize(size.X, size.Y);
	Sleep(100);
	FlushConsoleInputBuffer(hIn);
restart:;
	srand((unsigned)time(0));
	if (map)free(map);
	if (mark)free(mark);
	map = (int*)calloc(mapSize.X*mapSize.Y, sizeof(int));
	mark = (int*)calloc(mapSize.X*mapSize.Y, sizeof(int));
	count = mapSize.X*mapSize.Y, bombCount = bomb;
	firstOpen = 1, game = 1, baginTime = clock();
	SetConsoleTextAttribute(hOut, 15);
	SetConsoleCursorPosition(hOut, origin);
	for (i = 0; i < mapSize.X*mapSize.Y;i++)printf("��");
	for (i = 0; i < mapSize.X*mapSize.Y; i++)mark[i] = 1;
	gotoxy(mapSize.X * 2 - 7, mapSize.Y);
	printf("restart");
	gotoxy(mapSize.X * 2 - 5, mapSize.Y + 1);
	printf("back");
	while (1)
	{
		if (GetNumberOfConsoleInputEvents(hIn, &i));
		if (i)
		{
			while (i--)
			{
				ReadConsoleInput(hIn, &Buf, 1, &Result);
				pos = Buf.Event.MouseEvent.dwMousePosition;
				if (Buf.Event.MouseEvent.dwButtonState)
				{
					pos.X = pos.X / 2;
					switch (Buf.Event.MouseEvent.dwButtonState)
					{
					case FROM_LEFT_1ST_BUTTON_PRESSED:
						if (firstOpen)setBomb(pos.X, pos.Y), firstOpen = 0;
						open(pos.X, pos.Y);
						if (map[turn(pos.X, pos.Y)] == 9)game = 0;
						if (pos.Y == mapSize.Y)goto restart;
						if (pos.Y == mapSize.Y + 1)goto back;
						break;
					case RIGHTMOST_BUTTON_PRESSED:
						if (!Outside(pos.X, pos.Y))sign(pos.X, pos.Y); break;
					case FROM_LEFT_2ND_BUTTON_PRESSED:
						if (!Outside(pos.X, pos.Y))fun(pos.X, pos.Y); break;
					}
				}
			}
		}
		gotoxy(0, mapSize.Y);
		SetConsoleTextAttribute(hOut, 1);
		if (count <= bomb && printf("\nyou win!     "))break;
		if (!game)
		{
			printf("\nGame over!   ");
			SetConsoleTextAttribute(hOut, 4);
			for (i=0; i < mapSize.X*mapSize.Y; i++)
				if (map[i] == 9 && mark[i])
				{
					gotoxy(i%mapSize.X * 2, i / mapSize.X);
					printf("��");
				}
			break;
		}
		SetConsoleTextAttribute(hOut, 15);
		printf("time:%-5d\nresidue:%-5d", (clock() - baginTime) / 1000, bombCount);
		delay(1000 / fps);
	}
	while (1)
	{
		ReadConsoleInput(hIn, &Buf, 1, &Result);
		pos = Buf.Event.MouseEvent.dwMousePosition;
		if (Buf.Event.MouseEvent.dwButtonState)
		{
			if (pos.Y == mapSize.Y)goto restart;
			if (pos.Y == mapSize.Y + 1)goto back;
		}
		if (GetAsyncKeyState(' ') & 0x8000)break;
		Sleep(1000 / fps);
	}
}

/*
236��ɨ��, 6528�ַ�(����ע��), ������ԭ��ɨ��ȫ������;
���������Ѻ�: ���������, �Ҽ����, �м�չ��(��������...)
����һ���Ѷ�ѡ������˵�, ���Զ����Ѷ�
�������ֱ��, ��ʣ����������ʱ��ʾ
��Ϸʱ���������úͷ��ز˵���ѡ��
�о�200�����е㶪��...winAPI����ô��ʵ��û�취, û��˼ȥѹ(��)
��2020.2.15�ϴ�, 2020.10.3����˵����ɾ�����ִ���
*/