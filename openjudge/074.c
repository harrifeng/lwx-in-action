#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 如果你是三个成员的话,可以穷举,使用struct的好处是你可以"把问题广泛化", */
/* 比如,你完全可以为30个,300个人使用这个程序,只需要改NUM的定义 */
/* 注意!define是不好的用法, c89没办法采用.c99以后(还有c++中)推荐使用const */
#define NUM 3

struct IndexResult {
    int index;
    int result;
}ir[NUM];                         /* 这个分号不能少,经常犯的错误 */

/* Void* 叫做 void指针,是指针神一般存在的例子..... */
int compare(const void *a, const void *b) {
    /* 看到这些指针了么..为什么java流行,因为找不到那么多可以熟练使用指针的程序员 */
    /* 你觉得自己很熟练了,可是还是会错...这就是指针.. */
    return (*(struct IndexResult*)a).result > (*(struct IndexResult*)b).result;
}

int main(int argc, char *argv[])
{
    int i;
    int j;
    int cnt;
    int result[NUM][100] = {0};
    int r[NUM] = {0};
    char get_ten[] = "right";
    char lost_ten[] = "wrong";
    char get_zero[] = "give-up";
    char tmp[100] = {0};
    char output[NUM][1000] = { 0 };
    /* Whey NUM+1, please think about it! */
    int outequal[NUM+1] = {0};


    scanf("%d", &cnt);
    for (i = 0; i < cnt; i++) {
        for (j = 0; j < NUM; j++) {
            scanf("%s", tmp);
            if (memcmp(get_ten, tmp, sizeof(get_ten)) == 0) {
                result[j][i] = 10;
            } else if (memcmp(lost_ten, tmp, sizeof(lost_ten)) == 0) {
                result[j][i] = -10;
            } else if (memcmp(get_zero, tmp, sizeof(get_zero)) == 0) {
                result[j][i] = 0;
            }
        }
    }

    for (i = 0; i < NUM; i++) {
        for (j = 0; j < cnt; j++) {
            ir[i].index = i + 1; /* why plus 1 here? */
            ir[i].result += result[i][j];
        }
    }
    /* 其实这个题目只有三个成员,你相互比较就可以得到结果,不需要你说的"记住序列", 但是 */
    /* 既然你问了, 那我就实现给你看看 */

    qsort(ir, NUM, sizeof(ir[0]), compare);

    for (i = 0; i < NUM; i++) {
        char tmp[100] = {0};
        if (i > 0 && (ir[i].result == ir[i-1].result)) {
            outequal[i] = 1;
            /* sprintf(tmp, "(%d,%d)\n", ir[i].index, ir[i].result); */
        }
        sprintf(tmp, "(%d,%d)", ir[i].index, ir[i].result);
        strcat(output[i], tmp);
    }

    for (i = 0; i < NUM; i++) {
        int now = i;
        while (outequal[i+1] == 1) {
            strcat(output[now], output[i+1]);
            output[i+1][0] = 0;
            i++;
        }
    }

    for (i = 2; i >= 0; i--) {
        if (output[i][0] != 0) {
            printf("%s\n", output[i]);
        }
    }
    return 0;
}
