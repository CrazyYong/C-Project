#include<stdio.h>    
#include<stdlib.h>    
/**
*/
main(){  
       int i = 123;
       //一般计算机中用16进制数来表示一个内存地址 
       printf("%#x\n",&i); 
       //int* int类型的指针变量  pointer指针  指针变量只能用来保存内存地址
       //用取地址符&i 把变量i的地址取出来 用指针变量pointer 保存了起来
       //此时我们可以说 指针pointer指向了 i的地址 
       int* pointer = &i; 
       //int *pointer ; int * pointer   
       printf("pointer的值 = %#x\n",pointer);
       printf("*pointer的值%d\n",*pointer);
       *pointer = 456;
       printf("i的值是%d\n",i);
       system("pause"); 
       } 
