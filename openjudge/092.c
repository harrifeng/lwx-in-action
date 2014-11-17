#include <stdio.h>

/* declaration(声明) should be outside the main function */
int exchange(int array[][5], int m, int n);

int main(int argc, char *argv[])
{
    int m, n;
    /* Use status other than x here, becasue you will be puzzled, as x is already in sub function exchange */
    int i, j, status;
    int array[5][5];

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    scanf("%d %d", &m, &n);
    /* You have to use extral variable status to get the result from exchange function */
    /* Previously, you assign value to x in exchange function , and thought(原以为)x is */
    /* knowing the result of exchange here. It is WRONG! */
    status = exchange(array, m, n);
    if (status == 0) {
        printf("error");
    } else {
        for (i = 0; i < 5; i++) {
            for (j = 0; j < 5; j++) {
                printf("%4d", array[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}

int exchange(int array[5][5], int m, int n) {
    int b[5] = {0};
    int j;
    if (m > 4 || n > 4) {
        /* do NOT use a extral 'x' here, if there are ONLY two status, you don't even have to store them */
        return 0;
    } else {
        for (j = 0; j < 5; j++) {
            b[j] = array[m][j];
            array[m][j] = array[n][j];
            array[n][j] = b[j];
        }
        /* do NOT use a extral 'x' here */
        return 1;
    }
}
