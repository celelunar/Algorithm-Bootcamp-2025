#include <stdio.h>

int main() {
	int number;
	scanf("%d",&number);
	
	if(number>=0 && number<=9){
		printf("1");
	}
	else if(number>=10 && number<=99){
		printf("2");
	}
	else if(number>=100 && number<=999){
		printf("3");
	}
	else if(number>=1000 && number<=1000000){
		printf("More than 3 digits");
	}
	
	return 0;
}
