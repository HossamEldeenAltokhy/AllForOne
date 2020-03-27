#include<stdio.h>
int index =9;
void  push_in(int* arr, int n){

    if(index == -1)
        printf("The Stack is Full!");
    else {
        arr[index]=n;
        index--;
    }
    }

int pop_up(int* arr){

    int temp=0;
    if(index==10){
       printf("The Stack is Empty");
        }
       else {
        temp = arr[index+1];
        index ++;
        return temp;

       }
}
