#include<ios>
#define F(i,e) for(int i=0;i<e;i++)
int c[10],f,x;
q(int a)
{
	F(b,10)
	{
		f=1;
		F(i,a)x=b-c[i],f*=x&&a-i^(x>0?x:-x);
		if(f)
		{
			c[a]=b;
			if(9==a)
			{
				F(i,110)putchar(i%10==c[i/10]|i/100|48);
				break;
			}
			q(a+1);
		}
	}
}
main(){q(0);}
