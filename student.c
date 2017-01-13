#include<stdio.h>
#include<conio.h>
#include<string.h>

#define size 3

struct student
{
	int roll,sub[5],tot,per;
	char name[20],division[20];
};
student stu[size];	//structure array

void getinfo(void)
{
	int i;
	for(i=0 ; i<size ; i++)
	{
		textcolor(2);
		cprintf("Enter Info of Student %d",i+1);
		printf("\nName :- ");
		fflush(stdin);
		gets(stu[i].name);
		printf("Roll :- ");
		scanf("%d",&stu[i].roll);
		printf("************************\n");
	}
	textcolor(15);
	cprintf("press any key to continue.....");
	getch();
}
