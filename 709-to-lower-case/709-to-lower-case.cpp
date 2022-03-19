class Solution {
public:
    string toLowerCase(string s) {
        string ans {};
        for(char ch:s){
            if(ch>=65&&ch<=90)
                ch=ch+32;
            ans.push_back(ch);
        }
        return ans;
    }
};