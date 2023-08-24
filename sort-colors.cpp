class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a = 0, b = 0, c = 0, count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                a++;
            }
            if (nums[i] == 1) {
                b++;
            }
            if (nums[i] == 2) {
                c++;
            }
        }
        while (a > 0) {
            nums[count] = 0;
            a--;
            count++;
        }
        while (b > 0) {
            nums[count] = 1;
            b--;
            count++;
        }
        while (c > 0) {
            nums[count] = 2;
            c--;
            count++;
        }


    }
};