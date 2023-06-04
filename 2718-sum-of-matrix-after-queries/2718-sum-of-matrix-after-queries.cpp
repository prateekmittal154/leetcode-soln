class Solution {
public:
    long long matrixSumQueries(int n, vector<vector<int>>& q) {
        
         long long ans=0;       
   vector<int>row(n,0),col(n,0);   //making visited array for row and column
    
int cntr=0,cntc=0;                 ///stroring the count of num of row and col 
    for(int i=q.size()-1;i>=0;i--){     //taking last querie which have more priority 
         int ind=q[i][1];               //finding index of row or col
         int val=q[i][2];
                                         
        if(q[i][0]==0){               //if type ==0 it's mean it is row
           
          if(row[ind]==0){
              ans+=val*(n-cntc);       //  adding contribution of (n-cntc ) row cell which will have value ==val
              row[ind]=1;               //mark visited
              cntr++;                 

          }
           
        }
        else {                             //if type ==1 it's mean it is col
            
         if(col[ind]==0){
            ans+=val*(n-cntr);               //  adding contribution of (n-cntr ) col cell which will have value ==val
            cntc++;
            col[ind]=1;            //mark visited
            }
        
        }
        if(cntc+cntr==2*n) return ans;    //if all row and col visited then return ans
    }
           
    return ans;
}
};