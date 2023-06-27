#include<stdio.h>
void divide(int n){
	if(n%3==0&&n%5==0){
		printf("number is divisible by both 3 and 5.\n");
	}
	else printf("number is not divisible by both 3 and 5.\n");
}
void main(){
	int n;
	printf("Enter any number:");
	scanf("%d",&n);
	
	divide(n);
	main();
}

