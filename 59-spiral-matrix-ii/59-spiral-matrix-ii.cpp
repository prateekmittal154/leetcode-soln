class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>> matrix(n, vector<int>(n,0));
        
        
        int startrow=0, endrow=(n-1), startcol=0, endcol=(n-1);
        
        int j=1;   
        
        while(j<=n*n) {
            
    
            
           for(int i=startcol; i<=endcol; ++i){
                
                matrix[startrow][i]=j++;
            }
            
            ++startrow;
            
            for(int i=startrow; i<=endrow; ++i){
                
               matrix[i][endcol]=j++; 
            }
            --endcol;
            
            
            for(int i=endcol; i>=startcol; --i){
                
                matrix[endrow][i]=j++;
              }
            --endrow;
            
            for(int i=endrow;  i>=startrow; --i){
                
                matrix[i][startcol]=j++;
             
            }
            ++startcol;
        }
        
        return matrix;
    }
};