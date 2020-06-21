#include<bits/stdc++.h>
using namespace std;
int main()
 {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    int pos[n];
	    memset(pos,-1,sizeof(pos));
	    for(int i=0;i<n;i++)
	    {
	       cin>>arr[i];
	        if(arr[i]!=-1)
	        {
	            pos[arr[i]]=arr[i];
	        }
	    }
	    for(int i=0;i<n;i++)
	      cout<<pos[i]<<" ";
	   cout<<endl;
	}
	return 0;
}
