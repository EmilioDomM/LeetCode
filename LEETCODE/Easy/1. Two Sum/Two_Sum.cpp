/*
    May / 09 / 2023
    1. Two Sum
    ""Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.""

    Runtime: 13ms Memory: 10.73mb
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
       
        for(int i = 0; i < nums.size(); i++){

            if(mp.find(target - nums[i]) == mp.end()){
                mp[nums[i]] = i;
            }else { 

                return {mp[target - nums[i]], i}; 
            }
        }
 
        return {};

    }
};