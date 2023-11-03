#include<stdio.h>
int main(int argc,char* argv){
	printf("I am the child process\n");
	printf("argument 1 %s\n",argv[1]);
	printf("argument 2 %s\n",argv[2]);
	printf("argument 3 %s\n",argv[3]);
}