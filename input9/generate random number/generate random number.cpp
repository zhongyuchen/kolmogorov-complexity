#include <iostream>
#include <bitset>
using namespace std;

unsigned int r[3];

int main()
{
	r[0] = 1162414137;
	r[1] = 1035654704;
	r[2] = 893643089;
	unsigned int a, b;
	unsigned int limit = 1 << 31;
	unsigned int c = 0x7fffffff;
	cout << limit << endl;
	//for (a = 0; a <= limit; a++)
	//{
	//	if ((r[1] - r[2]) % c == ((r[0] - r[1])*a)%c)
	//	cout << "a: " << a << endl;
	//}

	a = 16807;
	//for (b = 0; b <= limit; b++)
	//{
	//	if (r[1] == (r[0] * a + b) % c)
	//		cout << "b: " << b << endl;
	//}

	//cout << bitset<32>(~0) << endl;

	for (a = 0; a <= limit; a++)
	{
		if (1162414137 == a * 16807 % ~(1 << 31))
			cout << "a: " << a << endl;
	}
	//result:1508303647 is the only one
	//1508303647->the first number 1162414137
}

//迭代取中法，产生小数随机数，而且很容易退化成0，不够ideal
//x[n+1]=(x[n]*x[n])/(1eS)%(1e(2*S))
//rand[n+1]=x[n+1]/(1e(2*S))

//线性同余法，产生整数随机数，效果不错，计算机中生成随机数大多用这种方法
//公式
//rand[n+1]=(rand[n]*a+b)%c
//1.c=?
//所有随机数中的最大数为2147460346<2^31，那么c>=2147460346+1，可以先试试c=2^31-1（mod的数越大，能产生的随机数范围越大，质因数约少，重复的可能性越小）
//而2^31-1是一个很大的质数，很符合
//2.a=? b=?
//联立方程求解
//rand[1]=(rand[0]*a+b)%c -> rand[1]%c=(rand[0]*a+b)%c
//rand[2]=(rand[1]*a+b)%c -> rand[2]%c=(rand[1]*a+b)%c
//其中c=2147460347, rand[0]=1162414137, rand[1]=1035654704, rand[2]=893643089
//又(x+y)%c=(x%c+y%c)%c，通过这个公式可以消去b，可以先求出a
//(rand[1]-rand[2])%c=(rand[0]-rand[1])*a%c
//由于所有数都是正数，所以全是无符号的，而c为2^31-1，则计算过程中容易溢出，所以要用unsigned
//那么暴力算出a吧
//result->
//a: 16807
//a: 991511918

//先取a=16807,代入rand[1]=(rand[0]*a+b)%c，暴力算b
//result->
//b=0

//综上：rand[n+1]=(rand[n]*16807)%((1<<31)-1)

//然后就成功了！！！一次过！！！