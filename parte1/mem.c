#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));

	int n = rand()%500;

	int* arr = (int*)malloc(sizeof(int)*n);

	for(int i = 0 ; i < n ; i++){
		arr[i] = rand()%500;
	}

	exit(0);
}
