#include<stdlib.h>
#include<conio.h>
int m[36] = { 0 }, s = 0, can = 0, air = 16, c = 0, i = 6, j, *p;
void move(int *q, int v) {
	if (*q < 1 ? 0 : q[v] || (q[v] = *q, move(q + v, v), *q = can = 0))
		q[v] - *q || (q[v] = ~*q, s += 1 << *q, *q = can = 0, ++air);
}
void index(int b, int v) { b - j && ((move(m + b, v), index(b + i, v), 0)); }
int main() {
	for (p = malloc(1); i--;)m[i] = m[35 - i] = m[i * 6] = m[35 - i * 6] = -1;
	for (srand(p), free(p); (air || can) && c - 27; c = _getch() & 95) {
		c - 'A' && c - 'W' || (j = 30, i = 1, index(6, c - 'A' ? -6 : -1), 0);
		c - 'D' && c - 'S' || (j = 6, i = -1, index(30, c - 'D' ? 6 : 1), 0);
		if (!air || can || (--air, (system("cls"))))continue;
		while (m[i = rand() % 30] || (m[i] = rand() % 5 ? 1 : 2, 0));
		for (p = m + 30; --p - m - 6; *p < -1 && (*p = -*p));
		for (; ++p - m - 31; *p + 1 && _cprintf("%5d|", *p ? 1 << *p : 0))
			*p + 1 && (*p ^ p[1] && *p ^ p[6] || ++can),
			(p - m) % 6 || _cputs("\n----- ----- ----- -----\n");
		air || can || _cputs("Game over!"), _cprintf("score:%d", s);
	}
	//for (_cputs("\n### Press space to exit ###\n"); _getch() - ' ';);
}
/*
22��2048, 1085�ַ�(������ע��), ʵ���˼򵥵Ĺ���;
ADSWʹ���������ƶ�, ��ͬ���ֺϲ�, ÿ���ж������������,
ֱ���޷������ƶ�����Esc��ʱ��Ϸ����;
��28�еİ汾�ϼ��ԸĽ�, �Ż������߼�, ���ٴ�����, ����Esc���˳�
��2020.7.17�ϴ�, 2020.10.3����˵�����޸Ĳ��ִ���
������֮ǰ��˵��:
*/

//adsw�ƶ�, Esc�˳�, ���������
//��22�з�������õ�, ȥ����Ӱ������
//����2048�����߼�ͦ���ӵ�, ѹ�����˺ܳ�ʱ��...
//�����лȺ��ĳ�������ṩ�ı߽���˼·(Ȼ�����ع���һ��233)
//*���в�Ը͸¶����
