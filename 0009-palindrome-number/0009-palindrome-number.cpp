class Solution {
public:
    bool isPalindrome(int x) {
          if(x<0){
              return false;
          }
       long int rev=0;
        int ori=x;
        while(x){
            int rem= x%10;
            rev=rev * 10 + rem;
            x=x/10;
        }
        if(ori==rev){
            return true;
        }
        return false;
    }
};