#include <stdlib.h>
#include <conio.h>
int main() {
    int map[900] = {0}, z[3] = {0}, len = 4, c = 'D', C, i, *p, a;      //地图,头坐�?(x,y,x+W*y),长度,动作,动作缓冲,循环变量,指针,变量
    srand((int)(p = (int *)malloc(!system("mode con:cols=60 lines=30"))));  //初始化随机数种子,使用malloc产生随机�?(地址),修改窗口大小
    for (free(p), map[rand() % 900] = -1; a = 1; _sleep(100)) {         //释放,生成种子;a变量复位;延迟
        if (_kbhit()) C = _getch() & 95, C - 65 && C - 68 &&            //如有输入,获取,大小转小�?,判断动作是否冲突
            C - 83 && C - 87 || ((C ^ c) & 20) - 4 && (c = C);          //(这里细节很多,可以慢慢理解)
        p = z + !!(c & 16), *p += c / 6 & 1 ? 1 : -1, *p = (*p + 30) % 30;  //更新头坐�?,越界判断(越界从另一端出�?)
        if (map[z[2] = *z + z[1] * 30] < 0 || map[z[2]] > 1 && (exit(0), 0))//判断新的头坐�?
            for (; map[i = rand() % 900] || (map[i] = -1, ++len, a = 0););  //生成食物.增加蛇长,a=0(保留蛇尾)
        for (system("cls"), map[z[2]] = len + 1, i = 0; i < 900; i++)       //清屏, 头坐标赋�?,循环打印地图
            _cputs(map[i] > 0 && (map[i] -= a) ? "()" : map[i] ? "00" : "  ");//打印
    }
}
/*
15��̰����, 779�ַ�, ʵ���˼򵥵Ĺ���;
ADSW�ƶ�, �Ե�ʳ��ɳ�, �ɴ�ǽ, �Ե��Լ�����ʱ��Ϸ����;
���Զ�����ͷλ��(z[0], z[1]), �߳�(len), ��ʼ����(c);
��18�еİ汾�ϼ��ԸĽ�, ������malloc()����ֵ�����Ե�����, �Լ��ɴ�ǽ;
�Ҳ��ǵ��Լ���д����ô��ϸ��ע����...(��)
�˴�ʹ��gcc����ͨ��, vs��Ҫ����4996�Ŵ���, ��������һ�д���
#pragma warning(disable:4996)
��2020.6.13�ϴ�, 2020.10.1����˵��
������֮ǰ��˵��:
͵͵����~Ӧ��û�˷��ְ�(����Ⱥ���)(2020.6.13)
ʹ��gcc����ͨ��(MinGW)(gcc version 8.2.0)
�����о���,����Ӱ��
���ǲ���Ϊʲô��_sleep()�ᾯ��...��windows.h�µ�Sleep()�Ͳ��ᾯ����
(��ʵ18��̰����windows.h���Ի���stdlib.h��)
*/
/*
ȥ���&��˸����(��Mazeʹ�ù��ļ���)�� 
1��: �� stdlib.h �ĳ� windows.h 
12��: �� system("cls") ȥ��
5~6��֮����룺
SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &(CONSOLE_CURSOR_INFO) { 25, 0 });
11~12��֮����룺
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (COORD) { 0, 0 });
*/