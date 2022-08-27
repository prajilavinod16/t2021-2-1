#include<stdio.h>

int main() {
	int arr[50], i, j, size, temp= 0 ;
	
	printf("Enter the size of the array : ");
	scanf("%d", &size);
	
	printf("Enter the elements of the array : ");
	for(i = 0; i < size; i ++) {
		scanf("%d", &arr[i]);
	}
	
	for(i = 1; i < 10; i ++) {
		for(j = 0; j < size; j++) {
			if(arr[j] % i == 0) {
				temp++;
			}
		}
		printf("%d: %d\t", i, temp);
		temp = 0;
	}
	
	return 0;
}