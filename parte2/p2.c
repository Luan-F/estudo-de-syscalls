#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;

	scanf("%i", &n);

	srand(n);

	int res = rand()%1000;

	printf("%i\n", res);

	return 0;
}
