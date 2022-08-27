#include <stdio.h>

int main() {
	int num, i, count = 1;
	
	printf("Enter a number :");
	scanf("%d", &num);
	
	for(i = 1; i > 0; i= i + 2) {
		printf("%d ", i);
		if(count == num) {
			break;
		}
		count++;
	}
	
	return 0;
	
}

