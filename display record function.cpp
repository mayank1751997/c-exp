#include<stdio.h>
void displaymenu();
int main()
{
	int choice;
	displaymenu();
	printf("enter the choice");
	scanf("%d",&choice);
	return 0;
}
void displaymenu()
{
	printf("create database\n");
	printf("insert new record\n");
	printf("modify record\n");
	printf("delete the record \n");
	printf("display all record\n");
	printf("exit");
}
