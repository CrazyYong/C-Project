#include<stdio.h>    
#include<stdlib.h>    
/**
c�ṹ�� ����java��class  struct������c�Ľṹ�� 
�ṹ��Ĵ�С���ڵ��ڽṹ����ÿһ������ռ�ֽ����ĺ�
 �ṹ��Ĵ�С�������Ǹ�������ռ�ֽ����������� 
 C�ṹ���в��ܶ��庯��  
 
 ����ָ��Ķ���   ����ֵ(*����ָ���������)(����ֵ); 
 -> ������������   
*/
void study(){
           printf("good good study!\n");
           }
typedef struct Student{
      int age;  //8
      int score;  // 4
      char sex;   //1
      void(*studypointer)();
      } stud;
main(){    
 stud stu = {18,100,'f'};
 stu.studypointer = &study;
 stu.studypointer();
 struct Student* stuPointer = &stu;
 printf("*stuPointer.age = %d\n",(*stuPointer).age);
 (*stuPointer).sex ='m';
 printf("stu.sex = %c\n",stu.sex);
 printf("stuPointer->age = %d",stuPointer->age);
 //printf("stu.age = %hd\n",stu.age);
 //printf("stu.score = %d\n",stu.score);
 //printf("stu.sex = %c\n",stu.sex);
// printf("�ṹ��studentռ%d���ֽ�\n",sizeof(stu));
       system("pause"); 
       } 
