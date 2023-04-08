//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        //    vector<int> ans;
            stack<int> test;
            if(arr.size()==0){
                return arr;
            }
            test.push(arr[0]);
            for(int i=1;i<arr.size();i++){
                if(test.empty() ){
                    test.push(arr[i]);
                        
                    
                }
               else if(   (test.top()>=0 && arr[i]<0)  ||   (test.top()<0 && arr[i]>=0) ){
                    test.pop();
                }
                else{
                    test.push(arr[i]);
                }
            }
            arr.resize(0);
            while(!test.empty()){
                arr.push_back(test.top());
                test.pop();
            }
            reverse(arr.begin(),arr.end());
            return arr;
  
              
                 
            
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> res = obj.makeBeautiful(arr);
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }

        cout << "\n";
    }
}
// } Driver Code Ends