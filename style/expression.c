/**
 * reformat this statement inside function
 * -------------------------------------
 * for(n++; n < 100; field[n++] ='\0');
 * *i = '\0'; return('\n');
 * -------------------------------------
 */
char reformatEx1() {
     int n = 0;
     int field[100];
     for (n++; n < 100; n++) {
	  field[n] = '\0';
     }
     *i = '\0';
     return '\n';
}

/**
 * reformat this statement inside function
 * -------------------------------------
 * if (!(block-id < actblks) || !(block-id >= unblock))
 * -------------------------------------
 */
int reformatEx2() {
     return 0;
}
