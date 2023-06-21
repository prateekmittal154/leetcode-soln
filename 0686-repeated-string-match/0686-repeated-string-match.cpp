class Solution {
public:
    
    void computeLPS(vector<int>& lps, string pat){
        int i = 1;
        int len = 0;
        lps[0] = 0;
        
        while(i<pat.length()){
            if(pat[i]==pat[len]){
                len++;
                lps[i] = len;
                i++;
            }
            
            else{
                if(len!=0){
                    len = lps[len-1];
                }
                
                else{
                    lps[i]=0;
                    i++;
                }
            }
        }
        
        return;
    }
    
    bool kmp(string str, string pat){
        vector<int> lps(pat.length(),0);
        computeLPS(lps,pat);
        int i = 0;
        int j = 0;
        
        while(i<str.length() && j<pat.length()){
            if(str[i]==pat[j]){
                i++;
                j++;
            }
            
            else{
                if(j !=0){
                    j = lps[j-1];
                }
                else i++;
            }
            
             if(j==pat.length()) break;
        }
        
        if(j==pat.length()) return true;
        return false;
    }
    int repeatedStringMatch(string a, string b) {
        int len_a = a.length();
        int len_b = b.length();
        int n = (len_b/len_a);
        int cnt = n;
        string na = "";
        while(cnt--){
            na = na + a;
        }
        if(kmp(na,b)) return n;
        na = na+a;
        if(kmp(na,b)) return n+1;
        na = na+a;
        if(kmp(na,b)) return n+2;
        
        return -1;
    }
};