class Solution {
public:
    string reverseWords(string s) {
        
        string ans = "";
        string temp = "";
        bool last = false;
        
        for(int i=0; i<s.size(); i++){
            
            char ch = s[i];
            if(ch != ' ') {
                temp+= ch;
                last = false;
            }
            
            else{
                if(last) continue;
                if(ans != "") ans = temp + " " + ans;
                else ans = temp;
                temp = "";
                last = true;
            }
        }
        
        if(temp != ""){
            if(ans != "") ans = temp + " " + ans;
                else ans = temp;
                temp = "";
        }
        
        return ans;
    }
};