

void swap_arr(int*x,int y){

    int i;
    int temp;
    for(i=0;i<=(y/2)-1;i++){
        temp = x[i];
        x[i] = x[y-i-1];
        x[y-i-1] = temp;
    }


}
