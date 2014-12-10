#include <stdio.h>

int main(int argc, char *argv[])
{
    float x;
    int n;
    int i = 1;
    /* Should be float, wenxuan take it as integer */
    float a = 2;
    float b = 1;
    double sum = 0;
    scanf("%d", &n);
    while ( i <= n) {
        x = a/b;
        a = a+b;
        b = a-b;
        sum = sum+x;
        i++;
    }
    printf("%.4lf\n",sum);
    return 0;
}
