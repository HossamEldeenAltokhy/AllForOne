
void circle(int radius){

    float i,j;

    for(i = 0; i <= 2*radius; i++){

        for(j=0; j <= 2*radius; j++){
                printf(" ");
            if(((j-radius)*(j-radius)) + ((i-radius)*(i-radius)) == radius*radius ){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
/*printf("Enter Your Lucky Radius to Get a Perfect Circle (Preferably Between 5 and 40): ");
    scanf("%d",&x);
    circle(x);

    printf("\n If You're Not Lucky Enough, You could have only 4 points because Your Circle Coordinates Could Not Be Reached\n");
*/
