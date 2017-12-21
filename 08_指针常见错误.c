#include<stdio.h>    
#include<stdlib.h>    
/**
*/
main(){  
         //野指针   指针使用之前要初始化 赋给它一个自己程序中声明的变量的地址
         //指针使用的时候要注意 int类型的指针要指向int类型的内存地址, double类型的指针要指向double类型的地址 ....
          //如果乱指会出bug 
         int i; 
         double d = 3.1415;
       int* pointer = &d;
       printf("pointer的值=%#x\n",pointer);
       printf("*pointer = %d\n",*pointer);
       system("pause"); 
       } 
