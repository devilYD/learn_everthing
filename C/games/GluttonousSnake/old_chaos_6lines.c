main(){int m[900]={4},z[3]={0},l=3,c='D',C,i,*p;srand(malloc(!system(
"mode con:cols=60 lines=30")));f:for(;m[i=rand()%900];);for(m[i]=-1,++l;
1;_sleep(100)){for(m[z[2]]=l+1,system("cls"),i=0;i<900;i++)_cputs(m[i]>0
&&--m[i]?"()":m[i]?"00":"  ");if(kbhit())C=getch()&95,C-65&&C-68&&C-83&&
C-87||((C^c)&20)-4&&(c=C);p=z+!!(c&16),*p+=c/6&1?1:-1,*p=(*p+30)%30;if(m
[z[2]=*z+z[1]*30]<0)goto f;if(m[z[2]]>1)break;}}

/*
5��̰����, 343�ַ�(���������з�), ��1��80�ַ������½����ܼ��ٴ���;
ADSW�ƶ�, �Ե�ʳ��ɳ�, �ɴ�ǽ, �Ե��Լ�����ʱ��Ϸ����;
���Զ�����ͷλ��(z[0], z[1]), �߳�(l), ��ʼ����(c);
������û��˼, ���滹�ÿ��ַ���(��)
��2020.6.13�ϴ�, 2020.10.1����˵����������һ�������
������֮ǰ��˵��:
ʹ��gcc����ͨ��(MinGW)(gcc version 8.2.0)
��Ȼ����ͦ��ģ���������ͨ��???
������,�����������о���
�ܹ�406�ַ�,ÿ��80�����Ƕ�6��,�͸ɴ�д6����...
*/