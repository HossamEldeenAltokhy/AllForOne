#include <stdio.h>
void arrprint(int*x, int y){

    int i=0;
    printf("\n");
    for( i=0; i<y; i++ )
        printf("%d ",x[i]);

    printf("\n");
}

void arrscan(int* x, int y){
    int i=0;
        for(i=0; i<y;i++)
        scanf("%d",&x[i]);
}
