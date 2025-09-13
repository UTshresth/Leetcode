class Solution {

 void subseq(int x,vector<int> &a,vector<int> &b,vector<vector<int>> &y){

       y.push_back(a);
         
         for(int i=x;i<b.size();i++) {
              a.push_back(b[i]);

                 subseq(i+1,a,b,y);
                      a.pop_back();
        
         }

 }
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector <int> v;
        vector<vector<int>> ans;
        int x=0;

    subseq(x,v,nums,ans);
    return ans;
        



    }
};