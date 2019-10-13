#include <stdio.h>
int count;
void q(unsigned char A, unsigned char B, unsigned char C) {
	if (B == 255) {
		count++;
		return;
	}
	unsigned char D = ~(A | B | C);
	while (D) {
		unsigned char bit = D & (-D);
		D -= bit;
		q((A | bit) << 1, B | bit, (C | bit) >> 1);
	}
}
int main() {
	q(0, 0, 0);
	printf("%d\n", count);
}