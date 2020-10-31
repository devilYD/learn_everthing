#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include<time.h>
char strMapName[6] = "Snake";//�����ڴ�����
void create(int x, int y, char* target, int type)//��������, ����: ��������, ·��, ����
{
	char str[64];//start�����, ע���ļ�·����Ҫ�ܳ�
	sprintf(str, "start %s %d %d %d", target, type, x, y);//�����½��̵�����
	//sprintf_s(str, 64, "start %s %d %d %d", target, type, x, y); //vs���ɴ��д���������4996�Ŵ���
	if (system(str))exit(0);//start dos�����������½���, ���ڲ��õ�������������, �������ʧ��ֱ�ӽ�������
}
int main(int argc, char** acgv)
{
	int* pBuf;//�����ڴ�ָ��------0:����; 1:������; 2:��ͼ����; 3:��ͼ����; 4:�ӳ�
	HANDLE hMap = OpenFileMapping(FILE_MAP_ALL_ACCESS, 0, strMapName);//���ļ�ӳ�����
	if (hMap == NULL)//������
	{
		int width, height, cols, lines, delay;//���ڳߴ�, ��ͼ�ߴ�, �ӳ�
		int* map, hX = 0, hY = 0, c = 'd', i, Max, f, oldTime;//ǰ7�������ɲο�tiny��, fΪʳ��λ��, oldTime��¼�ϴ�ˢ��ʱ��
		cols = argc > 1 ? atoi(acgv[1]) : 10;//��ͼ����, Ĭ��10
		lines = argc > 2 ? atoi(acgv[2]) : 6;//��ͼ����, Ĭ��6
		delay = argc > 3 ? atoi(acgv[3]) : 200;//�ӳ�, Ĭ��200
		if (cols * lines * delay == 0)printf("Input error!"), _getch(), exit(0);//�������0ֵ, ��ʾ
		Max = cols * lines, width = GetSystemMetrics(0) / cols, height = GetSystemMetrics(1) / lines;//��ʼ�����ֲ���
		hMap = CreateFileMapping(INVALID_HANDLE_VALUE, NULL, PAGE_READWRITE, 0, 20, strMapName);//�����ļ�ӳ���ں˶���
		pBuf = MapViewOfFile(hMap, FILE_MAP_ALL_ACCESS, 0, 0, 0);//���ļ�ӳ�����ӳ�䵽��ǰ����ĵ�ַ�ռ�
		pBuf[0] = 4, pBuf[2] = width, pBuf[3] = height, pBuf[4] = delay;//ȫ�ֱ���(���н���)
		srand((unsigned)time(0));//��ʼ�����������
		map = calloc(Max, 4), f = rand() % Max, map[f] = -1;//�����ڴ�, ����һ��ʳ��
		printf("width:%d, height:%d\ncols:%d, lines:%d\ndelay:%d\n", width, height, cols, lines, delay);//������ֲ���
		printf("Input to start..."), _getch(), oldTime = clock();//��ʼǰ���������ʼ
		create(f % cols, f / cols, acgv[0], 1);//����ʳ�����
		while (1)//��ѭ��
		{
			if (pBuf[1] == ' ')break;//�ո���˳�
			switch (pBuf[1])//�ж����붯��
			{
			case 'a':case 'A':if (c != 'd')c = 'a'; break;//���붯������Ÿı䷽��
			case 'd':case 'D':if (c != 'a')c = 'd'; break;
			case 's':case 'S':if (c != 'w')c = 's'; break;
			case 'w':case 'W':if (c != 's')c = 'w'; break;
			}
			switch (c)//�ƶ�
			{
			case 'a':hX -= hX > 0 ? 1 : 1 - cols; break;//���Խ��,�����Ե�ǽ����
			case 'w':hY -= hY > 0 ? 1 : 1 - lines; break;
			case 'd':hX += hX < cols - 1 ? 1 : 1 - cols; break;
			case 's':hY += hY < lines - 1 ? 1 : 1 - lines; break;
			}
			if (map[hY * cols + hX] > 1)break;//���ͷ����������,����,����
			if (map[hY * cols + hX] == -1)//�����ʳ��
			{
				do f = rand() % Max;//ѭ������
				while (map[f]);//ֱ�����ɵ�λ��Ϊ�յ�Ϊֹ,��ֹ����������
				++pBuf[0], map[f] = -1;//��������, ��ֵ
				create(f % cols, f / cols, acgv[0], 1);//����ʳ�����
				Sleep(100);//ͬ��Ҳ��Ҫ�ӳ�
			}
			else for (i = 0; i < Max; i++)map[i] > 0 && --map[i];//ʣ�¾�ֻ�пյ���, ȫ��ֵ-1
			map[hY * cols + hX] = pBuf[0], create(hX, hY, acgv[0], 0);//ͷ���긳ֵ�������������
			system("cls");//����, ����������ֲ���
			printf("head(%d,%d)|len:%d\nfood(%d,%d)|move:%c", hX, hY, pBuf[0], f % cols, f / lines, c);
			while (oldTime + pBuf[4] > clock())if (Sleep(1), _kbhit())pBuf[1] = _getch();//�ӳ�, ������붯��
			oldTime += pBuf[4];//��λ
		}
		pBuf[0] = 0;//�߳���Ϊ0,ʹ�������̽���ѭ��
		Sleep(100);
	}
	else//�ӽ���
	{
		HWND hWnd = GetConsoleWindow();//��ȡ����̨���ھ��
		int i = 0, j = 0;//i: ���浱ǰ�߳�; j: �Ƿ�Ϊʳ��ı�־
		pBuf = MapViewOfFile(hMap, FILE_MAP_ALL_ACCESS, 0, 0, 0);//���ļ�ӳ�����ӳ�䵽��ǰ����ĵ�ַ�ռ�
		//SetWindowLong(hWnd, GWL_STYLE, GetWindowLong(hWnd, GWL_STYLE) & ~WS_CAPTION);//���ر�����, �����Լ���Ҫ��ʹ��
		MoveWindow(hWnd, atoi(acgv[2]) * pBuf[2], atoi(acgv[3]) * pBuf[3], pBuf[2], pBuf[3], 1);//�ƶ�����λ�ü���С
		atoi(acgv[1]) ? system("color a0"), i = pBuf[0], j = 1 : system("color cf"); //�޸Ĵ�����ɫ, ʳ���ж������
		system("cls");//�����ɷ�ֹ���ֺڿ�
		while (1)
		{
			if (_kbhit())pBuf[1] = _getch();//������붯��
			if (pBuf[0] == 0)break;//����Ϊ0, ֱ�ӽ���
			if (j && i != pBuf[0])break;//ʳ��: �߳������仯����
			if (!j && clock() > pBuf[0] * pBuf[4])break;//����һ��ʱ��(�߳�*�ӳ�)�����
			Sleep(10);//�ӳ�
		}
	}
	UnmapViewOfFile(pBuf);//ֹͣ�ڴ�ӳ��
	CloseHandle(hMap);//�ر�һ���ں˶���
}

/*
�ô�����̰����, 89��, 3948�ַ�(����ע��);
ADSW�ƶ�, �Ե�ʳ��ɳ�, �ɴ�ǽ, �Ե��Լ�������¿ո����Ϸ����;
����ǰ��Ҫ�������̰��������(��ӡ�˲��ֲ���, ����ȷ�������в����Ƿ���Ч)
ԭ��ǳ���, ͨ�������ڴ�������д�����ʵ�ֽ��̼��ͨ��
���жϹ����ڴ������Ƿ����, û��������һ��(������), ���ھ������ӽ���
����������ȫ��, ���������ӽ��̲�����һϵ���ж��͸����߳�(pBuf[0])
�ӽ��̴ﵽһ�����������, ���������̽���(�߳�����), �߳�����(ʳ��), ����ʱ�����(����)
�ӽ��̲������ɳ���������뽹��, �ӽ��̻�Ҫ�����������������(pBuf[1])
��ʹ�����������޸Ĳ���, ������������Ҫ���±��������;
�����ʽ: /.target -cols -lines -delay (shell��Ҫ'/.', cmd����Ҫ)
targetΪ����·��, colsΪ��ͼ����, linesΪ��ͼ����, delayΪ�ӳ�, ����ֱ����������
��:
/.Snake.exe 18 12 100
����һ����ͼ�ߴ�Ϊ18*12, ÿ��ѭ���ӳ�Ϊ100ms����Ϸ(����ʹ�������·��)
D:\./Snake 15
����һ����ͼ�ߴ�Ϊ15*6, ÿ��ѭ���ӳ�Ϊ200ms����Ϸ(����������ʹ��Ĭ��ֵ)
ԭ���Ĵ����߼����������(�����ܵ��Ǵ�ֱ��ˢ��Ȼ����)
�����ѻ������, �����и�������, �������޸Ĳ���
ʱ��ʱ����ִ��ڳߴ���(�����Ҳ�����ԭ��, �����߼�����û�����)
��2020.2.17�ϴ�, 2020.10.01����˵�����޸Ĵ�������(������д��)
*/