main(){int m[900]={4},z[3]={0},l=3,c='D',C,i,*p;srand(malloc(!system(
"mode con:cols=60 lines=30")));f:for(;m[i=rand()%900];);for(m[i]=-1,++l;
1;_sleep(100)){for(m[z[2]]=l+1,system("cls"),i=0;i<900;i++)_cputs(m[i]>0
&&--m[i]?"()":m[i]?"00":"  ");if(kbhit())C=getch()&95,C-65&&C-68&&C-83&&
C-87||((C^c)&20)-4&&(c=C);p=z+!!(c&16),*p+=c/6&1?1:-1,*p=(*p+30)%30;if(m
[z[2]=*z+z[1]*30]<0)goto f;if(m[z[2]]>1)break;}}

/*
5行贪吃蛇, 343字符(不包含换行符), 在1行80字符限制下仅可能减少代码;
ADSW移动, 吃到食物成长, 可穿墙, 吃到自己身体时游戏结束;
可自定义蛇头位置(z[0], z[1]), 蛇长(l), 初始方向(c);
比行数没意思, 较真还得看字符量(雾)
于2020.6.13上传, 2020.10.1补充说明并减少了一点代码量
下面是之前的说明:
使用gcc编译通过(MinGW)(gcc version 8.2.0)
虽然报错挺多的，但编译能通过???
不管了,能生成能运行就行
总共406字符,每行80个还是多6个,就干脆写6行了...
*/