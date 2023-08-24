class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>V;
        for (int i = 0; i < nums.size(); i++) {
            int x = abs(nums[i]) - 1;
            if (nums[x] > 0) {
                nums[x] = -nums[x];
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                V.push_back(i + 1);
            }
        }
        return V;

    }
};