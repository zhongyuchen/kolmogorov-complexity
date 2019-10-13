#include<ios>
#define F(i,e) for(int i=0;i<e;i++)
int c[10],f,x;
q(int a)
{
	if(a>9)
	F(i,110)putchar(i%10==c[i/10]|i/100|48);
	else
	F(b,10)
	{
		f=1;
		F(i,a)x=b-c[i],f*=x&&a-i^x&&a-i^-x;
		c[a]=b;

		if(f)
		q(a+1);
		
	}
}
main(){q(0);}
