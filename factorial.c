
unsigned long long factorial(int x){
    unsigned long long sum =1;
    while(x>0){
        sum*=x;
        x--;
    }
    return sum;
}
