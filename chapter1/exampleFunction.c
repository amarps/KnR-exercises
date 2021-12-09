/* exponential funcion example */
/* base Pow n  = base * (base * n)    */

#include <stdio.h>

int power(int base, int exp) {
    int res = 1;

    for (int i = 0; i <= exp; ++i) {
	res = res * base;
    }

    return res;
}

int main() {
    for (int i = 1; i < 10; ++i) {
	printf("%d %d %d\n", i, power(i, 2), power(i, 3));
    }
}
