#include <stdio.h>

int getFab(int n) {
    int a = 1;
    int b = 1;
    int c = 1;
    while (n > 2) {
        c = (a + b ) % 1000;
        a = b;
        b = c;
        n--;
    }
    return c;
}

int main(int argc, char *argv[])
{
    int i;
    int j;
    int k;
    int tmp;
    int sum[100] = {0};

    scanf("%d", &k);
    for (i = 0; i < k; i++) {
        scanf("%d", &tmp);
        sum[i] = getFab(tmp);
    }

    for (i = 0; i < k; i++) {
        printf("%d\n", sum[i]);
    }
    return 0;
}
