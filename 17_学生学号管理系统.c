#include<stdio.h>    
#include<stdlib.h>    
/**
����༶����
����һ����ڴ汣��ѧ����ѧ��
���˼��������
��չһ�¶��ڴ�
����������ѧ�� 
realloc re- 
*/
main(){ 
       printf("������༶������:");
       int count;
       scanf("%d",&count);
       //����һ����ڴ�
       int* pointer = malloc(sizeof(int)*count);
       int i;
       for(i = 0;i<count;i++){
             printf("�������%d��ѧ����ѧ��:",i+1);
             scanf("%d", pointer+i);
             }  
       for(i = 0;i<count;i++){
             printf("��%d��ѧ����ѧ����:%d\n",i+1,*(pointer+i));  
             } 
       printf("����������������:");
       //����һ������increment�������� ����������� 
       int increment;
       //�����û������� 
       scanf("%d",&increment);
       //��������һ���㹻����ڴ� 
       //��� malloc���뵽���ڴ���滹���㹻�Ŀռ� realloc����malloc������ڴ�ռ����������㹻����ڴ�ռ�
       //��� malloc���뵽���ڴ����û���㹻�Ŀռ� realloc���ҵ�һ���㹻��Ķ��ڴ� ���Ұ� malloc���뵽���ڴ��е�ֵ���ƹ��� 
      pointer = realloc(pointer,sizeof(int)*(count+increment));
      for(i = count;i<count+increment;i++){
             printf("�������%d��ѧ����ѧ��:",i+1);
             scanf("%d", pointer+i);
            }
      for(i = count;i<count+increment;i++){
            printf("��%d��ѧ����ѧ����:%d\n",i+1,*(pointer+i));  
            }
       system("pause"); 
       } 
