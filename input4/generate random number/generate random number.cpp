#include <iostream>
#include <bitset>
#include <time.h>
int i;
int main()
{
	//freopen("result.txt", "wb", stdout);
	//while(i++<1e4)
	//	std::cout << std::bitset<32>((rand() << 15) | rand());
	std::cout<<std::bitset<32>(rand()); 
	printf("\n");
	std::cout<<std::bitset<32>(rand()); 
}

//at the end, find the seed 1
//compare the seed's binary random numbers with input4
//the first number in input 4:x
//the first and second number in random number sequence: a1, a2
//-> x = a1 << 15 + a2
//so the formula: rand() << 15 + rand()

//use this formula to generate 10,000 binary numbers
//bingo!
