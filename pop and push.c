// Stack  push(), pop(), display()
#include <stdio.h>

#define MAX 6

int box[MAX];
int top = -1;


void push(int x) {
    if (top == MAX - 1) {
        printf("stack is full!\n");
    } else {
        top++;
        box[top] = x;
        printf("value %d has been added\n", x);
    }
}


void pop() {
    if (top == -1) {
        printf("stack is empty!\n");
    } else {
        int y = box[top];
        top--;
        printf("value %d has been removed\n", y);
    }
}


void display() {
    if (top == -1) {
        printf("stack is empty!\n");
    } else {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", box[i]);
        }
        printf("\n");
    }
}

int main() {
    
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    push(70); 
	  
    printf("\n");
    display();

    
    printf("\n");
    pop();

    printf("\n");
    display();

    return 0;
}
