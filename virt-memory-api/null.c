#include <stdio.h>

int main(){
	
	//Ran ./null gave segmentation fault

	int *a = NULL;

	printf("%d", *a);

	return 0;
}
