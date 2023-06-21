class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int n = haystack.size();
        int len = needle.size();
        
        if(haystack==needle) return 0;
        
        for(int pos=0; pos+len<=n; pos++){
            if(haystack.substr(pos,len) == needle) return pos;
        }
        
        return -1;
    }
};