#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef struct stu
{
	char name[20];
	int age;
	char tele[12];
	char sex;
}stu;
struct ttu
{
	char work[10];
	char* pc;
	struct stu;
};
void print1(struct ttu x)//这种写法要用一个和原数据一样的空间大小
{
	printf("%s\n", x.work);
	printf("%s\n", x.name);
	printf("%d\n", x.age);
}
void print2(struct ttu* x)//这种写法只需要地址的空间大小就可以了
{
	printf("%s\n", x->work);
	printf("%s\n", x->name);
	printf("%d\n", x->age);
}


int main()
{
	char arr[] = "hello word\n";
	struct ttu t = { "dianli",arr,{"yecc",24,"15346971254","boy"} };
	print1(t);
	print2(&t);
	return 0;
}