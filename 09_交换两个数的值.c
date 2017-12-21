#include<stdio.h>    
#include<stdlib.h>    
/**
值传递 和引用传递  值传递和引用传递传递的实际上 都是数值  只不过引用传递传递的是地址值 
如果想通过一个子函数来修改main函数中变量的值 一定要用引用传递 
*/
swap(int i, int j){
         int temp = i;
       i = j;
       j = temp;
         
         }
         
swap2(int* pointer, int* pointer2 ){
         int temp = *pointer;
         *pointer = *pointer2;
         *pointer2 = temp;   
           }
main(){    
       int i = 123;
       int j = 456;
      // swap(i,j);
       int temp = i;
       i = j;
       j = temp;
       //swap2(&i,&j);
       printf("i的值%d,j的值%d\n",i,j);
       system("pause"); 
       } 
