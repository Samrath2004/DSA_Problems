class Solution {
public:
    string reverseWords(string s) {
        string ans;
        reverse(s.begin(),s.end());
           for(int i=0;i<s.size();i++){
            string word="";
            if(s[i]==' '){
                continue;
            }
            while(s[i]!=' '&&i<s.size()){
                word+=s[i];
                i++;
            }
            reverse(word.begin(),word.end());
            ans=ans+" "+word;
           } 
           return ans.substr(1);   
    }
};
