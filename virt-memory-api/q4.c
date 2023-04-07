#include <stdio.h>
#include <stdlib.h>

int main(){
	int *arr = (int*) malloc(sizeof(int));

	*arr = 4;

	printf("%d\n", *arr);

	return 0;
}
