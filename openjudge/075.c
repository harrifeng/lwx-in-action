#include <stdio.h>

int main(int argc, char *argv[]){
    int count;
    int i, j;
    int ret[100];
    scanf("%d", &count);
    for (i = 0; i < count; i++) {
        int oneSize = 0;
        int oneArray[60] = { 0 };
        scanf("%d", &oneSize);
        for (j = 0; j < oneSize; j++) {
            scanf("%d", &oneArray[j]);
        }
        ret[i] = 122;
        ret[i] = getRealCount(oneArray, oneSize);
    }

    for (i = 0; i < count; i++) {
        printf("%d\n", ret[i]);
    }

    return 0;
}

int getRealCount(int* array, int size) {
    if (size == 0) {
        return 60;
    }
    int i = 0;
    for (i = size - 1; i >= 0; i--) {
        int distance = 60 - (array[i] + 3 * i + 1);
        if (distance >= 0) {
            if (distance - 3 > 0) {
                return array[i] + distance - 2;
            } else {
                return array[i];
            }
        }
    }
}
