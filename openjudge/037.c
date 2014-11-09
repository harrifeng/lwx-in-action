#include <stdio.h>

int reverse(int num) {
    int result = 0;
    /* Do NOT have to consider about the positive or negative */
    while (num) {
        result = result * 10 + num % 10;
        num = num / 10;
    }
    return result;
}

int main(int argc, char *argv[])
{

    int number = 0;
    while (scanf("%d", &number)) {
        printf("%d\n", reverse(number));
    }
    return 0;
}
