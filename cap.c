
void cap(char * str){

    int i ;
    for(i =0;str[i]!='\0';i++){

        if(str[i]>=97 && str[i]<=122)
            str[i]-=32;
    }


}
