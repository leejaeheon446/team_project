# heap_sort---201918770

```c
#include <stdio.h>

typedef struct {
    int key;
}element;

element heap[100];

int n = 0;

void push(element item, int* n);
element pop(int* n);

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
    printf("\n");

    for (int i = 1; i <=10; i++)
        heap[i] = pop(&n);

    printf("히프 소팅 후 : ");
    for (int k = 1; k <= 10; k++)
        printf("%d ", heap[k].key);

    return 0;
}

void push(element item, int* n)
{
    int i = ++(*n);
    while ((i != 1) && (item.key < heap[i / 2].key))
    {
        heap[i] = heap[i / 2];
        i /= 2;
    }
    heap[i] = item;
}

element pop(int* n) {
    element item = heap[1], temp = heap[(*n)--];
    int parent = 1, child = 2;
    while (child <= *n) {
        if ((child < *n) && (heap[child].key) > heap[child + 1].key)
            child++;
        if ((temp.key) <= (heap[child].key))
            break;
        heap[parent] = heap[child];
        parent = child;
        child *= 2;
    }
    heap[parent] = temp;
    return item;
}
