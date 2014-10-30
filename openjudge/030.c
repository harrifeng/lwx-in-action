/***************************************************************************/
/* At first you should now that F(n) = 2 ^ 2 ^ k + 1 is actually following */
/*     F(n) = 2 ^ (2 ^ k) + 1                                              */
/* So that                                                                 */
/*     F(n-1) - 1 = 2 ^ (2 ^ (k - 1))                                      */
/*     (F(n-1) - 1) * (F(n-1) - 1) = 2 ^ (2 ^ (k - 1) + 2 ^ (k -1))        */
/*     = 2 ^ (2 ^ k) = F(n) - 1                                            */
/* That is to say:                                                         */
/*     F(n) = (F(n-1) - 1) * (F(n-1) - 1) + 1                              */
/* Use recursion                                                           */
/***************************************************************************/

#include <stdio.h>

unsigned long long fermat(int n) {
    /* For recursion, please alway write the condition to exit */
    /* otherwise the program will loop for ever!!! */
    if (n == 0) {
        return 3;
    }
    return (fermat(n-1) - 1) * (fermat(n-1) - 1) + 1;
}

int main(int argc, char *argv[])
{
    int i;
    int k;
    scanf("%d", &k);
    for (i = 0; i < k; i++) {
        printf("%llu\n", fermat(i));
    }
    return 0;
}
