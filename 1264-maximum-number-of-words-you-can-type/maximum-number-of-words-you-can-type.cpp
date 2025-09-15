class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
   
        vector<string> x;
        string temp="";
          for (auto s : text) {
            if (s == ' ') {
                x.push_back(temp);
                temp = "";
            } else {
                temp += s;
            }
        }
        x.push_back(temp);
   int c=x.size();
   int t=0;
          for(int i=0;i<x.size();i++){
            t=0;


            for(int j=0;j<brokenLetters.size();j++){
                if(t==1) break;
               else for(int k=0;k<x[i].size();k++)
                if(x[i][k]==brokenLetters[j]){
                    c--;
                    t=1;
                    break;
                }

            }

          }
          return c;
      
    }
};