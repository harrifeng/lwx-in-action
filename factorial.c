#include <stdio.h>

/* declare first, so that main can know about function fn,
   because fn is implemented after main*/
long fn(int n);

int main(int argc, char *argv[])
{
    int n;
    long sum = 0;
    scanf("%d", &n);
    int i = 1;
    while (i <= n) {
        /* can also as : sum += fn(i) */
        sum = sum + fn(i);
        i++;
    }
    printf("%d\n",sum);
    return 0;
}

long fn(int n) {
    if (n == 0) {
        return 1;
    }
    return fn(n-1) * n;
}
