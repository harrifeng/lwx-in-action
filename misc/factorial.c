#include <stdio.h>

/* declare first, so that main can know about function fn,
   because fn is implemented after main*/
int fn(int n);

int main(int argc, char *argv[])
{
    int n;
    int sum = 0;
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

int fn(int n) {
    int count = 1;
    int i = 1;
    for (i = 1; i <= n; i++) {
        count = count * i;
    }
    return count;
}
