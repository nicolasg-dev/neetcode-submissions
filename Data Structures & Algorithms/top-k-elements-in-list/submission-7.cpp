class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;

        for(auto& num : nums){ // Percorre o array nums 
            m[num]++; // Incrementa 1 a respectiva chave 'num' na tabela 'm'
        }
    
        int maior, chave;
        vector<int> saida;

        for (int i = 0; i < k; i++){
            maior = -1;
            for(auto& par : m){
                if (par.second > maior){
                    maior = par.second;
                    chave = par.first;
                }
            }
            saida.push_back(chave);
            m.erase(chave);
        }
        return saida;
    }
};
