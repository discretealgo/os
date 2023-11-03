#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
	int pid=fork();
	if(pid==0){
	printf("INside child process %d , parent %d return %d",getpid(),getppid(),pid);
}
	else if(pid>0){
		printf("inside parent process %d , parent %d return %d",getpid(),getppid(),pid);
	sleep(10);
}
	else{
	printf("unsuccessfull");
	}
	int pid1=fork();
	if(pid1==0){
	printf("INside child process %d , parent %d return %d",getpid(),getppid(),pid);
}
	else if(pid1>0){
		printf("inside parent process %d , parent %d return %d",getpid(),getppid(),pid);
	sleep(10);
}
	else{
	printf("unsuccessfull");
	}
	int pid2=fork();
	if(pid2==0){
	printf("INside child process %d , parent %d return %d",getpid(),getppid(),pid);
}
	else if(pid2>0){
		printf("inside parent process %d , parent %d return %d",getpid(),getppid(),pid);
	sleep(10);
}
	else{
	printf("unsuccessfull");
	}
}