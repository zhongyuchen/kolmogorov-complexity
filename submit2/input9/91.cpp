#include<ios>
unsigned a=1162414137;
int main()
{
	for(int i=0;i<1e4;i++)
	{
		for(int j=0;j<32;j++)
		putchar(a>>(31-j)&1|48);
		a=a*16807%((1<<31)-1);
	}
}
