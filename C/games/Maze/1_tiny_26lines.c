#include<windows.h>
#include<conio.h>
#define Long 21
int c, i, place = Long, map[Long * Long] = { 0 };
int move[8] = { -1,1,-Long,Long,'a','d','w','s' };
void dig(int v) {
	int a[4] = { 2,-2,2 * Long,-2 * Long }, i = 0, j;
	for (; j = rand() % 4, i < 4; i++)i - j && (a[i] ^= a[j] ^= a[i] ^= a[j]);
	for (map[v] = 1, i = 0; i < 4; i++) {
		if (v + a[i] < 0 || Long * Long < v + a[i] || map[v + a[i]])continue;
		if ((a[i] == 2 || a[i] == -2) && v / Long - (a[i] + v) / Long)continue;
		map[v + a[i] / 2] = 1, dig(v + a[i]);
	}
}
int main() {
	srand((unsigned)malloc(!system("mode con:cols=42 lines=21")));
	SetConsoleCursorInfo(GetStdHandle((DWORD)-11), &(CONSOLE_CURSOR_INFO){25});
	dig(Long + 1), map[Long] = map[Long*Long - Long - 1] = 1;
	for (c = 0; c = _getch(), place - Long * Long + Long + 1;) {
		for (i = 0; c - move[i + 4] && i < 4; i++);
		i < 4 && map[place + move[i]] && (place += move[i]);
		SetConsoleCursorPosition(GetStdHandle((DWORD)-11), (COORD){0});
		for (i = 0; i < Long*Long; i++)
			_cputs(i - place ? map[i] ? "  " : "[]" : "<>");
	}
}

/*
26�����Թ�, 1110�ַ�, ʵ���˼򵥵Ĺ���;
adsw�ƶ�(��֧�ִ�д), ֱ���ƶ������½�ʱ��Ϸ����;
���Զ����ͼ�ߴ�(Long)
���������ˮ��һ����Ʒ��...ʵ�ֵ�Ч�������Ǻܺ�
Ŀǰ������дһ��, ���Զ����ɵ��Թ�������Ȼ
����ȥ����˸�������д���, �Ͷ�Ӧ��Ƶ������һ�����
��2020.4.24�ϴ�, 2020.10.3����˵�����޸Ĳ��ִ���
*/