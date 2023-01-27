#include <stdio.h>
#include "employee.h"
#include "heap.h"
#define MAX_EMPLOYEES 5

int main(int argc, char *argv[])
{
	Employee arr[MAX_EMPLOYEES]; 
	for(int i = 0; i < MAX_EMPLOYEES; i++){ 
		printf("Name: "); 
		scanf("%s", arr[i].name); 
		printf("Salary: "); 
		scanf("%d", &arr[i].salary);
		printf("\n");

	}

	printf("Before: ");
	printList(arr, MAX_EMPLOYEES);
	heapSort(arr, MAX_EMPLOYEES);
	printf("After: ");
	printList(arr, MAX_EMPLOYEES);
	return 0;
}
