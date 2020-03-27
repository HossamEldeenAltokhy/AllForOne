
void descPyramid(int x){

    int i;
    int j;
    for( i=0 ; i<x ; i++ ){

        for( j=0; j<i+1; j++){
            printf(" *");
        }
        printf("\n");
    }
}
