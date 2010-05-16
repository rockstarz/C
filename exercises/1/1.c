/* Exercise 1-1.
 *
 * Run the "hello, world" program on your system. Experiment with
 * leaving out parts of the program to see what error messages you
 * get.
 */

#include <stdio.h> /* 1.c:12: warning: incompatible implicit
                      declaration of built-in function ‘printf’ */

int
main(void)
{  /* 1.c:14: error: expected declaration specifiers before ‘printf’
        1.c:15: error: expected declaration specifiers before ‘return’
        1.c:16: error: expected declaration specifiers before ‘}’ token
        1.c:16: error: expected ‘{’ at end of input
   */

    printf("hello world\n");
    return 0;
}
