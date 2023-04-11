class Solution {
public:
    
    bool palindrome(int i, int j, string s){
        
        cout<<i<<" "<<j<<endl;
        
        if(i>j) return true;
        
        if(s[i]!=s[j]) return false;
        
        return palindrome(i+1, j-1, s);

    }
    
    bool isPalindrome(int x) {
        if(x  <  0)return false;
        string s = to_string(x);
        
        int i = 0;
        int j = s.size()-1;
        
        bool ans = palindrome(i,j,s);
        
        return ans;
    }
};