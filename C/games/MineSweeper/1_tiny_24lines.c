#include <stdlib.h>
#include <conio.h>
#define OUT (x < 0 || W <= x || y < 0 || H <= y)
int W = 9, H = 9, B = 10, *m, *k, s, z, c = 1, i, j, (*f)(int, int);
void tmp(int x, int y) { OUT || m[x + W * y] - 16 && m[x + W * y]++; }
void dig(int x, int y) {
	if (OUT || k[i = x + W * y] || (k[i]++, s--, m[i]))return;
	for (int i = 0; i < 9; ++i - 4 || i++)f(x + i % 3 - 1, y + i / 3 - 1);
}
void set(int x, int y) {
	for (srand(m), f = tmp; c++ < B; dig(j % W, j / W), m[j] = 16, k[j]--)
		for (; m[j = rand() % (W * H)] > 9 || z == j || (m[j] = 0););
	f = dig, s += B, dig(x, y);
}
int main() {
	for (f = set, s = W * H, m = calloc(s * 2, 4), k = m + s; c - 27; j = 0) {
		c - 68 || z++, c - 65 || z--, c - 83 || (z += W), c - 87 || (z -= W);
		z = (z + W * H) % (W * H), c || (f(z % W, z / W), 0), system("cls");
		for (i = 0; j = i - z ? 32 : 62, i < W * H; ++i % W || _cputs("\n"))
			_cprintf("%c%c", j, k[i] ? m[i] ? 48 + m[i] : 32 : 42);
		if (!(j = c || m[z] < 9) || s <= B || (c = _getch() & 95, 0))break;
	}
	_cputs(j ? "You win!" : "Game over!"), _getch();
}

/*
24��ɨ��, 1088�ַ�, ʵ���˼򵥵Ĺ���;
ADSW�ƶ����, �ո��ڿ���Ӧ����, ʣ����ӵ����׵��������ڵ��׻���Esc��ʱ��Ϸ����;
���Զ����ͼ�ߴ�(W, H), �׵�����(B)
��2020.6.25�ϴ�, 2020.10.3����˵����ɾ�����ִ���
ɾ��: ����ʱ��ʾ����ʱ�� (��Ӱ����Ϸ����, ����-1)
������֮ǰ��˵��:
�޸���һЩϸ�ڣ����Ը�������޸ĵ�ͼ��С��(������̫����,��ջ���),����û���ֱ�Ӹ���ԭ���Ĵ�����(2020.7.4)
ʹ��gcc����ͨ��(MinGW)(gcc version 8.2.0)
���������˺ܶ����,����Ҳ����һ�εĸ�����
wasd�����ƹ��,�ո���ڿ���ǰ����,Esc���˳�
����������ʾ��ʱ(��Ȼûʲô��)
Խ�紦��Ƚϴֲ�,����Խ������,������Ӱ������
�ڵ���ʱ����չʾ������,��Ӱ������,��������
*/