#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
	char* command="ls";
	char* argument_list[]={"ls","-l",NULL};
	printf("before calling execvp()\n");
	int  status_code=execvp(command,argument_list);
	if(status_code==-1){
		printf("error");
		exit(1);
	}
	printf("Not be printed if execute correctly");
	return 0;
}