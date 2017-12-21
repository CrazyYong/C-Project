#include<stdio.h>    
#include<stdlib.h>    
/**
java new对象就会申请一块堆内存
c   malloc memory allocation 内存分配 
c的堆内存 程序员手动申请手动释放  malloc
free 
申请一块堆内存 动态内存分配 
堆内存 不连续的 
堆内存大小不固定 取决机器的状态 
*/
main(){ 
        //malloc 接收的参数 申请内存大小 返回一个内存地址值 申请到的也是一块连续的内存空间   
      int* pointer = malloc(sizeof(int)*5);
      *(pointer+0) = 1;
      *(pointer+1) = 2;
      *(pointer+2) = 3;
      *(pointer+3) = 4;
      *(pointer+4) = 5;
      //C for 循环 循环的临时变量i 要先声明再使用 
      int i;
      for(i = 0;i<5;i++){
              printf("第%d个元素的值= %d\n",i,*(pointer+i));
              }
      free(pointer);
      printf("第一个元素的值%d\n",*(pointer+0));
       system("pause"); 
       } 
