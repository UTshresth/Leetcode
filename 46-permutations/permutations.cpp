class Solution {
public:

    void  sol(vector<vector<int>> &ans,vector<int> &a,vector<int> &b,vector<int>&m,int k){

                if(k==b.size())
                {
                    ans.push_back(a);
                    return;
                }

        for(int i=0;i<m.size();i++){
            if(m[i]==0){
                m[i]=1;
                   a.push_back(b[i]);
                   sol(ans,a,b,m,k+1);
                   a.pop_back();
                   m[i]=0;


            }

        }
     }

    vector<vector<int>> permute(vector<int>& nums) {

vector<vector<int> >ans;
vector<int> a;
int k=0;
vector<int>m(nums.size(),0);
sol(ans,a,nums,m,k);
return ans;
    }  
};