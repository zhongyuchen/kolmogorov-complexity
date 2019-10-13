#include<ios>
#define F(i,e) for(int i=0;i<e;i++)
int c[10],g=1,x;
q(int a)
{
	F(i,110)a>9?putchar(i%10==c[i/10]|i/100|48):0;
	F(b,10)
	{
		F(i,a)x=b-c[i],g*=x&&a-i^x&&i-a^x;
		c[a]=b;
		g++?q(a+1):0;
	}
}
main(){q(0);}
