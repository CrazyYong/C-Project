#include<stdio.h>    
#include<stdlib.h>    
/**
*/
main(){  
         //Ұָ��   ָ��ʹ��֮ǰҪ��ʼ�� ������һ���Լ������������ı����ĵ�ַ
         //ָ��ʹ�õ�ʱ��Ҫע�� int���͵�ָ��Ҫָ��int���͵��ڴ��ַ, double���͵�ָ��Ҫָ��double���͵ĵ�ַ ....
          //�����ָ���bug 
         int i; 
         double d = 3.1415;
       int* pointer = &d;
       printf("pointer��ֵ=%#x\n",pointer);
       printf("*pointer = %d\n",*pointer);
       system("pause"); 
       } 
