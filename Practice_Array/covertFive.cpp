int convertFive(int n) {
    // Your code here
    int num=0;
    int rem = 0;
    int count = 1;
    while(n){
        
        rem = n%10;
        if(rem == 0){
            num += 5*count;
        }
        else{
            num+=rem*count;
        }
        count = count*10;
        n = n/10;
    }
    return num;
}
