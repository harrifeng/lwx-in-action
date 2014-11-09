#include <stdio.h>

/***********************************************************************************/
/* Please see bubble sort(the easiest way to sort) in                              */
/* [Introduction to Algorithms, chapter 2] http://book.douban.com/subject/1885170/ */
/* Download from http://pan.baidu.com/s/1dD5tO7v (password => 3oou)                */
/***********************************************************************************/
void bubble_sort(int array[], int size) {
    int i;
    int j;
    int tmp;
    for (i = 0; i < size; i++) {
        for (j = size - 1; j >= i + 1; j--) {
            if (array[j] < array[j-1]) {
                /* swap array[j] and array[j-1] */
                tmp = array[j];
                array[j] = array[j-1];
                array[j-1]= tmp;
            }
        }
    }
}

int main(int argc, char *argv[])
{
    int tmp = 0;
    int num[5] = {0};
    int count = 0;
    int sorted = 1;
    int i = 0;

    while (scanf("%d", &num[count])) {
        if (count > 0 && num[count] < num[count - 1]) {
            /* not a sorted array, change sorted to 0 */
            sorted = 0;
        }
        if (count == 4) {
            if (sorted) {
                printf("Yes\n");
            } else {
                printf("No ");
                bubble_sort(num, 5);
                for(i = 0; i < 5; i++) {
                    /****************************************************************/
                    /* I set one space after the number, online judge system answer */
                    /* may have No space at very last, if you think your anser is   */
                    /* correct, maybe it is the space that make it wrong            */
                    /****************************************************************/
                    printf("%d ", num[i]);
                }
                printf("\n");
            }
            /* reset the paramter 1) count to 0, and sorted to true */
            count = 0;
            sorted = 1;
            /* continue will make program go to next input, will NOT run count++ in this example*/
            continue;
        }
        count++;
    }
    return 0;
}
