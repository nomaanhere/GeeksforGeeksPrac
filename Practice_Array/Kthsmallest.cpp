#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    scanf("%d", &n);
	    int arr[n];
	    for(int i=0;i<n;i++){
	        scanf("%d", &arr[i]);
	    }
	    int k;
	    scanf("%d",&k);
	    sort(arr, arr+n);
	    printf("%d \n", arr[k-1]);
	}
	return 0;
}
