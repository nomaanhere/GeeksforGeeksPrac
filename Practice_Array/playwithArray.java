class GfG
{
	public int[] formatArray(int[] a,int n)
        {
        // add code here.
        for(int i=0;i<n;i++){
            if(i%2 !=0){
                if(a[i]<a[i-1]){
                    int temp = a[i];
                    a[i] = a[i-1];
                    a[i-1] = temp;
                }
            }
        }
        
        return a;
	}
}
