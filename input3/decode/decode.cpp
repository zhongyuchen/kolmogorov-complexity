#include <iostream>
#include <string>
#include <sstream>
#include <bitset>
using namespace std;
string s, t, a;
int p, q;
int main()
{
	freopen("char15-3-4.txt", "rb", stdin);
	freopen("back15-3-4.txt", "wb", stdout);
	unsigned char c;
	while (~scanf("%c", &c))
	{
		stringstream ss;
		ss << bitset<8>(c);
		ss >> t;
		s += t;
	}

	int i, j;
	int x, y;
	//cout << "outside" << endl;
	for (i = 0; i < s.size()-4;)
		if (s[i] == '0')
		{
			//cout << "in1in" << endl;
			c = 0;
			for (j = 8; j > 0; j--)
				c |= (s[i + j] - '0') << (8 - j);
			//cout << "in1out" << endl;
			t = c;
			a += t;
			p++;
			i += 9;
		}
		else
		{
			x = y = 0;
			//cout << "in2in" << endl;
			for (j = 15; j > 0; j--)
				x |= (s[i + j] - '0') << (15 - j);
			//cout << "x" << x << endl;
			for (j = 3; j > 0; j--)
				y |= (s[i + j + 15] - '0') << (3 - j);
			//cout << "y" << y << endl;
			for (j = 0; j < y + 3; j++, p++)
				a.push_back(c = a[p - x]);
			//cout << "a:" << a << endl;
			i += 19;
			//cout << "in2out" << endl;
		}
	for (q = 0; q < a.size(); q++)
		cout << bitset<8>(a[q]);
}