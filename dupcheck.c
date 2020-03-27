#include <stdbool.h>
bool dupcheck(char * str){

int i,j;

    for(i=0;str[i]!='\0';i++){
        for(j=i+1;str[j]!='\0';j++){
            if(str [i]== str[j])
                return false;
        }
    }
    return true;
}
