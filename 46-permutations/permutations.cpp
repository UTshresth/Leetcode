class Solution {
public:

     void sol(vector<vector<int>> &ans,vector<int>n,int s){
            if(s==n.size()){
                ans.push_back(n);
                return;}
            
              for(int i=s;i<n.size();i++){
              
              swap(n[s],n[i]);
              sol(ans,n,s+1);
              swap(n[s],n[i]);
                
                }
            
                   
                }
              


                

    vector<vector<int>> permute(vector<int>& nums) {


        
        vector<vector<int>> ans;
      int s=0;
        sol(ans,nums,s);
        return ans;}
        
   
};