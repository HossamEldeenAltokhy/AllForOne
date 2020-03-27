
int maxofarr(int* x , int y){

int maxi = x[0];
int index =0;
int i;
for(i =1; i<y; i++){
    if(maxi < x[i]){
        maxi = x[i];
         index= i;
    }

}
  return index;
}
