void cap1st(char * sent){
    sent[0]-=32;
    for(int i=1; sent[i]!='\0';i++){
        if(sent[i-1]==' ')
            sent[i]-=32;
    }
}
