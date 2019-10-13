#include<ios>
int x;main(){for(;x<49152;putchar((x/12^x/24)>>x++%12&1|48));}