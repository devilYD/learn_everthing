#include<windows.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	int hX = 7, hY = 7, len = 4, i = 0, map[900] = { 0 };//ͷ���꣬�߳���ѭ����������ͼ��-1:ʳ��;0:�հ�;>0:����
	char c = 'd', cl = 'd', deaw[1801] = { 0 };//��ʼ�������뻺�棬���ƻ���
	system("mode con: cols=60 lines=30");//�޸Ŀ���̨���ڴ�С
	srand((unsigned)malloc(1));//��ʼ�����������
	for (map[rand() % 900] = -1; 1; Sleep(100))//����ʳ��,��ʱ
	{
		if (_kbhit() && (cl = _getch()))//�ж��Ƿ�����
			switch (cl)
			{
				case 'a':case 'A':if (c != 'd')c = 'a'; break;//�ж���ԭ�����Ƿ��ͻ
				case 'd':case 'D':if (c != 'a')c = 'd'; break;
				case 's':case 'S':if (c != 'w')c = 's'; break;
				case 'w':case 'W':if (c != 's')c = 'w'; break;
			}
		switch (c)
		{
			case 'a':hX -= hX > 0  ? 1 : -29; break;//����ͷ����
			case 'd':hX += hX < 29 ? 1 : -29; break;
			case 's':hY += hY < 29 ? 1 : -29; break;
			case 'w':hY -= hY > 0  ? 1 : -29; break;
		}
		if (map[hY * 30 + hX] > 1)exit(!_getch());//�ж��Ƿ�Ե��Լ�
		if (map[hY * 30 + hX] == -1)//�ж��Ƿ�Ե�ʳ��
		{
			len++;
			do i = rand() % 900;
			while (map[i]);//��֤ʳ������λ��Ϊ�յ�
			map[i] = -1;
		}
		else for (i = 0; i < 900; i++)//ȫ������ֵ-1
			if (map[i] > 0)map[i] -= 1;
		map[hY * 30 + hX] = len;//��ͷ��ֵ
		for (i = 0; i < 1800; i++)//���»��ƻ���
		{
			if (map[i / 2] == 0)deaw[i] = ' ';
			else if (map[i / 2] > 0)deaw[i] = (i % 2) ? ')' : '(';
			else deaw[i] = '0';
		}
		system("cls");//����
		printf(deaw);//��ӡ
	}
}

/*
47��̰����, 1400�ַ�(����ע��), ����д���������;
ADSW�ƶ�, �Ե�ʳ��ɳ�, �ɴ�ǽ, �Ե��Լ�����ʱ��Ϸ����;
���Զ�����ͷλ��(hX, hY), �߳�(len), ��ʼ����(c);
ͨ��printf��ӡ����������, �������ǹ�궨λ����...
�����������ְ汾ÿ����Ϸ��дһ��, �����ڻ��ǽ�����̰����(��)
��2020.1.28�ϴ�, 2020.10.1����˵��
������֮ǰ��˵��:
47��̰���ߣ���18��̰���ߵĻ����ϣ�������˸ ��ǽ ����β������������д�����淶���ɶ��Ի���
ֻҪ��������Ͳ��ֺ���ʹ�þͿ��������������¶��ܿ��Ķ�
�õ��ĺ�����
--windows.h:
system()����̨����//mode�Ĵ��ڴ�Сcls����
srand()���������
rand()�����
Sleep()��ʱ
exit()����
malloc()�����ڴ�//���ص�ַ���
--conio.h:
_kbhit()����Ƿ��м�������
_getch()��ȡһ���ַ�
--stdio.h:
printf()���//����cprintf()ò����ȥ��˸(???)
*/