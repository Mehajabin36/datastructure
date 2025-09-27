#include <stdio.h>

#define MAX_SIZE 10

int s[MAX_SIZE], Top = -1;

void push(int item) {
    if (Top >= MAX_SIZE - 1) {
        printf("Stack is full\n");
    } else {
        Top++;
        s[Top] = item;
    }
}

void pop() {
    if (Top < 0) {
        printf("Stack is empty\n");
    } else {
        printf("The popped element is %d\n", s[Top]);
        Top--;
    }
}

void display_stack() {
    if (Top < 0) {
        printf("Stack is empty\n");
        return;
    }

    printf("The elements in the stack are:\n");
    for (int i = 0; i <= Top; i++) {
        printf("%d\n", s[i]);
    }
}

int main() {
    int item;

    
    printf("Enter an element to push: ");
    scanf("%d", &item);
    push(item);

   
    printf("Enter another element to push: ");
    scanf("%d", &item);
    push(item);

  
    display_stack();

  
    pop();

  
    display_stack();

    return 0;
}

