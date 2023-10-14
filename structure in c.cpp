#include<stdio.h>
#include<string.h>
struct student{
	int age;
	char name[25];
	int marks;
};
int main()
{
	struct student s1;
	s1.age=10;
  strcpy(s1.name,"monal");
	s1.marks=50;
	printf("%d %s %d\t",s1.age,s1.name,s1.marks);
//	struct student s={12,"monal",45};
//	printf("%d\t",s.age);
//	printf("%s\t",s.name);
//	printf("%d\t",s.marks);
}