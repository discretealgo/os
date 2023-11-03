#include<stdio.h>
#include<unistd.h>
#include<errno.h>
int main(){
	printf("\n parent");
	char* arg[4];
	arg[0]="child.c";
	arg[1]="hello";
	arg[2]="good bye";
	arg[3]=NUll;
	execv("Cexecv",arg);
	printf("error %i\n",errno);
}