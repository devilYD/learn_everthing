#include <stdlib.h>
#include <conio.h>
int main() {
    int W = 20, S = W * W, *m, z[2] = {0}, l = 3, i, c = 'D', C, *p, f;
    for (srand(m = calloc(S, 4)), C = m[1] = -1; C - 27; _sleep(100)) {
        if (_kbhit())C = _getch() & 95, C - 65 && C - 68 &&
            C - 83 && C - 87 || (C ^ c) & 20 ^ 4 && (c = C);
        p = z + !!(c & 2), *p += c / 3 & 2, *p = (--*p + W) % W;
        f = !system("cls"), *(p = m + *z + z[1] * W) > 0 && (C = 27);
        for (; *p && (m[i = rand() % S] || (--m[i], ++l, --f)););
        for (i = 0, *p = l; i < S; ++i % W || _cputs("|\n"))
            _cputs(m[i] > 0 ? m[i] -= f, "()" : m[i] ? "00" : "  ");
    }
}

/*
14��̰����, 668�ַ�, ʵ���˼򵥵Ĺ���;
ADSW�ƶ�, �Ե�ʳ��ɳ�, �ɴ�ǽ, �Ե��Լ��������Esc��ʱ��Ϸ����;
���Զ�����ͷλ��(z[0], z[1]), �߳�(l), ��ʼ����(c), ��ͼ�ߴ�(W);
��15�еİ汾�ϼ��ԸĽ�, ������Esc���˳�, ��������Զ����ͼ��С;
ע��: ����ʳ�������ǹ̶�λ��, Ĭ������»��ڵ�һ��ѭ������������
(�����������ر��, �����޸���Ĭ�ϲ���, һ�㶼�����������ϸ��)
��2020.7.4�ϴ�, 2020.10.1����˵��
������֮ǰ��˵��:
�޸���һ������, ��֮ǰ����������...
VS����4996�Ŵ�����ϴ˴���ɽ��
#pragma warning(disable:4996)
2020.9.30
ʹ��gcc����ͨ��(MinGW)(gcc version 8.2.0)
��15�еĻ����ϸ�����һЩϸ�ڣ��Լ�
�޸ĵ�ͼ��С�������ˣ�Esc���˳�
*/
/*
ȥ���&��˸����(��Mazeʹ�ù��ļ���)�� 
1��: �� stdlib.h �ĳ� windows.h 
9��: �� system("cls") ȥ��
4~5��֮����룺
SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &(CONSOLE_CURSOR_INFO) { 25, 0 });
10~11��֮����룺
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (COORD) { 0, 0 });
*/