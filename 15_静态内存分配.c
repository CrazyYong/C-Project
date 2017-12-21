#include<stdio.h>    
#include<stdlib.h>    
/**
栈内存 系统统一分配统一回收  
静态内存分配 栈内存大小固定的 内存地址是连续的 
*/
int* getData(){
     int array[] ={1,2,3,4,5};
     printf("%#x\n",&array);
     return &array;
     }
int* getData2(){
     int array[] ={5,4,3,2,1};
     printf("%#x\n",&array);
     return &array;
     }

main(){    
     int* pointer = getData();
     getData2();
     printf("%d,%d,%d\n",*(pointer+0),*(pointer+1),*(pointer+2));
     printf("%d,%d,%d\n",*(pointer+0),*(pointer+1),*(pointer+2));
     printf("%#x\n",pointer);
       system("pause"); 
       } 
