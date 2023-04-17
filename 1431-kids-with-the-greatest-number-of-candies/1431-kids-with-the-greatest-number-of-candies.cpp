class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int n = candies.size();
        vector<int> temp(n,0);
        
        for(int i=0; i<n; i++){
            temp[i] = candies[i];
        }
        
        sort(temp.begin(), temp.end());
        int max = temp[n-1];
        
        vector<bool> ans(n,false);
        
        for(int j=0; j<candies.size(); j++){
            if(candies[j]+ extraCandies >= max) ans[j] = true;
        }
        
        return ans;
    }
};