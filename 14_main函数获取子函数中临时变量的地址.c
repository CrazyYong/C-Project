#include<stdio.h>    
#include<stdlib.h>    
/**
main������ȡ�Ӻ�������ʱ�����ĵ�ַ 
*/
function(int** pointer){
   int i = 123;
    *pointer = &i;  
    printf("i�ĵ�ַ%#x\n",&i);    
          }

main(){    
      int* pointer1;
      function(&pointer1);
      printf("pointer1��ֵ%#x\n",pointer1);
       system("pause"); 
       } 
