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
            for(auto& par : m){ // Itera entra cada par na tabela hash 'm'
                if (par.second > maior){
                    maior = par.second;
                    chave = par.first;
                }
            }
            saida.push_back(chave); //Coloca o número com maior aparição no vetor saida
            m.erase(chave); // Apaga o número já usado na tabela.
        }
        return saida;
    }
};
