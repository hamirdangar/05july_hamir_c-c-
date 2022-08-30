#include<stdio.h>

struct employee{
    int no;
    char name[100];
    char add[100];
    int age;
};

int main()
{
   struct employee emp[5];
   printf("enter info for employee 1:\n");
   printf("emter the emp no :");
   scanf("%d",&emp[0].no);
   printf("enter the emp name :");
   scanf("%s",&emp[0].name);
   printf("enter the emp address :");
   scanf("%s",&emp[0].add);
   printf("enter the emp age :");
   scanf("%d",&emp[0].age); 

   printf("enter info for employee 2:\n");
   printf("emter the emp no :");
   scanf("%d",&emp[1].no);
   printf("enter the emp name :");
   scanf("%s",&emp[1].name);
   printf("enter the emp address :");
   scanf("%s",&emp[1].add);
   printf("enter the emp age :");
   scanf("%d",&emp[1].age); 

   printf("enter info for employee 3:\n");
   printf("emter the emp no :");
   scanf("%d",&emp[2].no);
   printf("enter the emp name :");
   scanf("%s",&emp[2].name);
   printf("enter the emp address :");
   scanf("%s",&emp[2].add);
   printf("enter the emp age :");
   scanf("%d",&emp[2].age); 

   printf("enter info for employee 4:\n");
   printf("emter the emp no :");
   scanf("%d",&emp[3].no);
   printf("enter the emp name :");
   scanf("%s",&emp[3].name);
   printf("enter the emp address :");
   scanf("%s",&emp[3].add);
   printf("enter the emp age :");
   scanf("%d",&emp[3].age); 

   printf("enter info for employee 5:\n");
   printf("emter the emp no :");
   scanf("%d",&emp[4].no);
   printf("enter the emp name :");
   scanf("%s",&emp[4].name);
   printf("enter the emp address :");
   scanf("%s",&emp[4].add);
   printf("enter the emp age :");
   scanf("%d",&emp[4].age); 

   printf("employee info 1 :\n");
   printf("employee no is :%d\n",emp[0].no);
   printf("employee name is :%s\n",emp[0].name);
   printf("employee address is :%s\n",emp[0].add);
   printf("employee age is :%d\n",emp[0].age);

   printf("employee info 2 :\n");
   printf("employee no is :%d\n",emp[1].no);
   printf("employee name is :%s\n",emp[1].name);
   printf("employee address is :%s\n",emp[1].add);
   printf("employee age is :%d\n",emp[1].age);

   printf("employee info 3 :\n");
   printf("employee no is :%d\n",emp[2].no);
   printf("employee name is :%s\n",emp[2].name);
   printf("employee address is :%s\n",emp[2].add);
   printf("employee age is :%d\n",emp[2].age);

   printf("employee info 4 :\n");
   printf("employee no is :%d\n",emp[3].no);
   printf("employee name is :%s\n",emp[3].name);
   printf("employee address is :%s\n",emp[3].add);
   printf("employee age is :%d\n",emp[3].age);

   printf("employee info 5 :\n");
   printf("employee no is :%d\n",emp[4].no);
   printf("employee name is :%s\n",emp[4].name);
   printf("employee address is :%s\n",emp[4].add);
   printf("employee age is :%d\n",emp[4].age);

   return 0;

}