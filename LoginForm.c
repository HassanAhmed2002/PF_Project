#include<stdio.h>
#include<conio.h>
#include<strings.h>

void login(int n){
	if(n == 1)
		printf("Welcome Admin");
	else if(n == 2)
		printf("Welcome Company");
	else if(n == 3)
		printf("Welcome User");
}

void main(){
	int choice;
	printf("Welcome To Fast Shopping Mart\n");
	printf("\tLogin Form\n");
	printf("\tPress 1 for Admin Login\n");
	printf("\tPress 2 for Company Login\n");
	printf("\tPress 3 for User Login\n");
	scanf("%d",&choice);
	
	login(choice);
}



