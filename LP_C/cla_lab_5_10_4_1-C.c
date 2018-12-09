#include <stdio.h>
	#include <stdlib.h>

	struct element
	{
		int value;
		struct element *next;
	};
	int main()
	{
		int values[10] = { 2, 4, 5, 6, 7, 8, 9, 1, 3, 0};
		struct element *head, *ptr;
		head = (struct element *)malloc(sizeof(struct element));
		head -> value = values[0];
		ptr = head;
		for (int i =  0; i < sizeof(values)/sizeof(int); i++){
				ptr -> next = (struct element *)malloc(sizeof(struct element));
				ptr = ptr -> next;
				ptr -> value = values[i];
				ptr -> next = NULL;
		}
		ptr = head;
		printf("First 5 values:");
		for (int i =  0; i < 6; i++){
			printf("%d\n", ptr -> value);
			ptr = ptr -> next;
		}
		ptr = head;
		printf("First 7 values:");
		for (int i =  0; i < 8; i++){
			printf("%d\n", ptr -> value);
			ptr = ptr -> next;
		}
		ptr = head;
		while(ptr != NULL){
			head = head -> next;
			free(ptr);
			ptr = head;
		}
		printf("Memory is freed.");
		return 0;
	}
