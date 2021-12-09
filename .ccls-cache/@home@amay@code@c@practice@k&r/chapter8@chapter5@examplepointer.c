int x = 1, y = 2, z[10];

int main(int argc, char *argv[])
{
    int *ip; /* ip is a pointer to int */
    ip = &x; /* ip is now point to x */
    y = *ip; /* y is now 1 */
    *ip = 0; /* x is now */
    ip = &z[0]; /* ip is now points to z[0] */
 
    return 0;
}

void swap(int *px, int *py) {
  int temp;

  temp = *px;
  *px = *py;
  *py = temp;
}

void _strcpy(char *s, char *t) {
    int i;

    i = 0;
    while ((*s = *t) != '\0') {
	
    }
}
