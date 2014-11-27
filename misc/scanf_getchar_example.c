/* 编译这个程序以后,会有如下的结果. 在c语言里面,scanf */
/* 读取的是%d,也就是整数部分,你输入的前半部分是整数"1234", */
/* 后面的"lxy"也会留在一个"地方"(这个地方叫标准输入). */
/* getchar就是去这个"地方"取下一个字符(也就是l),你还 */
/* 可以继续getchar就得到w, 最后getchar得到x, 再getchar */
/* 就得到EOF(字符串结尾符号) */
#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    char command;
    printf("Enter an integer: ");
    scanf("%d", &i);
    printf("Enter an integer: ");
    command = getchar();
    printf("i is %d, and command is %c\n", i, command);
    return 0;
}
/*****************************************************/
/* <===================OUTPUT===================>    */
/* bash > ./a.out                                    */
/* Enter an integer: 1234lxy                         */
/* Enter an integer: i is 1234, and command is l     */
/*****************************************************/
