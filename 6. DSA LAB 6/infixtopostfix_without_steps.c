#include <stdio.h>
#include <string.h>

char stack[50], postfix[100], infix[100];
int top = -1, top1 = -1;

void push(char ch) {
    if (top >= 50) {
        printf("Overflow");
    } else {
        top++;
        stack[top] = ch;
    }
}

char pop() {
    char item;
    if (top == -1) {
        printf("Underflow");
        return -1;
    } else {
        item = stack[top];
        top--;
        return item;
    }
}

int priority(char ch) {
    int a;
    char operand[6] = { '+', '-', '*', '/', '^', '(' };
    int prio[6] = { 1, 1, 2, 2, 3, 0 };
    for (int i = 0; i < 6; i++) {
        if (operand[i] == ch) {
            a = prio[i];
            break;
        }
    }
    return a;
}

int main() {
    char element, ch;
    printf("Enter the expression: ");
    scanf("%[^\n]", infix);

    for (int i = 0; i < strlen(infix); i++) {
        ch = infix[i];
       
        if (ch >= 'A' && ch <= 'Z') {
            top1++;
            postfix[top1] = ch;
        }
       
        else if (ch == '(') {
            push(ch);
        }
       
        else if (ch == ')') {
            while ((element = pop()) != '(') {
                top1++;
                postfix[top1] = element;
            }
        }
       
        else {
            while (top != -1 && priority(ch) <= priority(stack[top])) {
                if (stack[top] == '(') {
                    break;
                }
                top1++;
                element = pop();
                postfix[top1] = element;
            }
            push(ch);
        }
    }

    while (top != -1) {
        postfix[++top1] = pop();
    }

    postfix[top1 + 1] = '\0';
    printf("Final Postfix Expression: %s\n", postfix);

    return 0;
}
