class Solution {
public:
    bool isPalindrome(string s) {
        if (s.size() == 1) return true;
       string str;
        
       for (char c : s){
            if ((c >= '0' && c <= '9') ||
                (c >= 'A' && c <= 'Z') ||
                (c >= 'a' && c <= 'z')) {
                if (c >= 'A' && c <= 'Z') {
                    c = c - 'A' + 'a';
                }

                str += c;
            }
       }     
        int tamanho = str.size();

        if (tamanho == 1) return true;
        int init = 0;
        int final = tamanho-1;

        while ((init != final) && init <= tamanho/2){
            if (str[init] != str[final]){
                return false;
            }
            init++;
            final--;
        }
        return true;

    }
};
