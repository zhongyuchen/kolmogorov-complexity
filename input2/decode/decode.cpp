#include <iostream>
#include <string>
#include <sstream>
#include <bitset>
using namespace std;
string s, t, a;
int p, q;
int main()
{
	freopen("char14-3-6.txt", "rb", stdin);
	freopen("back14-3-6.txt", "wb", stdout);
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
	
	for (i = 6; i < s.size();)
		if (s[i] == '0')
		{
			c = 0;
			for (j = 7; j > 0; j--)
				c |= (s[i + j] - '0') << (7 - j);
			t = c;
			a += t;
			p++;
			i += 8;
		}
		else
		{
			x = y = 0;
			for (j = 14; j > 0; j--)
				x |= (s[i + j] - '0') << (14 - j);
			for (j = 3; j > 0; j--)
				y |= (s[i + j + 14] - '0') << (3 - j);
			for (j = 0; j < y + 3; j++, p++)
				a.push_back(c = a[p - x]);
			i += 18;
		}
	for (q = 0; q < a.size(); q++)
		cout << bitset<8>(a[q]);
}