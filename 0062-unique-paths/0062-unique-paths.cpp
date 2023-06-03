class Solution {
public:
    int uniquePaths(int m, int n) {
        
        int N = n+m-2;
        int r = min(n-1,m-1);
        double ans = 1;
        
        for(int i=0;i<r; i++){
            ans = ans*(N-i);
            ans = ans/(i+1);
        }
        
        return (int)ans;
    }
};