#include<stdio.h>    
#include<stdlib.h>    
/**
32λ����ϵͳ��ַ������32λ   4���ֽڵı���������32λ����ϵͳ���ڴ��ַ 1byte 8λ  4*8=32 
32λ����ϵͳ ָ�����ռ4���ֽ�
64λ����ϵͳ ָ�����ռ8���ֽ� 
*/
main(){    
      int* pointer;
      double* pointerD; 
      printf("int���͵�ָ�����ռ%d���ֽ�\n",sizeof(pointer));
      printf("double���͵�ָ�����ռ%d���ֽ�\n",sizeof(pointerD));
       system("pause"); 
       } 
