class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> map;
        
        if(s.size() != t.size()) return false;
        for(int i = 0; i<s.size();i++){
            map[s[i]]++;
        }
        
        for(int i=0; i<t.size();i++){
            if(map.find(t[i]) ==  map.end()) return false;
            if(map[t[i]]== 0) return false;
            
            else map[t[i]]--;
                
        }
        
        return true;
    }
};