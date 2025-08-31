class Solution {
       int x=0;
 void subseq(int x,vector<int> &a,vector<int> &b,vector<vector<int>> &y){

        if(x>=b.size()){
           if(find(y.begin(),y.end(),a)==y.end())
            y.push_back(a);
            return;
            }
            a.push_back(b[x]);

         subseq(x+1,a,b,y);
         a.pop_back();
         subseq(x+1,a,b,y);


 }
    
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         vector <int> v;
        vector<vector<int>> ans;
        int x=0;
        sort(nums.begin(),nums.end());

    subseq(x,v,nums,ans);
    return ans;
        
    }
};