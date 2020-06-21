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
	    int first_pos = 0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i] == 0){
	            first_pos = i;
	            break;
	        }
	   }
	   cout<<n-first_pos<<endl;
	}
	return 0;
}
