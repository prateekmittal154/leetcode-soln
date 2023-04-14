class Solution {
public:
    
    void solve(int index, string digits, vector<string> & ans, string s,  unordered_map<char, string> &map){
        
        if(index == digits.size()){
            ans.push_back(s);
            return;
        }
        
        for(int i=0; i<map[digits[index]].size(); i++){
            s.push_back(map[digits[index]][i]);
            solve(index+1, digits, ans, s, map);
            s.pop_back();
        }
        
    }
    
    vector<string> letterCombinations(string digits) {
        
        unordered_map<char, string> map;
        
        map['2'] = "abc";
        map['3'] = "def";
        map['4'] = "ghi";
        map['5'] = "jkl";
        map['6'] = "mno";
        map['7'] = "pqrs";
        map['8'] = "tuv";
        map['9'] = "wxyz";
        
        vector<string> ans;
        
        string s;
        
        if(digits=="") return ans;
        
        solve(0,digits,ans,s,map);
        
        return ans;
        
    }
};