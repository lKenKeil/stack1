
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define STACK_SIZE 10

int stack[STACK_SIZE];
int top = -1;

void push(int num) {
    if (top == STACK_SIZE - 1) {
        printf("Stack Full\n");
        return;
    }
    top++;
    stack[top] = num;
    printf("Push %d\n", num);
}

int pop() {
    if (top == -1) {
        printf("Stack Empty\n");
        return -1;
    }
    int num = stack[top];
    top--;
    printf("Pop %d\n", num);
    return num;
}

int main() {
    srand(time(NULL));
    int rand_num;

    for (int i = 0; i < 30; i++) {
        rand_num = rand() % 100 + 1;


        if (rand_num % 2 == 0) {
            push(rand_num);
        }
        else {
            pop();
        }
    }

    return 0;
}