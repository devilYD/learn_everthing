#include<stdlib.h>
#include<conio.h>
#include<time.h>
#define Guide(C) for ( C, i = 0; c = n[z[2]] >> i * 4 & 15, \
	j = *z + c % 4, k = z[1] + c / 4, i < 4; i++)
int W = 10, H = 25, i, j, k, c, oT, *m, z[3] = { 0 }, n[28] = {
51264, 12816, 51264, 12816, 21520, 21520, 21520, 21520, 25872, 34113,
25872, 34113, 21537, 38208, 21537, 38208, 25921, 38481, 38484, 38209,
25922, 43345, 34388, 38160, 25920, 38177, 42580, 38993
};
int move(int *v, int l) {
	Guide(*v += l) (j < 0 || j >= W || k >= H || m[k * W + j]) && (i = 5);
	return i - 4 ? *v -= l, 0 : 1;
}
void down() {
	if (move(z + 1, 1) || z[1] < 1 && (oT = 0))return;
	Guide(0) m[k * W + j] = 1, i - 3 || (z[2] = rand() % 7 * 4,z[1] = 0);
	for (*z = j = 0, i = W * H - 1; j += m[i], i >= W; i-- % W || (j = 0))
		for (k = i + W; j == W && (--k >= W || !(i += W)); m[k] = m[k - W]);
}
int main() {
	for (srand(m = calloc(W * H, 4)), c = oT = 1; oT; _sleep(50)) {
		if (_kbhit())c = _getch() & 95, c - 65 && c - 68 && c - 83 && c - 87 ||
			move(z + (c / 12 - 5), c - 87 - z[2] % 4 ? c / 6 & 1 ? 1 : -1 : 3);
		Guide((system("cls"), c - 27 || (oT = 0))) m[k * W + j] = -1;
		for (i = 0; i < W * H; ++i % W || _cputs("|\n"))
			_cputs(m[i] ? "[]" : "  "), m[i] += m[i] < 0;
		if (clock() - 1000 > oT && oT) oT = clock(), down();
	}
}

/*
30�ж���˹����, 1314�ַ�, ʵ���˼򵥵Ĺ���;
AD�ƶ�, S��׹, W��ת, ĳһ����������������, ������ѵ��������Esc��ʱ��Ϸ����;
���Զ����ͼ�ߴ�(W, H)
��33�еİ汾�ϼ��ԸĽ�, �Ż������߼�, ������׹�ٶ�, �����޸ĵ�ͼ��С, Esc���˳�
�˴�ʹ��gcc����ͨ��, vs��Ҫ����4996�Ŵ���, ��������һ�д���
#pragma warning(disable:4996)
��2020.6.13�ϴ�, 2020.10.2����˵��
������֮ǰ��˵��:
�޸���һЩϸ�ڣ����Ը�������޸ĵ�ͼ��С���˳�(Esc��),����û���ֱ�Ӹ���ԭ���Ĵ�����(2020.7.4)
͵͵����~Ӧ��û�˷��ְ�(2020.6.13)
ʹ��gcc����ͨ��(MinGW)(gcc version 8.2.0)
���֮ǰ,����Զ���׹���ٶȱ仺��,��״������������ͼ���޹�
֮ǰ����״�����ͼ���й�,���Ҫ�ĵ�ͼ��С...
*/
/*
ȥ���&��˸����(��Mazeʹ�ù��ļ���)�� 
1��: �� stdlib.h �ĳ� windows.h 
26��: �� system("cls") ȥ��
22~23��֮����룺
SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &(CONSOLE_CURSOR_INFO) { 25, 0 });
25~26��֮����룺
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (COORD) { 0, 0 });
*/