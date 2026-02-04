#include<stdio.h>

int main(){
	int i,j;
	int odd = 1;
	
	for(i=1;i<=9;i++){
		odd = 1;
		for(j=1;j<=i;j++){
			if(j%2==1){
				printf(" * ");
			}
			else{
				printf("%d",odd);
				odd = odd + 2;
			}
		}
		printf("\n");
	}
	
	printf("T E C H W A R 2 0 2 6\n");
	
	for(i=11;i>=3;i--){
		for(j=3;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	
	return 0;
}
