#include <stdlib.h>
#include <conio.h>
int W = 13, S, *m, z = 0, c = 1, r = 2, i, j;
int sum(int v, int l){
    return (abs(v % W - (v + l) % W) - W + 1 && v + l >= 0 && v + l < S) && 
        m[v] == m[v + l] ? 1 + sum(v + l, l) : 0;
}
int main(){
    for (m = calloc(S = W * W, 4); r < 4 && c - 27; c = _getch() & 95){
        c - 68 || ++z, c - 65 || --z, c - 83 || (z += W), c - 87 || (z -= W);
        if (z = (z + S) % S, system("cls"), i = 2, !c && !m[z])
            for (m[z] = r ^= 3; j = i % 3 - 1 + i / 3 * W, i < 6; ++i)
                sum(z, j, 4) + sum(z, -j, 4) > 3 && (r ^= 3, i = r += 4);
        for (i = 0; i < S; ++i % W || _cprintf("%d\n", i / W))
            _cprintf("%c%c", " >"[i == z], " 0@"[m[i]]);
        for (i = 0; i < W; ++i)_cprintf(" %c", 97 + i);
        _cprintf(r & 1 ? "\nWhite" : "\nBlack"), r < 4 || _cputs(" win!");
    }
}

/*
adsw�ƶ����ո����ӣ�Esc�˳����ڷ����֣��ȴ�������Ļ�ʤ
'@'�ǰ���,'O'�Ǻ���,'>'�ǹ��, ���Զ������̳ߴ�(W)
��С�����Լ���(3�е�W)(�̶������1:1)
���ϴε��Թ�һ�����о�ûʲô�ܸ��ӵĲ��֣�����ͽ���ֱ���հ�ɨ��
��лĳ����Ⱥ�Ѳ���ָ��һ��������һ���߼�����(2020.7.25����)
����Ⱥ�Ѳ�����������û�뵽��...
2020.10.5�Ż����ִ���
��2020.7.24�ϴ�
*/
