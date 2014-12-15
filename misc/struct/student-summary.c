#include <stdio.h>
#include <stdlib.h>

struct Stu {
    char  name[100];
    char  number[100];
    int   sub1;
    int   sub2;
    int   sub3;
};


int main(int argc, char *argv[])
{
    struct Stu stuarr[100];

    int total = 0;
    int i;

    scanf("%d", &total);
    for (i = 0; i < total; i++) {
        scanf("%s %s %d %d %d", stuarr[i].name, stuarr[i].number,
              &stuarr[i].sub1, &stuarr[i].sub2, &stuarr[i].sub3);
    }
    /* 你就应该在这里进行排序啦! 排序用到一个叫做qsort的函数,你得学习下了... */
    /* qsort这个函数在lwx-in-action这个工程里面有,你要用"grep"这个bash */
    /* 命令在工程里面找到它... */

    for (i = 0; i < total; i++) {
        printf("%s %s %d %d %d\n", stuarr[i].name, stuarr[i].number,
               stuarr[i].sub1, stuarr[i].sub2, stuarr[i].sub3);

    }

    return 0;
}
