#include<stdio.h>    
#include<stdlib.h>    
/**
*/
main(){  
       int i = 123;
       //һ����������16����������ʾһ���ڴ��ַ 
       printf("%#x\n",&i); 
       //int* int���͵�ָ�����  pointerָ��  ָ�����ֻ�����������ڴ��ַ
       //��ȡ��ַ��&i �ѱ���i�ĵ�ַȡ���� ��ָ�����pointer ����������
       //��ʱ���ǿ���˵ ָ��pointerָ���� i�ĵ�ַ 
       int* pointer = &i; 
       //int *pointer ; int * pointer   
       printf("pointer��ֵ = %#x\n",pointer);
       printf("*pointer��ֵ%d\n",*pointer);
       *pointer = 456;
       printf("i��ֵ��%d\n",i);
       system("pause"); 
       } 
