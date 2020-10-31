#include <stdlib.h>
#include <conio.h>
int main() {
    int map[900] = {0}, z[3] = {0}, len = 4, c = 'D', C, i, *p, a;      //鍦板浘,澶村潗鏍?(x,y,x+W*y),闀垮害,鍔ㄤ綔,鍔ㄤ綔缂撳啿,寰幆鍙橀噺,鎸囬拡,鍙橀噺
    srand((int)(p = (int *)malloc(!system("mode con:cols=60 lines=30"))));  //鍒濆鍖栭殢鏈烘暟绉嶅瓙,浣跨敤malloc浜х敓闅忔満鏁?(鍦板潃),淇敼绐楀彛澶у皬
    for (free(p), map[rand() % 900] = -1; a = 1; _sleep(100)) {         //閲婃斁,鐢熸垚绉嶅瓙;a鍙橀噺澶嶄綅;寤惰繜
        if (_kbhit()) C = _getch() & 95, C - 65 && C - 68 &&            //濡傛湁杈撳叆,鑾峰彇,澶у皬杞皬鍐?,鍒ゆ柇鍔ㄤ綔鏄惁鍐茬獊
            C - 83 && C - 87 || ((C ^ c) & 20) - 4 && (c = C);          //(杩欓噷缁嗚妭寰堝,鍙互鎱㈡參鐞嗚В)
        p = z + !!(c & 16), *p += c / 6 & 1 ? 1 : -1, *p = (*p + 30) % 30;  //鏇存柊澶村潗鏍?,瓒婄晫鍒ゆ柇(瓒婄晫浠庡彟涓�绔嚭鐜?)
        if (map[z[2] = *z + z[1] * 30] < 0 || map[z[2]] > 1 && (exit(0), 0))//鍒ゆ柇鏂扮殑澶村潗鏍?
            for (; map[i = rand() % 900] || (map[i] = -1, ++len, a = 0););  //鐢熸垚椋熺墿.澧炲姞铔囬暱,a=0(淇濈暀铔囧熬)
        for (system("cls"), map[z[2]] = len + 1, i = 0; i < 900; i++)       //娓呭睆, 澶村潗鏍囪祴鍊?,寰幆鎵撳嵃鍦板浘
            _cputs(map[i] > 0 && (map[i] -= a) ? "()" : map[i] ? "00" : "  ");//鎵撳嵃
    }
}
/*
15行贪吃蛇, 779字符, 实现了简单的功能;
ADSW移动, 吃到食物成长, 可穿墙, 吃到自己身体时游戏结束;
可自定义蛇头位置(z[0], z[1]), 蛇长(len), 初始方向(c);
在18行的版本上加以改进, 避免了malloc()返回值被忽略的问题, 以及可穿墙;
我不记得自己有写过这么详细的注释诶...(雾)
此处使用gcc编译通过, vs需要屏蔽4996号错误, 加上下面一行代码
#pragma warning(disable:4996)
于2020.6.13上传, 2020.10.1补充说明
下面是之前的说明:
偷偷更新~应该没人发现吧(除了群里的)(2020.6.13)
使用gcc编译通过(MinGW)(gcc version 8.2.0)
编译有警告,但不影响
还是不懂为什么用_sleep()会警告...用windows.h下的Sleep()就不会警告了
(其实18行贪吃蛇windows.h可以换成stdlib.h的)
*/
/*
去光标&闪烁方法(在Maze使用过的技巧)： 
1行: 把 stdlib.h 改成 windows.h 
12行: 把 system("cls") 去掉
5~6行之间插入：
SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &(CONSOLE_CURSOR_INFO) { 25, 0 });
11~12行之间插入：
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (COORD) { 0, 0 });
*/