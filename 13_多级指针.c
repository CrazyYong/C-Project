#include<stdio.h>    
#include<stdlib.h>    
/**
�༶ָ�� ������  �м����Ǿ��Ǽ���ָ�� ȡֵͨ������ָ���õ�����ı�����ֵ ***point3 
*/
main(){    
      int i = 123;
      //int���͵�һ��ָ�� 
      int* pointer = &i;
      //int���͵Ķ���ָ�� ����ָ��ֻ�ܱ���һ��ָ��ĵ�ַ 
      int** pointer2 = &pointer; 
      //int���͵�����ָ�� 
      int*** pointer3 = &pointer2; 
      printf("***pointer3 = %d\n",***pointer3);
       system("pause"); 
       } 
