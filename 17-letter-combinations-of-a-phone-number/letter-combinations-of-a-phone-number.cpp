class Solution {

void sol(map<char,string> &m,vector<string> &s,string &digit,string k,int i){
     if(k.size()==digit.size()) {
        s.push_back(k);
        return;
     }
char c=digit[i];
for(auto j:m[c]){
    k.push_back(j);
    sol(m,s,digit,k,i+1);
    k.pop_back();
}


}


public:
    vector<string> letterCombinations(string digits) {

         vector<string>ans;
        if(digits.empty()) return ans; 
        string s="";
        int i=0;
           map<char,string> m;
           m['2']="abc";
           m['3']="def";
           m['4']="ghi";
           m['5']="jkl";
           m['6']="mno";
           m['7']="pqrs";
           m['8']="tuv";
           m['9']="wxyz";

sol(m,ans,digits,s,i);

return ans;
    }
};