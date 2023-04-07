#include <stdio.h>
#include <stdlib.h>

int main(){
	int *arr = (int*) malloc(100*sizeof(int));

	free(arr);

	printf("%d\n", arr[1]);

	return 0;
}
