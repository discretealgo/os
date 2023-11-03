#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void main(){
	int p=fork();
	if(p==0){
		printf("\n Child process\n");
		printf(" id is %d and ppid is %d",getpid(),getppid());
	}
	else if(p>0){
		sleep(10);
		printf("parent id %d pid %d zombie process",getpid(),getppid());
	}while(1){
		printf("valid");
	}
}