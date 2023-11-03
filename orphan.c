#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
	int p=fork();
	if(p==0){
		printf("\n In child process %d and parent %d",getpid(),getppid());
		sleep(10);
		printf("\n orphan");
	}
	else if(p>0){
		printf("\n In parent process %d and pid %d",getpid(),getppid());
	}
	else
		print("terminated");
return 1;
}