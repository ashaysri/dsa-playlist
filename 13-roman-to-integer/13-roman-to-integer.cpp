class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> hash {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int idx = s.length()-1;
        int sum {hash[s[idx--]]};
        while(idx>=0){
            if(hash[s[idx]]>=hash[s[idx+1]])
                sum+=hash[s[idx--]];
            else
                sum-=hash[s[idx--]];
        }
        return sum;
    }
};