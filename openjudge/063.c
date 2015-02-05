#include <stdio.h>
#include <string.h>
#include <ctype.h>

int getFab(int n) {
    int a = 1;
    int b = 1;
    int c = 1;
    while (n > 2) {
        c = (a + b ) % 1000;
        a = b;
        b = c;
        n--;
    }
    return c;
}

int main(int argc, char *argv[])
{
    int i;
    int j;
    char* before = NULL;
    char* after = NULL;
    char tmp[200] = {0};
    char str[201] = {0};
    /* while (scanf("%s", str)) { */
    while (gets(str)) {
        before = str;
        after = str;
        while (*after != '\0') {
            if (isalpha(*after) == 0) {
                if (after - before >= strlen(tmp)) {
                    strncpy(tmp, before, after - before);
                    tmp[after - before] = '\0';
                    before = ++after;
                }
            } else {
                after++;
            }
        }
        printf("%s\n", tmp);
        tmp[0] = '\0';

    }
    return 0;
}
