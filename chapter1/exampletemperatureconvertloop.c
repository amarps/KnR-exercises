#include <stdio.h>

/* (0°C × 9/5) + 32 = 32°F */
int main() {
    for(int c = 0; c <= 300; c+=20)
	printf("%d \t %d\n", c, (c * 9/5) + 32);
}
