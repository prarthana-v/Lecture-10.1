#include<stdio.h>
void cube(int n){
	printf("The cube of %d is :%d",n,n*n*n);
}
void main(){
	int n;
	printf("Enter any number:");
	scanf("%d",&n);
	
	cube(n);
}
