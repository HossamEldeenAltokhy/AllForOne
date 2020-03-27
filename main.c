#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "calc.h"
#include "swap.h"
#include "maxofarr.h"
#include "maxzero.h"
#include "swp_arr.h"
#include "cap.h"
#include "cap1st.h"
#include "dupcheck.h"
#include "swap.h"
#include "bubblesort.h"
#include "selectsort.h"
#include "arrprint.h"
#include "swapbitwise.h"
#include "stack.h"
#include "draw.h"
#include <string.h>
#include "rotatebinary.h"
int main()
{
    int x[5]={44,33,2,111,6};

    int y=4;
    int* yptr =(int*)malloc(sizeof(y));
    bubblesort(&x[1],y);
    arrprint(x,5);
    printf("%d\n",y);
    free(yptr);

}

