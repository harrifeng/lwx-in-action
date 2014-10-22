lwx-in-action
=============

Answer to LeeWX's question

Steps to compile on Mac
-----------------------

+ First to open a Terminal on mac
+ input following to get the code:
```
git clone https://github.com/harrifeng/lwx-in-action.git
```
+ You can see my computer will show following:
```
$ pwd
/Users/i309511/Code/tmp/lwx-in-action
$ ls
README.md	factorial.c	first_n_sum.c
```
+ now you can compile the file by this
```
$ gcc -o first_n_sum.out first_n_sum.c
$ ./first_n_sum.out
3
5.1667
```
+ please be careful that you MUST use "./xxxx.out", the "." should always be there
+ If you want to create your own c file(lwx.c or whatever name you want) on mac, you can
```
subl lwx.c
```
+ A sublime editor will show, input your code and save it (be careful! save the code before compile!! Every
  time  you modify a code, you should first save then compile!)
+ you can compile the file as previous by use gcc -o
```
$ gcc -o lwx.out lwx.c
(master) i309511:lwx-in-action $ ./lwx.out
Hello, LWX
```
