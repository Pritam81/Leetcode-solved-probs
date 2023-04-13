class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
          stack<int> st;
          int i=0,j=0;
          while(i<pushed.size()){
             st.push(pushed[i]);
              while(  !st.empty() && st.top()==popped[j]){
                  st.pop();
                  j++;
              }
              i++;
          }  
        
        
        while(j<popped.size()){
            if(popped[j]==st.top()){
                st.pop();
                j++;
            }
            else{
                return false;;
            }
        }
    return true;
    }
};