#include<stdio.h>    
#include<stdlib.h>    
/**
����ʵ���Ͼ���һ���������ڴ�ռ� 
*/
main(){
         
  // char array[] = {'a','b','c','d','\0'};
   int array[] = {1,2,3,4};
   printf("array[0]�ĵ�ַ%#x\n",&array[0]);
   printf("array[1]�ĵ�ַ%#x\n",&array[1]);
   printf("array[2]�ĵ�ַ%#x\n",&array[2]);
   printf("array[3]�ĵ�ַ%#x\n",&array[3]);
   printf("array�ĵ�ַ%#x\n",&array);
   //����������ĵ�ַʵ�����ǵ�һ��Ԫ�صĵ�ַ
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
