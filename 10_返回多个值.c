#include<stdio.h>    
#include<stdlib.h>    
/**
"*" �ļ�������   int*  ����һ��int���͵�ָ�����
            x * y  �˷�����
            int* pointer;
            *pointer; ȡ��ָ�����pointer �б�����ڴ��ַ��Ӧ���ڴ��е�ֵ 
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
