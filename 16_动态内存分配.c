#include<stdio.h>    
#include<stdlib.h>    
/**
java new����ͻ�����һ����ڴ�
c   malloc memory allocation �ڴ���� 
c�Ķ��ڴ� ����Ա�ֶ������ֶ��ͷ�  malloc
free 
����һ����ڴ� ��̬�ڴ���� 
���ڴ� �������� 
���ڴ��С���̶� ȡ��������״̬ 
*/
main(){ 
        //malloc ���յĲ��� �����ڴ��С ����һ���ڴ��ֵַ ���뵽��Ҳ��һ���������ڴ�ռ�   
      int* pointer = malloc(sizeof(int)*5);
      *(pointer+0) = 1;
      *(pointer+1) = 2;
      *(pointer+2) = 3;
      *(pointer+3) = 4;
      *(pointer+4) = 5;
      //C for ѭ�� ѭ������ʱ����i Ҫ��������ʹ�� 
      int i;
      for(i = 0;i<5;i++){
              printf("��%d��Ԫ�ص�ֵ= %d\n",i,*(pointer+i));
              }
      free(pointer);
      printf("��һ��Ԫ�ص�ֵ%d\n",*(pointer+0));
       system("pause"); 
       } 
