// Definition for a Pair
// class Pair {
// public:
//     int key;
//     string value;
//
//     Pair(int key, string value) : key(key), value(value) {}
// };
class Solution {
public:
    vector<vector<Pair>> insertionSort(vector<Pair>& pairs) {
        Pair var(0,"");
        vector<vector<Pair>> out;
        if (pairs.size() == 0) return {};
        if (pairs.size() == 1) return {pairs};
        for (int i = 1; i < pairs.size(); i++){
            out.push_back(pairs);            
            var = pairs[i];
            for (int j = i-1; j >= 0; j--){
                if (pairs[j].key > var.key){
                    pairs[j+1] = pairs[j];
                    pairs[j] = var;
                } else break; 
            }
        }
        out.push_back(pairs);
        return out;
    }
};
