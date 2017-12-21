#include<stdio.h>    
#include<stdlib.h>    
/**
"*" 的几个含义   int*  声明一个int类型的指针变量
            x * y  乘法运算
            int* pointer;
            *pointer; 取出指针变量pointer 中保存的内存地址对应的内存中的值 
*/
 function(int* pointer, int* pointer2){
     *pointer *= 2;
     *pointer2 *=2;
    }
main(){    
      int i =1;
      int j = 2;
      //char c;
      function(&i,&j);
      printf("i = %d,j = %d\n",i,j);
       system("pause"); 
       } 
