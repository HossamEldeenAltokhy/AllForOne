
void pattern(int x){
    int i,j;
    for (i=0;i<x;i++){
        for(j=0;j<x;j++){
            printf(" ");
            if((j == i) || ( j == x-i-1 )){
                printf("*");
            }
            else{
                printf(" ");
            }

        }
        printf("\n");
    }
}
