// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


vector<int> reaching_height(int n, int a[]) ;

int main() {
	int t;
	cin >> t;
	while (t-- > 0) {
	    int n; 
	    cin >> n;
	    int a[n];
	    for (int i = 0; i < n; i++) 
	        cin >> a[i];
	    vector<int> v;
	    v = reaching_height(n,a);
	
	    if(v.size()==1 and v[0] == -1){
	        cout << "Not Possible\n";
	    }
	    else{
	    for(int i:v)
	        cout << i << " ";
	    cout << endl;}
	    
	}
	return 0;
}// } Driver Code Ends


//User function Template for C++

vector<int> reaching_height(int n, int a[]) {
    // Complete the function
    // vector<int odds;
    // vector<int>evens;
    vector<int>ans(n);
    int t=0;
    sort(a,a+n);
    for(int i=1;i<n;i+=2){
        t-=ans[i]=a[i/2];
    }
    for(int i=0;i<n;i+=2){
        t+=ans[i]=a[n-1-i/2];
    }
    
    
    if(t<=0)
    return {-1};
    return ans;
    
    
    
    
}
