#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int maxArea = 0;
	    int minPillar = 0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            minPillar = min(arr[i],arr[j]);
	            maxArea = max(maxArea, minPillar*(j-i));
	        }
	    }
	    cout<<maxArea<<endl;
	}
	return 0;
}
