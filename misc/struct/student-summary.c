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
    FILE *fp;
    char *line = NULL;
    size_t len;
    ssize_t read;
    struct Stu stuarr[100];
    int index = 0;

    int total = 0;
    int i;

    scanf("%d", &total);
    for (i = 0; i < total; i++) {
        scanf("%s %s %d %d %d", stuarr[i].name, stuarr[i].number,
              &stuarr[i].sub1, &stuarr[i].sub2, &stuarr[i].sub3);
    }

    for (i = 0; i < total; i++) {
        printf("%s %s %d %d %d\n", stuarr[i].name, stuarr[i].number,
               stuarr[i].sub1, stuarr[i].sub2, stuarr[i].sub3);

    }

    return 0;
}
