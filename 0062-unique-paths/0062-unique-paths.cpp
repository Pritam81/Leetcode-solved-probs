class Solution {
public:
    int uniquePaths(int m, int n) {
        int N= n+m-2;//no of right movemenxt
        int R=m-1;// no of downmovement
        double res=1;
        //combinatrix problem so now find total number of path using ncr formuls
        for(int i=1;i<=R;i++){
            res= res* (N-R +i)/i;
        }
        return int(res);
    }
};