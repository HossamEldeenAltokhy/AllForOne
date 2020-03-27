#include <stdio.h>
#include "maxofarr.h"
#include "swap.h"

void selectsort(int* x, int y){

    int maxindex = 0;

    int j;
        for(j=0; j<y ;j++){
            maxindex = maxofarr(x,y-j);
            if(x[maxindex]>x[y-j-1])
                swp(&x[y-j-1],&x[maxindex]);


}
}
