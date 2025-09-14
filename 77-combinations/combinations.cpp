class Solution {
public:


void sol( int n,int k,int v,vector<int> &a,vector<vector<int>> &ans){
                    if(a.size()==k){
                        ans.push_back(a);
                        return;
                    }
                    if ((n - v + 1) < (k - a.size())) return;
                 
      a.push_back(v);
        
        sol(n,k,v+1,a,ans);
        a.pop_back();
       
        sol(n,k,v+1,a,ans);





}
    vector<vector<int>> combine(int n, int k) {
         

          vector<int>a;
          vector<vector<int>> ans;
         
          int v=1;
          sol(n,k,v,a,ans);
          return ans;
       
        
    }
};