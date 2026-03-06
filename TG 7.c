#include <stdio.h>
#define MAX_SIZE 5

typedef struct {
    int topIndex;
    int elements[MAX_SIZE];
    int currentSize;
} CustomStack;

void initialize(CustomStack *stack) {
    stack->topIndex = -1;
    stack->currentSize = 0;
}

void addElement(CustomStack *stack, int value) {
    if (stack->topIndex == MAX_SIZE - 1) {
        printf("The stack is full\n");
        return;
    }
    stack->topIndex++;
    stack->elements[stack->topIndex] = value;
    stack->currentSize++;
    for (int i = 0; i <= stack->topIndex; i++) {
        printf("%d ", stack->elements[i]);
    }
    printf("\n");
}

void removeElement(CustomStack *stack) {
    if (stack->topIndex == -1) {
        printf("The stack is empty\n");
        return;
    }
    stack->topIndex--;
    stack->currentSize--;
    for (int i = 0; i <= stack->topIndex; i++) {
        printf("%d ", stack->elements[i]);
    }
    printf("\n");
}

int getTop(CustomStack *stack) {
    if (stack->topIndex == -1) {
        printf("The stack is empty\n");
        return -1;
    }
    return stack->elements[stack->topIndex];
}

int getStackSize(CustomStack *stack) {
    return stack->currentSize;
}

int main() {
    CustomStack stack;
    initialize(&stack);
    addElement(&stack, 10);
    addElement(&stack, 20);
    addElement(&stack, 30);
    addElement(&stack, 40);
    printf("Top Element: %d\n", getTop(&stack));
    printf("Stack Size: %d\n", getStackSize(&stack));
}
