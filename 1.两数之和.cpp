/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> sum;
        for(int i= 0; i < nums.size(); i++){
            if(sum.count(target-nums[i])){
                return {sum[target - nums[i]], i};
            }else{
                sum[nums[i]] = i;
            }
        }
        return {0, 0};
    }
};
// @lc code=end

