#include<stdio.h>    
#include<stdlib.h>    
/**
保存班级人数
申请一块堆内存保存学生的学号
来了几个插班生
扩展一下堆内存
保存插班生的学号 
realloc re- 
*/
main(){ 
       printf("请输入班级的人数:");
       int count;
       scanf("%d",&count);
       //申请一块堆内存
       int* pointer = malloc(sizeof(int)*count);
       int i;
       for(i = 0;i<count;i++){
             printf("请输入第%d个学生的学号:",i+1);
             scanf("%d", pointer+i);
             }  
       for(i = 0;i<count;i++){
             printf("第%d个学生的学号是:%d\n",i+1,*(pointer+i));  
             } 
       printf("请输入插班生的人数:");
       //声明一个变量increment用来保存 插班生的人数 
       int increment;
       //接受用户的输入 
       scanf("%d",&increment);
       //重新申请一块足够大的内存 
       //如果 malloc申请到的内存后面还有足够的空间 realloc会在malloc申请的内存空间后继续申请足够大的内存空间
       //如果 malloc申请到的内存后面没有足够的空间 realloc会找到一块足够大的堆内存 并且把 malloc申请到的内存中的值复制过来 
      pointer = realloc(pointer,sizeof(int)*(count+increment));
      for(i = count;i<count+increment;i++){
             printf("请输入第%d个学生的学号:",i+1);
             scanf("%d", pointer+i);
            }
      for(i = count;i<count+increment;i++){
            printf("第%d个学生的学号是:%d\n",i+1,*(pointer+i));  
            }
       system("pause"); 
       } 
