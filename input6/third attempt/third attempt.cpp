#include<stdio.h>  
#include<stdlib.h>  
#include <bitset>
#include <string>
#include<iostream>
using namespace std;

//using bit operation and reverse

int main()
{
	int n, i;
	unsigned long x = 1;
	unsigned long y = 0;
	unsigned long t = 0;
	unsigned long z = 0;
	freopen("test.txt", "wb", stdout);
	string s;
	for (y = 0; y<4096; ++y)
	{
		t = y ^ (y >> 1);
		s=bitset<12>(t).to_string();
		reverse(s.begin(), s.end());
		cout << s;
	}
	return 0;
}