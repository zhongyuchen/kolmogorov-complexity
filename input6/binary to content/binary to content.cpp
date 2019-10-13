//#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <map>
using namespace std;

//using input file to generate gray code

//int main()
//{
//	int i, k;
//	char c;
//	freopen("input6.txt", "rb", stdin);
//	//freopen("content6.txt", "wb", stdout);
//	do
//	{
//		for (i = 0, k = 0; i < 8 && (c = getchar()); i++)
//			k = k * 2 + c - '0';
//	} while (c != EOF && cout << (char)k);
//}

map<int, int> q;

int main()
{
	int i, k;
	char c;
	int cnt = 0;
	freopen("input6.txt", "rb", stdin);
	//freopen("content6.txt", "wb", stdout);
	do
	{
		for (i = 0, k = 0; i < 32 && (c = getchar()); i++)
			k = k * 2 + c - '0';
		if (c != EOF)
		{
			q[k]++;
		}
	} while (c != EOF && cout << k<<endl);

	for (map<int, int>::const_iterator it = q.begin(); it != q.end(); it++)
	{
		cout << it->first << " " << it->second << endl;
	}
}

//after trying to translate this, I found that this can't be translated into valid content
//so I tried to find pattern in binary file
//every 12 number a part, between 2 neighbor part there is only 1 number(out of 12) is distinct
//so it's actually 12 bits gray code
//and 49152=12*(2^12), there is 2^12 grey code in total, this verified the guess of 12 bit gray code
//so how to generate 12 bit gray code(2^12 in total)? recursive function!

//rules of gray code generation: reflective arrangement (based on recursive function)
//1 bit gray code: 2 codes
//(n+1) bit gray code: (based on the fact that gray code is reflective code)
//		first 2^n codes are -> n bit gray code's code in original order, add a prefix '0' to each one
//		first 2^n codes are -> n bit gray code's code in inverted order, add a prefix '1' to each one