#include<ios>
unsigned a=1508303647,i=32e4;main(){while(i)putchar((i--%32?a:a=a*16807%~(1<<31))>>i%32&1|48);}