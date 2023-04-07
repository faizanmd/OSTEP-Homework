#include <stdio.h>
#include <stdlib.h>

int main(){
	int *arr = (int*) malloc(100*sizeof(int));

	free(arr+10);

	return 0;
}
