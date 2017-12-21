#include<stdio.h>    
#include<stdlib.h>    
/**
多级指针 数星星  有几个星就是几级指针 取值通过三级指针拿到最初的变量的值 ***point3 
*/
main(){    
      int i = 123;
      //int类型的一级指针 
      int* pointer = &i;
      //int类型的二级指针 二级指针只能保存一级指针的地址 
      int** pointer2 = &pointer; 
      //int类型的三级指针 
      int*** pointer3 = &pointer2; 
      printf("***pointer3 = %d\n",***pointer3);
       system("pause"); 
       } 
