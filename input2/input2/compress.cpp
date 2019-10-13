#include <iostream>
#include <algorithm>
#include <string>
#include <bitset>
//#define CONTENT 16895

//14-3 is the best, with 6 useless appending '0'
#define BUFFER 16384 
#define LOOK 10 

#define DISTANCE 14//2^DISTANCE=BUFFER
#define LENGTH 3//2^LENGTH+2=LOOK

//if LENGTH is larger, then more char more char can be matched, but used more bits to represent LENGTH
//if DISTANCE is larger, then the length of matched string may be longer and the chances of matching is higher, but used more bits to represent DISTANCE
//so according to the feature of the artical, as LENGTH gets larger, there will be a smallest size of the file 
//this is the same for DISTANCE
//however, when these 2 parameters are changing at the same time, the effect if unknown

using namespace std;

string content;

int main()
{
	freopen("article.txt", "rb", stdin);
	//freopen("test.txt", "rb", stdin);
	freopen("feature14-3.txt", "wb", stdout);
	//freopen("chartest.txt", "wb", stdout);

	unsigned char c;
	string s;
	while (~scanf("%c", &c))
	{
		s = c;
		content += s;
	}

	int ci, bi;//content index, buffer index
	int tci, tbi;//temp content index, temp buffer index
	int ml, md;//max length, max distance
	int l;
	int i, j;
	int eight;
	int length;

	length = content.size();

	cout << bitset<8>(content[0]);
	//cout << 0 << " " << content[0] << endl;
	for (ci = 1; ci < length; ci += ml)
	{
		//find the longest match
		md = ml = 0;

		for (bi = ci - 1; bi >= 0 && bi >= ci - BUFFER; bi--)
		{
			l = 0;
			for (tbi = bi, tci = ci; ; )
			{
				//cout << "tci: " << tci << endl;
				if (l >= LOOK || tci >= length)
				{
					ml = l;
					md = ci - bi;
					l = 0;
					break;
				}
				if (content[tci] == content[tbi])
				{
					l++;
					tci++;
					tbi++;
				}
				else
				{
					if (l > ml)
					{
						ml = l;
						md = ci - bi;
					}
					//cout << "out: " << tbi << " " << tci << endl;
					break;
				}
			}
		}

		//when decoding, transform back to (ml + 3)
		if (ml - 3< 0)//so that ml is [0, 15)
		{
			ml = 1;
			cout << bitset<8>(content[ci]);
			//cout << 0 << " " << content[ci] << endl;
		}
		else
		{
			cout << 1;
			cout << bitset<DISTANCE>(md);
			cout << bitset<LENGTH>(ml - 3);
			//cout << " " << md << " " << ml << endl;
		}
	}

}
