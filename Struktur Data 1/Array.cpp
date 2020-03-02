#include<stdio.h>
int main(){
	int arr[3][4];
	int r,c;
	
	for (r=0; r<3; r++){
		for (c=0; c<4; c++){
			printf("Masukan Nilai [%d][%d] : ",r,c);
			scanf("%d",&arr[r][c]);
		}
	}
	
	for (r=0; r<3; r++){
		for (c=0; c<4; c++){
			printf("%d",arr[r][c]);
			if(c==3){
			printf("\n");
			}
		}
	}
	
	return 0;
}
