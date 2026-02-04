#include<stdio.h>
int main(){
	int num,first,last;
	
	printf("Enter the number");
	scanf("%d",&num);
	last=num%10;
	first=num;
	while(first>=10){
		first=first/10;
	}
	printf("Sum of first & last digit is :%d",first+last);
}
