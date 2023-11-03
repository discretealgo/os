#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
	int var;
	printf("Enter val");
	scanf("%d",&var);
	int pid=fork();
	if(pid<0){
		printf("Fork failed");
		return 1;
	}
	else if(pid==0){
		var+=10;
		printf("Child process %d",var);
	}
	else{
		var-=5;
		printf("parent %d",var);
	}
	return 0;
}