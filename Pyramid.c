
void Pyramid(int x){
    int i,j;
    for(i=0 ; i<= x ; i++){

        for ( j=0; j<=2*x; j++){
            printf(" ");
            if((x>= j-i)&&(x<=j+i)){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    }
