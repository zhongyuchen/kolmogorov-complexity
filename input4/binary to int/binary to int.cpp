#include <iostream>]
#include <map>
using namespace std;
map<int, int> distribution;
int main()
{
	freopen("input4.txt", "rb", stdin);
	//freopen("content4.txt", "wb", stdout);
	freopen("distribution4.txt", "wb", stdout);
	char c;
	int x = 0;
	int i = 0;
	int max = 0, min = 0;
	for (; cin >> c; i++)
	{
		x = (x << 1) ^ (c - '0');
		if (i == 31)
		{
			i = 0;
			//distribution[x]++;
			//cout << x;
			//if (x > max)
			//	max = x;
			//if (x < min)
			//	min = x;
		}
	}

	//cout << endl;
	//cout << "max: " << max << endl;
	//cout << "min: " << min << endl;

	//for (map<int, int>::const_iterator it = distribution.begin(); it != distribution.end(); it++)
	//	cout << it->second;
}

//this file is 320,000 bits, which is a multiple of 32
//so it is likely to be 32 bits a part
//and a part is likely to be a 4 Byte number (10,000 numbers)
//at least there is only 102,514 bits now

//further compression:
//so how to generate these int numbers?
//observing these int numbers, there is no obvious pattern in them
//they 
//so try to find pattern in binary numbers
//and then divided them in to 32 bits a line, for better observation

//as the numbers can be positive or negative
//for further pattern, calculate the numbers' range
//calculate it's max and min
//max: 2147238465
//min : -2147432634
//so -2147432634~2147238465, a very large range

//further more, try to find out the distribution of these numbers
//see if there are some particular numbers which appear more times
//calculate how many times each number appear
//result: each number only appear once and thest numbers have a wide range
//so I can assume that it's generating random numbers
//so I just have to find the right seed and a combination formula