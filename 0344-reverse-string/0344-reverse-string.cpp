class Solution {
public:
    
    void reverse(int i, int j, vector<char>&s){

        if(i > j) return;
        
        char temp;
        
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        
        reverse(i+1, j-1, s);
        
        
    }
    
    void reverseString(vector<char>& s) {
        
        int i = 0;
        int j = s.size()-1;
        
        reverse(i,j,s);
    }
};