int maxDistance(int arr[], int n)
{
    int max_dis = 0;
    int j = n-1;
    for(int i=0;i<n;i++){
        while(i<=j){
        if(arr[i] == arr[j]){
            max_dis = max(max_dis, j-i);
        }
        j--;
    }
    j = n-1;
    }
    
    return max_dis;
}
