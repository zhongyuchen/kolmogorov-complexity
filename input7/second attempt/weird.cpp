#include <stdio.h>//800 bits
//#define BITS 800
#define BITS 16000
//you need to erase the 3 at the front, and append a 0 at the end
#define a  10000
long b;
long c = BITS*7/2;
long d;
long e;
long f[BITS*7/2+1];
long g;
int main() {
	//freopen("back.txt", "wb", stdout);

	//for (; b - c;) f[b++] = a / 5;

	  //while (1) {
	  //    if (0==b-c) break;
	  //    f[b]=a/5;
	  //    b++;
	  //}

	for (b=0;b < c;b++)
		f[b] = a / 5;//2000

	//f[0 - 2800] = 10000/5
	//for (; d = 0, g = c * 2; c -= 14, printf("%.4d", e + d / a), e = d%a)
	//	for (b = c; d += f[b] * a, f[b] = d%--g, d /= g--, --b; d *= b);
	//e = -3000;
	for (; 1;)
	//for(int i=0;i<4000;i++)
	{
	      d=0;
	      g=c*2;
	      if (0==g) break;
		  for (b = c; 1;) {
	          d+=f[b]*a;
	          f[b]=d%--g;
	          d/=g--;
	          --b;
	          if (0==b) break;
	          d*=b;
	      }
	      c-=14;
	      printf("%.4d",e+d/a);
		  //printf("\n");
	      e=d%a;
	  }

	return 0;
}

//back-up file
//#include <stdio.h>//800 bits
////#define BITS 800
//#define BITS 16000
////you need to erase the 3 at the front, and append a 0 at the end
//#define a  10000
//long b;
//long c = BITS * 7 / 2;
//long d;
//long e;
//long f[BITS * 7 / 2 + 1];
//long g;
//int main() {
//	freopen("back.txt", "wb", stdout);
//	for (; b - c;) f[b++] = a / 5;
//	//while (1) {
//	//	if (0 == b - c) break;
//	//	f[b] = a / 5;
//	//	b++;
//	//}
//
//	//f[0 - 2800] = 10000/5
//	for (; d = 0, g = c * 2; c -= 14, printf("%.4d", e + d / a), e = d%a)
//		for (b = c; d += f[b] * a, f[b] = d%--g, d /= g--, --b; d *= b);
//	//while (1) {
//	//	d = 0;
//	//	g = c * 2;
//	//	if (0 == g) break;
//	//	b = c;
//	//	while (1) {
//	//		d += f[b] * a;
//	//		f[b] = d%--g;
//	//		d /= g--;
//	//		--b;
//	//		if (0 == b) break;
//	//		d *= b;
//	//	}
//	//	c -= 14;
//	//	printf("%.4d", e + d / a);
//	//	e = d%a;
//	//}
//
//	return 0;
//}


//2800 bits
//#include<iostream>
//
//long b, c = 2800, d, e, f[2801], g;
//int main()
//{
//	freopen("back.txt", "wb", stdout);
//	for (b = 0; b-c;b++)
//		f[b] = 2;
//	e = 0;
//	while (c > 0)
//	{
//		d = 0;
//		for (b = c; b > 0; b--)
//		{
//			d *= b;
//			d += f[b] * 10;
//			f[b] = d % (b * 2 - 1);
//			d /= (b * 2 - 1);
//		}
//		c--;
//		printf("%d", (e + d / 10) % 10);
//		e = d % 10;
//	}
//	return 0;
//}