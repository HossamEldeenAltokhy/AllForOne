#include <stdio.h>
unsigned int error;

unsigned long err_occ(unsigned long temp,unsigned long n1);
unsigned long err_occ(unsigned long temp,unsigned long n1){
    if(temp <=65535){
        printf("The Result Till Now is %ld",temp);
        return temp;
    }
    else{

        error++;
        printf("Sorry, The Result Has Been Over-flown ! :(\n");
        printf("The Result Till Now is %ld",n1);
        return n1;
    }
}

void add(unsigned long*n1,unsigned int*n2){

    unsigned long temp = *n1 + *n2;
    *n1 = err_occ(temp,*n1);
    }

void sub(unsigned long*n1,unsigned int*n2){
    unsigned long temp=0;
    if(*n1 > *n2){
         temp = *n1 - *n2;
    }
    else {
         temp = *n2 - *n1;
    }
    *n1 = err_occ(temp,*n1);
    }

void multi(unsigned long*n1,unsigned int*n2){

    unsigned long temp = (*n1) * (*n2);

    *n1 = err_occ(temp,*n1);
}

void mod(unsigned int*n1,unsigned int*n2){
    unsigned long temp;
     if(*n1 > *n2){
         temp = *n1 % *n2;
    }
    else {
         temp = *n2 % *n1;
    }
    *n1 = err_occ(temp,*n1);
}

void divi(unsigned int*n1,unsigned int*n2){
    unsigned long temp;
     if(*n1 > *n2){
         temp = *n1 / *n2;
    }
    else {
         temp = *n2 / *n1;
    }
    *n1 = err_occ(temp,*n1);
}

