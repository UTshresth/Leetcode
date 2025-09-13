class Solution {
public:


 void sol(vector<vector<int>> &ans,vector<int> &a,vector<int>&m,vector<int>&n){
            if(a.size()==n.size()){
                ans.push_back(a);
                return;}
            
              for(int i=0;i<m.size();i++){

                if(i>0&&n[i-1]==n[i]&&m[i-1]==0) continue;
                if(m[i]==0){
                    m[i]=1;
            
               a.push_back(n[i]);
                sol(ans,a,m,n);
                m[i]=0;
                a.pop_back();
                
                }
            
                   
                }
              

}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
   vector<int> a;
   sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> m(nums.size(),0);
        sol(ans,a,m,nums);
        return ans;}
        
    
};