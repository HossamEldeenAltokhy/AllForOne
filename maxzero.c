int maxzero(unsigned int* num){

 int max=0;
 int nofzero=0;
 unsigned int temp = *num;
 int i;
        for(i=0;temp!=0;i++){
            if(temp%2==0){
                nofzero++;
            }
            else if (max < nofzero){
                max =nofzero;
                nofzero =0;
            }
            temp/=2;
        }


return max;

}
