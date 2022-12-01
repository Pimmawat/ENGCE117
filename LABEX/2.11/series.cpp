#include<stdio.h>

int main(){
	
	int num,sum, t=9;
	
	printf("Enter number =   ");
	scanf("%d",&num);
	
	for( int i = 1 ; i <= num ; i++){
		sum += t;
		printf("%d   ",t);
		t = t*10+9;
	}//end for loop
	
	printf("\nSum = %d",sum);
	
}//end main
