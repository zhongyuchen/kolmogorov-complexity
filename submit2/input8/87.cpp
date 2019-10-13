#include<ios>
int c[10],g=1,x,i;
q(int a)
{
	if(a>9)
		for(i=0;i<110;)
			putchar(i%10==c[i/10]|i++/100|48);
	for(int b=0;b<10;c[a]=b++,g?q(a+1):g++)
		for(i=0;i<a;i++)x=b-c[i],g*=a-i^x&&x&&i-a^x;
}
main(){q(0);}
