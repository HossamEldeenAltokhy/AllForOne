void rhombus(int x){

    int i,j;
    for (i=0; i<x ; i++){
        for(j=0; j<2*x ; j++){
            if( i ==0 || i==x-1 ){

                if(j>i && j<=x+i){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            else if (j ==i+1 || j ==x+i){
                printf("*");
            }
                else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
