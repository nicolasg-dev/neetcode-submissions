class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for (const auto& s : strs) {
            string sortedS = s;
            sort(sortedS.begin(), sortedS.end());
            res[sortedS].push_back(s); // Na respectiva chave sortedS insira a string s no vetor correspondente
        }
        vector<vector<string>> result;
        for (auto& pair : res) {
            result.push_back(pair.second); // Insira o array de strings de cada string sorteada
        }
        return result;
    }
};