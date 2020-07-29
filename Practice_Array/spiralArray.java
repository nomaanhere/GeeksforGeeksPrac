boolean spiralArray(int arr[]){
  int flag = 1;
  for(int i=0;i<n/2;i++){
    if(arr[i]>arr[n-i-1])
	    flag = 0;
  }
  if(flag = 0){
    return false;
  } 
return true;
}
