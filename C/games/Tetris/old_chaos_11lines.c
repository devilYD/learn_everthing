#define G(C)for(C,i=0;c=n[z[2]]>>i*4&15,j=*z+c%4,k=z[1]+c/4,i<4;i++)
int i,j,k,c,oT,m[250]={0},z[3]={0},n[28]={51264,12816,51264,12816,21520,21520,
21520,21520,25872,34113,25872,34113,21537,38208,21537,38208,25921,38481,38484,
38209,25922,43345,34388,38160,25920,38177,42580,38993};M(int*v,int l){G(*v+=l)
(j<0||j>9||k>24||m[k*10+j])&&(i=5);return i-4?*v-=l,0:1;}D(){if(M(z+1,1)||z[1]
<1&&(exit(0),0))return;G(0)m[k*10+j]=1;for(i=249,j=0;j+=m[i],i>9;i--%10||(j=0)
)for(k=i+10;j==10&&(k-->9||!(i+=10));m[k]=m[k-10]);i=-1;}main(){srand(time(0))
,system("mode con:cols=20 lines=25"),oT=0;for(;i+1||!(z[2]=rand()%7*4,*z=z[1]=
0);_sleep(50)){if(kbhit())c=getch()&95,c-65&&c-68&&c-83&&c-87||M(z+(c/12-5),c-
87-z[2]%4?c/6&1?1:-1:3);G(system("cls"))m[k*10+j]=-1;for(i=0;i<250;i++)_cputs(
m[i]?"[]":"  "),m[i]+=m[i]<0;if(clock()-1000>oT)oT=clock(),D();}}

/*
11行俄罗斯方块, 835字符(不包含换行符), 在1行80字符限制下仅可能减少代码;
AD移动, S下坠, W旋转, 某一行填满方块则消行, 当方块堆到顶层时游戏结束;
比行数没意思, 较真还得看字符量(雾)
此处使用gcc编译通过, vs需要屏蔽4996号错误, 加上下面一行代码
#pragma warning(disable:4996)
于2020.6.13上传, 2020.10.2补充说明
下面是之前的说明:
使用gcc编译通过(MinGW)(gcc version 8.2.0)
能编译通过就行
总字符835个，差不多就这样了
*/