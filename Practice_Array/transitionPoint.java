int transitionPoint(int arr[], int n) {
    // code here
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid] == 0){
            start=mid+1;
        } else if(arr[mid]>0){
            end = mid-1;
        } 
    }
    if(arr[start] == 1){
        return start;
    }

    return -1;
}
