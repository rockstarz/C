/* Exercise 1-2.
 *
 * Experiment to find out what happens when printf's argument string
 * contains \c, where c is some character not listed above.
 */

/* 2.c:12:12: warning: unknown escape sequence '\c'
 * rockstar@u32-10-04:~/code/tcpl/exercises/1$ ./2
 * hello worldcrockstar@u32-10-04:~/code/tcp/exercises/1$ 
 */
#include <stdio.h>

int
main(void)
{
    printf("hello world\c");
    return 0;
}
