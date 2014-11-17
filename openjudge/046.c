#include <stdio.h>

/* 这种is-valid-xxx函数都很简单,就好比飞行员体检,一个不合格, */
/* 就不合格,走到最后的,就是合格的 */

int isValid(int num[]) {
    /* num 0 and num 1 are exclusive */
    if (num[0] && num[1]) {
        /* Found improper, directly return! */
        return 0;
    }
    /*****************************************************************************/
    /* As you return directly, you can use if, otherwise you have to use else if */
    /*****************************************************************************/
    /* num 2 and num 3 are exclusive */
    if (num[3] && num[4]) {
        return 0;
    }

    /* ^ means 'exclusive or' (异或) */
    if ((num[5] ^ num[4]) == 0) {
        return 0;
    }

    /* At lease one of them is 1 */
    if ((num[6] || num[7]) == 0) {
        return 0;
    }
    return 1;
}

int main(int argc, char *argv[])
{
    int size = 0;
    int i = 0;
    /* Whey -1 here, because if it is 0, the arr[tmp] will always be 1!! */
    int tmp = -1;
    /* At first all are zero */
    int arr[8] = {0};
    scanf("%d", &size);
    for (i = 0; i < size; i++) {
        scanf("%d", &tmp);
        arr[tmp] = 1;
    }

    if (isValid(arr)) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    return 0;
}
