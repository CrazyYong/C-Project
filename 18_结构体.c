#include<stdio.h>    
#include<stdlib.h>    
/**
c结构体 类似java的class  struct来声明c的结构体 
结构体的大小大于等于结构体中每一变量的占字节数的和
 结构体的大小是最大的那个变量所占字节数的整数倍 
 C结构体中不能定义函数  
 
 函数指针的定义   返回值(*函数指针变量名字)(返回值); 
 -> 间接引用运算符   
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
// printf("结构体student占%d个字节\n",sizeof(stu));
       system("pause"); 
       } 
