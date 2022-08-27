int main() {
	int a, i, count = 1;
	
	printf("Enter the number : ");
	scanf("%d", &a);
	
	for(i = 1; i > 0; i= i + 2) {
		if(a%2 == 0 && count >= a) {
			break;
		} 
		printf("%d ", i);
		if(count == a) {
			break;
		}
		count++;
	}
	
	return 0;
}