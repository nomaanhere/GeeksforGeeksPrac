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
	    int count = 0;
	    int maxLen = 0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]>=0){
	            count++;
	            maxLen = max(maxLen, count);
	        } else {
	            count = 0;
	        }
	    }
	    cout<<maxLen<<endl;
	}
	return 0;
}
