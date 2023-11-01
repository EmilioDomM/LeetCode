/*
    Oct / 31 / 2023
    2433. Find The Original Array of Prefix Xor
    ""You are given an integer array pref of size n. Find and return the array arr of size n that satisfies""

*/

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ans;
        ans.push_back(pref[0]);

        for(int i = 1; i < pref.size(); i++){
            ans.push_back(pref[i-1]^pref[i]);
        }
        return ans;
    }
};