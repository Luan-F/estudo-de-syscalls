#include <stdio.h>
#include <unistd.h>

int main(){
	pid_t pid;

	for(int i = 0 ; i < 2 ; i++){
		pid = fork();

		if(pid != 0){
			printf("%d\n", pid);
		}
	}

	exit(0);
}
