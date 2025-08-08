class Solution {
public: 
    
     bool valid(char ch){
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9')){
            return 1;
        }
        return 0;
     }


    bool isPalindrome(string s) {
        string temp ="";
        for(int j=0;j<s.size();j++){
            if(valid(s[j])){
                temp += tolower(s[j]);
            }
        }
        int st=0;
        int end =temp.size()-1;
        while(st<=end){
            if(temp[st]!=temp[end]){
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};