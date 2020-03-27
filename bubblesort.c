#include <stdio.h>
#include "swap.h"
#define SWAP_H_INCLUDED
void bubblesort(int * x, int y){

    int i;
    int j;
    for(j=0;j<y-1;j++)
        for(i=0;i<y-j-1;i++)
            if(x[i]>x[i+1])
                swp(&x[i],&x[i+1]);

}

