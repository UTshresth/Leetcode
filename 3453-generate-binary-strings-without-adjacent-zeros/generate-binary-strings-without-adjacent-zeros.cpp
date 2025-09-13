class Solution {

     void sol(string s,vector<string> &w,int k,int n){
          
          if(k==n){
              w.push_back(s);
              return;
          }
          
                s.push_back('1');
                
                 sol(s,w,k+1,n);
                
                
                s.pop_back();
                 if(s.size()==0||s[k-1]!='0') {
                 s.push_back('0');
                    sol(s,w,k+1,n);}
                
                  else return;
              
             
    
          
   }
    
public:
    vector<string> validStrings(int n) {
         vector<string> w;
        string s="";
        int k=0;
        sol(s,w,k,n);
        return w;
        
    }
};