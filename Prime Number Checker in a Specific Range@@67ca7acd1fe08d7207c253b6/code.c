// Your code here...
int PrimeInRange(int num,int a,int b){
    if (num<2) return 0;
    for(int i=a;i*i<=b;i++){
        if(b%i==0){
            return 0
        }
    }
    return 1;
    
    
    
}




