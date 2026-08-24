class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int temp, n = s.size();
        int right = n - 1;
        while (left < right){
            temp = s[right];
            s[right] = s[left];
            s[left] = temp;
            left++;
            right--;
        }
    }
};