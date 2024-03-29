//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool wifiRange(int N, string s, int x){
       

  // this is for checking number of zeros befor first one appear  
    int i=0,count=0;
    if(s[0]=='0')
    {
        while(i<N)
        {
           if(s[i]=='1')
           {
               break;
           }
           count++;i++;
        }
        if(count>x)     
        return false;
    }

// this is for checking number of zeros between two ones and number of zeros appear after last one.
      count=0;
           for(int i=1;i<N;i++)
           {
               if(s[i]=='0')
               count++;
               if(s[i]=='1')
               {
                   if(count>2*x)   // condition for checking zeros b/w two ones
                   return false;
                   else
                   count=0;
               }
           }
           if(count>x)   //condition for checking zeros after last one.
           return false;
           return true;
  }
};

//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, X;
        string S;
        cin >> N >> X >> S;
        Solution obj;
        cout << obj.wifiRange(N, S, X) << "\n";
    }
}

// } Driver Code Ends