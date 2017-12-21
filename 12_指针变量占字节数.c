#include<stdio.h>    
#include<stdlib.h>    
/**
32位操作系统地址总线是32位   4个字节的变量来保存32位操作系统的内存地址 1byte 8位  4*8=32 
32位操作系统 指针变量占4个字节
64位操作系统 指针变量占8个字节 
*/
main(){    
      int* pointer;
      double* pointerD; 
      printf("int类型的指针变量占%d个字节\n",sizeof(pointer));
      printf("double类型的指针变量占%d个字节\n",sizeof(pointerD));
       system("pause"); 
       } 
