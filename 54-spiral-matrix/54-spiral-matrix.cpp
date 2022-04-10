class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;
        
        int row= matrix.size();
        int col= matrix[0].size();
        
        int count=0;
        int total= row*col;
        
        int startrow=0, endrow=(row-1), startcol=0, endcol=(col-1);
        
        while(count<total){
            
            for(int i=startcol; count<total && i<=endcol; i++){
                
                ans.push_back(matrix[startrow][i]);
                count++;
            }
            
            startrow++;
            
            for(int i=startrow; count<total && i<=endrow; i++){
                
                ans.push_back(matrix[i][endcol]);
                count++;
            }
            endcol--;
            
            
            for(int i=endcol; count<total && i>=startcol; i--){
                
                ans.push_back(matrix[endrow][i]);
                count++;
            }
            endrow--;
            
            for(int i=endrow; count<total && i>=startrow; i--){
                
                ans.push_back(matrix[i][startcol]);
                count++;
            }
            startcol++;
            
        }
    
        return ans;
    }
};