#include<stdio.h>    
#include<stdlib.h>    
/**
scanf("ռλ��",�ڴ��ַ) 
*/
main(){    
      printf("������༶������:");
      
      int count;
      scanf("%d", &count); //&ȡ��ַ�� 
      printf("�༶��������%d\n",count);
      char cArray[20];//c�����鲻����±�Խ�� 
      printf("������༶������:");
      scanf("%s",&cArray);
      printf("�༶��������%d,�༶������%s\n",count,cArray);
      printf("count�ĵ�ַ%d\n",&count);
      printf("cArray�ĵ�ַ%d\n",&cArray);
       system("pause"); 
       } 
