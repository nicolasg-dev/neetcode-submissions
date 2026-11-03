class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int esq = 0;
        int dir = numbers.size() - 1;

        while(dir > esq){
            if ((numbers[esq] + numbers[dir]) > target){
                dir--;
            } else if ((numbers[esq] + numbers[dir]) < target){
                esq++;
            } else return {esq+1,dir+1};
        }
        return {0,0};
    }
};
