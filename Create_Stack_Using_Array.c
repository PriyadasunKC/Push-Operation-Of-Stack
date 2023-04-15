# include <stdio.h>
# define SIZE 5
int top = -1; // stack is empty
int stack_array [SIZE];

void push(int);

void  push(int value){
    if(top == SIZE-1){
        printf("Stack is overload");       
    }else{
        top++;
        stack_array[top] = value;
        printf("%d ",stack_array[top]);
    }
    
}

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6); // this will not include in stack "overload state of stack when this enter"
    return 0;
}