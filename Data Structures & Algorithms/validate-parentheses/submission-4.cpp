class Solution {
   public:
    bool isValid(string s) {
        int n = s.length();

        char arr[1000];
        int k = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                arr[k] = s[i];
                k++;
                continue;
            }
            if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
                if(k ==0){return false;}
                
                char top = arr[k - 1];
                if ((s[i] == ')' && top != '(') ||
                    (s[i] == ']' && top != '[') ||
                    (s[i] == '}' && top != '{')) {
                    return false;
                }
                k--;
            }
        }
        return k==0;

        
    }
};
