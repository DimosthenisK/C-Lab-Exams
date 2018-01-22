#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* getData(int* array, int length) {
	int i;
	int sum = 0, product = 1; 
	int evenCounter = 0;
	int* result = (int*)malloc(2 * sizeof(int));
	
	for (i = 0; i < length; i++) {
		if (i % 2 == 0) {
			sum += array[i];
			evenCounter++;
		}
		else {
			product *= array[i];
		}
	}
	
	sum /= evenCounter;
	
	result[0] = sum;
	result[1] = product;
	
	return result;
}

int main() {
	int length;
	int* array;
	int* results;
	int i;
	
	printf("Array length: ");
	scanf("%d", &length);
	
	array = (int*)malloc(length * sizeof(int));
	for (i = 0; i < length; i++) {
		printf("Number %d of %d: ", i+1, length);
		scanf("%d", &array[i]);
	}
	
	results = getData(array, length);
	printf("Average of evens: %d\n", results[0]);
	printf("Product of odds: %d\n", results[1]);
	
	return 0;
}
