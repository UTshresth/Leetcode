class Solution {
     void subseq(int x,vector<int> &a,vector<int> &b,vector<vector<int>> &y,int target){

        if(x==b.size()){

            if(target==0){
           
            y.push_back(a);
            return;}
            return;
            }
if(b[x]<=target){
       a.push_back(b[x]);

subseq(x+1,a,b,y,target-b[x]);
 a.pop_back();}
 while(x+1<b.size()&&b[x]==b[x+1]) x++;
subseq(x+1,a,b,y,target);


 }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
       
        
        int x=0;
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> s;
        subseq(x,s,candidates,ans,target);
        return ans;

    }
};