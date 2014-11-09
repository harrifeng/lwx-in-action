#include <stdio.h>
#include <math.h>

/* We implemented this in 037.c */
int reverse(int num) {
    int result = 0;
    /* Do NOT have to consider about the positive or negative */
    while (num) {
        result = result * 10 + num % 10;
        num = num / 10;
    }
    return result;
}

int is_palindrome(int num) {
    /* negative number is NOT palindrome */
    if (num < 0) {
        return 0;
    }
    if (num == reverse(num)) {
        return 1;
    } else {
        return 0;
    }
}

int is_prime(int num) {
    int i = 2;
    /* 求素数这个问题是面试经常考的, 给你一个数比如19, 判断是不是素数, */
    /* 1)sb青年的做法是把2到19作为被除数,19作为除数,除一遍 */
    /* 2)普通青年知道,只需要把2到19/2 作为被除数就可以了. */
    /* 3)文艺青年才知道,其实是2到'根号19'+1 作为被除数就可以了!! */
    int dest = sqrt(num) + 1;   /* need math.h */
    for (int i = 2; i < dest; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char *argv[])
{

    int number = 0;
    int i = 11;
    int count = 0;
    while (scanf("%d", &number)) {
        for (i = 11; i <= number; i++) {
            if (is_prime(i) && is_palindrome(i)) {
                count++;
            }
        }
        printf("%d\n", count);
        /* Do remember to clear count before next loop */
        count = 0;
    }
    return 0;
}
