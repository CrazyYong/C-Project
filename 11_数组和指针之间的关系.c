#include<stdio.h>    
#include<stdlib.h>    
/**
数组实际上就是一块连续的内存空间 
*/
main(){
         
  // char array[] = {'a','b','c','d','\0'};
   int array[] = {1,2,3,4};
   printf("array[0]的地址%#x\n",&array[0]);
   printf("array[1]的地址%#x\n",&array[1]);
   printf("array[2]的地址%#x\n",&array[2]);
   printf("array[3]的地址%#x\n",&array[3]);
   printf("array的地址%#x\n",&array);
   //数组变量名的地址实际上是第一个元素的地址
   char* pointer = &array;
    //int* pointer = &array;
    char array2[] =  "hello from c"
   char* pointer2="hello from c";
   //printf("%s\n",pointer2);
   /*
   printf("*(pointer+0)=%c\n",*(pointer+0));
   printf("*(pointer+0)=%c\n",*(pointer+1));
   printf("*(pointer+0)=%c\n",*(pointer+2));
   printf("*(pointer+0)=%c\n",*(pointer+3));
   */
   printf("*(pointer+0)=%d\n",*(pointer+0));
   printf("*(pointer+1)=%d\n",*(pointer+1));
   printf("*(pointer+2)=%d\n",*(pointer+2));
   printf("*(pointer+3)=%d\n",*(pointer+3));
    
       system("pause"); 
       } 
