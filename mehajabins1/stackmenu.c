#include <stdio.h>

#define MAX_SIZE 10

int s[MAX_SIZE], Top = -1;

void push(int item) {
    if (Top >= MAX_SIZE - 1) {
        printf("Stack is full\n");
    } else {
        Top++;
        s[Top] = item;
        printf("%d pushed to stack.\n", item);
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
    int choice, item;

    while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter an element to push: ");
                scanf("%d", &item);
                push(item);
                break;
            case 2:
                pop();
                break;
            case 3:
                display_stack();
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}
