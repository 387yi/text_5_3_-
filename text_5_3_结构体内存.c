#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//#pargma pack(1) ����������
//#pargma pack()����������
struct stu1 {
	int a;
	char b;
	char c;
};
struct stu2 {
	char b;
	int a;
	char c;
};

struct stu1 {
	int a;
	char b;
	char c;
};

int main()
{
	struct stu1 s1 ={0};
	struct stu2 s2 = { 0 };
	printf("%d\n",(int)sizeof(s1));//8
	printf("%d\n", (int)sizeof(s2));//12
}