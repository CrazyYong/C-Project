#include<stdio.h>    
#include<stdlib.h>    
/**
main函数获取子函数中临时变量的地址 
*/
function(int** pointer){
   int i = 123;
    *pointer = &i;  
    printf("i的地址%#x\n",&i);    
          }

main(){    
      int* pointer1;
      function(&pointer1);
      printf("pointer1的值%#x\n",pointer1);
       system("pause"); 
       } 
