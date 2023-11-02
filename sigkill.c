#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
int main(){
	pid_t target_pid;
	printf("Enter pid of process to kill:");
	scanf("%d",&target_pid);
	if(kill(target_pid,SIGKILL)==0){
	printf("Process with pid %d killed",target_pid);
	}
	else{
	printf("eroor");
	}
	return 0;
}