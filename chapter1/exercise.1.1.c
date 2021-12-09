#include <stdio.h>

/* Exercise 1-1. Run the ``hello, world'' program on your system. Experiment with leaving */
/* out parts of the program, to see what error messages you get.  */
main() {
  printf("hello world\n");
  pahskjff;
}
/****************************************************************************
##### SOURCE ######
gcc error
int main() {
  printf("hello world")

}
##### ERROR #####
expected ‘;’ before ‘}’ token
    4 |   printf("hello world")
      |                        ^
      |                        ;
    5 | 
    6 | }

#### SOURCE ###
int main() 
  printf("hello world");
}
### ERROR #####
exercise.1.1.c: In function ‘main’:
exercise.1.1.c:4:3: error: expected declaration specifiers before ‘printf’
    4 |   printf("hello world");
      |   ^~~~~~
exercise.1.1.c:5:1: error: expected declaration specifiers before ‘}’ token
    5 | }
      | ^
exercise.1.1.c:21: error: expected ‘{’ at end of input
   21 | 
      | 

##### SOURCE #######
int main() {
  printf("hello world");

  return 0;
}
##### ERROR #####
exercise.1.1.c: In function ‘main’:
exercise.1.1.c:8:3: error: expected declaration or statement at end of input
    8 |   return 0;
      |   ^~~~~~

##### SOURCE #####
int main() {
  printf("hello world);

  return 0;
}

##### ERROR  #####
exercise.1.1.c: In function ‘main’:
exercise.1.1.c:6:10: warning: missing terminating " character
    6 |   printf("hello world);
      |          ^
exercise.1.1.c:6:10: error: missing terminating " character
    6 |   printf("hello world);
      |          ^~~~~~~~~~~~~~
exercise.1.1.c:8:3: error: expected expression before ‘return’
    8 |   return 0;
      |   ^~~~~~
exercise.1.1.c:8:12: error: expected ‘;’ before ‘}’ token
    8 |   return 0;
      |            ^
      |            ;
    9 | }
      | ~           

##### SOURCE #####
main() {
  printf("hello world");
}
##### ERROR #####
cc exercise.1.1.c 
exercise.1.1.c:5:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    5 | main() {
      | ^~~~

##### SOURCE #####
main() {
  printf("hello world\n");
  pahskjff;
}

##### ERROR #####
exercise.1.1.c:7:3: error: ‘pahskjff’ undeclared (first use in this function)
    7 |   pahskjff;
      |   ^~~~~~~~
exercise.1.1.c:7:3: note: each undeclared identifier is reported only once for each function it appears in


      
****************************************************************************/
