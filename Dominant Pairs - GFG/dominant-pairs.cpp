//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int dominantPairs(int n,vector<int> &arr){
    //     int mid=(n-1)/2;
    //     sort(arr.begin(),arr.begin()+mid);
    //   sort(arr.begin()+mid+1,arr.end(), greater<int>());
    //     int i=0;
    //     int j=mid+1;
    
    //  int count=0;
    //   for( i=0;i<=mid;i++){
    //   j=mid+1;
    //       while(j<n){
    //           if(arr[i]>= 5 * arr[j]){
    //               count=count+ (n-j);
    //               break;
    //           }
    //           else{
    //               j++;
    //           }
    //       }
    //   }
    //       return count;
        int mid=n/2;
    sort(arr.begin(),arr.begin()+mid);
    sort(arr.begin()+mid,arr.end());
    int i=0;
    int j=mid;
    int count=0;
    while(i<mid && j<n){
        if(arr[i] >= 5* arr[j]){
            count=count+mid-i;
            j++;
        }
        else{
            i++;
        }
    }
    
    return count;
      }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.dominantPairs(n,arr)<<endl;
    }
}
// } Driver Code Ends