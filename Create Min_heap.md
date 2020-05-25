```c
/*Heap_sort*/

#include <stdio.h>

typedef struct {
    int key;
}element;

element heap[100];

int n = 0;

void push(element item, int* n);

int main()
{
    for (int i = 1; i <= 10; i++) {
        printf("키이 입력 : ");
        scanf_s("%d", &heap[i].key);
        push(heap[i], &n);
    }

    printf("\n");
    printf("구성된 최소히프 : ");
    for (int i = 1; i <= 10; i++)
        printf("%d ", heap[i].key);

    return 0;
}

void push(element item, int *n)
{
    int i = ++(*n);
    while ((i!= 1) && (item.key < heap[i / 2].key))
    {
        heap[i] = heap[i / 2];
        i /= 2;
    }
    heap[i] = item;
}
element pop(int* n)
{
	int parent, child;
	element item, temp;
	if(HEAP_EMPTY(*n)) {
		fprintf(stderr, "The heap is empty\n");
		exit(EXIT_FAILURE);
	}
	item = heap[1];
	temp = heap[(*n)--];
	parent = 1;
	child = 2;
	while (child <= *n) {
		if((child < *n) && (heap[child].key > heap[child+1].key))
			child++;
		if(temp.key <= heap[child].key) break;
		heap[parent] = heap[child];
		parent = child;
		child *= 2;
	}
	heap[parent] = temp;
	return item;
}
