class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int L = 0;
        int n = numbers.size();
        int R = n - 1;
        while (L < R){
            int sum = numbers[L] + numbers[R];
            if (sum == target){
                return {L + 1, R + 1};
            }
            else if (sum < target){
                L++;
            }
            else if (sum > target){
                R--;
            }
        }
        return {};
    }
};