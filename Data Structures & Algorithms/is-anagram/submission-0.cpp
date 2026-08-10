class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){return false;}

        unordered_map<char, int> m1;
        unordered_map<char, int> m2;

        for(int i =0;i<s.length();i++){
            m1[s[i]]++;
            m2[t[i]]++;
        }

        for (const auto& [key, value] : m1) {
            if(value != m2[key]){return false;}
        }
        
        return true;
        
        
    }
};
