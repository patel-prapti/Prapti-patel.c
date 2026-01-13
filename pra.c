#include<stdio.h>
int main(){
	int gs,bs,hra=10,da=5,ta=8;
	printf("Enter the base salary:");
	scanf("%d",&bs);
	gs=bs=(bs*hra/100)+(bs*da/100)+(bs*ta/100);
	printf("gross salary:%d",gs);
	
}
