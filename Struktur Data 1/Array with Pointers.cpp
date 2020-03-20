#include<stdio.h>
int main(){
	int arr[4][4][2] = {1,2,3,4,5,6,7,8,9,10,11};
	int (* ar)[4][2] = arr;
	int r,c,b;
	
	for (r=0; r<4; r++){
		for (c=0; c<4; c++){
			for (b=0; b<2; b++){
			printf("%d\t",*(*(*ar + r) + c) + b);
			printf(" ");
		}
		printf("\n");
	}
	printf("\n");
	}
	
	return 0;
}
