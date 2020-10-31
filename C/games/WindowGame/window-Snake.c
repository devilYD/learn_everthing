#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#define windowWidth 120
#define windowHeight windowWidth //�������ڳ��Ϳ�
#define mapLines (GetSystemMetrics(SM_CYSCREEN) / windowWidth)
#define mapCols (GetSystemMetrics(SM_CXSCREEN) / windowHeight) //��ͼ����������
#define mapMax (mapLines * mapCols)//��ͼ�ܹ��ĸ�����
#define Delay 100 //�ӳ�
#if (windowWidth < 120)
#define WindowStyle WS_POPUP
#else
#define WindowStyle WS_TILEDWINDOW
#endif
const char* myclass = "Snake";
int hX = 0, hY = 0, len = 4, c = 'd', cl = 'd', i = 0, *map;
HANDLE hOut;
COORD origin = { 0, 0 };
HWND *screen;
MSG msg;
//��Ϣѭ��
LRESULT CALLBACK WndProc(HWND window, unsigned int msg, WPARAM wp, LPARAM lp)
{
	return DefWindowProc(window, msg, wp, lp);
}
//ע�ᴰ��
ATOM MyRegisterClass()
{
	WNDCLASSEX wc;
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.style = CS_DBLCLKS;
	wc.lpfnWndProc = WndProc;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hInstance = GetModuleHandle(0);
	wc.hIcon = LoadIcon(0, IDI_APPLICATION);
	wc.hCursor = LoadCursor(0, IDC_ARROW);
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wc.lpszMenuName = 0;
	wc.lpszClassName = myclass;
	wc.hIconSm = LoadIcon(0, IDI_APPLICATION);
	return RegisterClassEx(&wc);
}
//��������
HWND addWindow(int x, int y, int width, int height)
{
	HWND window = CreateWindowEx(0, myclass, "title", WindowStyle ,
		x, y, width, height, 0, 0, GetModuleHandle(0), 0);//��������
	if (!window)return 0;//�����Ƿ�ɹ�����
	return window;
}
//���ÿ���̨��С
void setConsoleSize(int lines, int cols)
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

int main()
{
	srand((unsigned)time(0)); //��ʼ�����������
	if (!MyRegisterClass())return GetLastError();//ע�ᴰ��
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	setConsoleSize(mapCols * 2, mapLines + 1);
	hideCursor();
	map = (int*)malloc(mapMax * sizeof(int));
	screen = (HWND*)malloc(mapMax * sizeof(HWND)); //����
	for (i = 0; i < mapMax; i++) //��ʼ��
	{
		map[i] = 0;
		screen[i] = addWindow(i % mapCols * windowWidth, i / mapCols * windowHeight, windowWidth, windowHeight);
	}
	for (map[rand() % mapMax] = -1; 1; Sleep(Delay))
	{
		if (_kbhit())
		{
			cl = _getch();
			if (cl == ' ')break; //�ո�ֱ�ӽ���
			switch (cl)
			{
			case 'a':case 'A':if (c != 'd')c = 'a'; break;//�ж���ԭ�����Ƿ��ͻ
			case 'd':case 'D':if (c != 'a')c = 'd'; break;
			case 's':case 'S':if (c != 'w')c = 's'; break;
			case 'w':case 'W':if (c != 's')c = 'w'; break;
			}
		}
		switch (c)
		{
		case 'a':hX -= hX > 0 ? 1 : 1 - mapCols; break;//���Խ��,�����Ե�ǽ����
		case 'w':hY -= hY > 0 ? 1 : 1 - mapLines; break;
		case 'd':hX += hX < mapCols - 1 ? 1 : 1 - mapCols; break;
		case 's':hY += hY < mapLines - 1 ? 1 : 1 - mapLines; break;
		}
		if (map[hY * mapCols + hX] > 1) break; //��������ֱ�ӽ���
		if (map[hY * mapCols + hX] == -1) //����ʳ��
		{
			len++;
			do i = rand() % mapMax;
			while (map[i]); //ֱ��ָ��λ��Ϊ�յ�
			map[i] = -1;
		}
		else //�յ�
			for (i = 0; i < mapMax; i++)
				if (map[i] > 0)map[i]--;//ȫ������ֵ-1
		map[hY * mapCols + hX] = len;
		SetConsoleCursorPosition(hOut, origin);
		for (i = 0; i < mapMax; i++)
		{
			printf(map[i] > 0 ? "��" : map[i] ? "��" : "  ");
			if (map[i])ShowWindow(screen[i], SW_SHOWDEFAULT);
			else ShowWindow(screen[i], SW_HIDE);
		}
	}
	Sleep(1000);
	free(map);
	free(screen);
}