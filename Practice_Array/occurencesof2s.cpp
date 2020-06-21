/* Counts the number of 2s in a number at d-th
   digit */
long long int count2sinRangeAtDigit(long long int number, long long int d)
{
// Your code goes here
}

/* Counts the number of '2' digits between 0 and n */
long long int numberOf2sinRange(long long int n)
{
// Your code goes here
    int count = 0;
    for(long long i=1;i<=n;i++){
            long long num = i;
            long long rem = 0;
            while(num>0){
                rem=num%10;
                if(rem == 2){
                    count++;
                }
                num = num/10;
            }
        }
    return count;
}
