#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
    int cnt;
    int i, j;
    float x[1000] = { 0 };
    float y[1000] = { 0 };
    double maxLen = 0;

    scanf("%d", &cnt);


    for (i = 0; i < cnt; i++) {
        /* 这个地方是非常容易错的,如果你把x或者y声明成double的话,再用 */
        /* scanf("%f"), 就必然会出错.因为%f,只对float起作用. double */
        /* 对应的是%lf, 但是并不是所有的编译器都支持. 所以题目提示了你 */
        /* 使用float输入 */
        scanf("%f", &x[i]);
        scanf("%f", &y[i]);
    }

    for(i = 0; i < cnt - 1; i++) {
        for (j = i + 1; j < cnt; j++) {
            double tmp = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
            if (maxLen < tmp) {
                maxLen = tmp;
            }
        }
    }
    /* sqrt是开方,需要引入math头文件 */
    printf("%.4f\n", sqrt(maxLen));
}
