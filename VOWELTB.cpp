#include<stdio.h>

int main() {
	char alphabet;
	scanf("%c", &alphabet);
	
	if (alphabet=='A'||alphabet=='I'||alphabet=='U'||alphabet=='E'||alphabet=='O'){
		printf("Vowel");
	}
	else
	printf("Consonant");
	
	return 0;
}
