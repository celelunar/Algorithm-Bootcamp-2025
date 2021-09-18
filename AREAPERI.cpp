#include <stdio.h>

int main() {
	int length, breadth, peri, area;
	scanf("%d\n%d",&length,&breadth);
	
	peri=2*(length+breadth);
	area=(length*breadth);
	
	if(area>peri){
		printf("Area\n");
		printf("%d",area);
	}
	else if(peri>area){
		printf("Peri\n");
		printf("%d",peri);
	}
	else{
		printf("Eq\n");
		printf("%d",area);
	}

	return 0;
}
