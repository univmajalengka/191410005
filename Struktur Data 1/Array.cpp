#include<stdio.h>
int main(){
	int arr[4][3];
	int r,c;
	
	for (r=0; r<4; r++){
		for (c=0; c<3; c++){
			printf("Masukan Nilai [%d][%d] : ",r,c);
			scanf("%d",&arr[r][c]);
		}
	}
	
	for (r=0; r<4; r++){
		for (c=0; c<3; c++){
			printf("%d",arr[r][c]);
			if(c==2){
			printf("\n");
			}
		}
	}
	
	return 0;
}
