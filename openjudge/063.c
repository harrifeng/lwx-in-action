#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int i;
    int j;
    char* before = NULL;
    char* after = NULL;
    char tmp[201] = {0};
    char str[201] = {0};
    while (gets(str)) {
        before = str;
        after = str;
        while (*after != '\0') {
            if (isalpha(*after) == 0) {
                if (after - before >= strlen(tmp)) {
                    strncpy(tmp, before, after - before);
                    tmp[after - before] = '\0';
                }
                before = ++after;

            } else {
                after++;
            }
        }
        // last letter is the longest
        if (after - before >= strlen(tmp)) {
            strncpy(tmp, before, after - before);
            tmp[after - before] = '\0';
        }
        printf("%s\n", tmp);
        tmp[0] = '\0';

    }
    return 0;
}
