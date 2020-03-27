#include <stdio.h>
void draw(int n){
    int i,j;
    int temp;
    for (i=1; i<= (2*n ); i++){

        for(j=1; j<= (2*n); j++){

            if(i==1 || j==1 || i == (2*n) || j == (2*n))
                printf("%d",n);
            else
                printf(" ");


        }
        printf("\n");
    }
}
