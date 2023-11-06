/*
    Aug / 28 / 2023
    2645. Minimum Additions to Make Valid String
    Given a string word to which you can insert letters "a", "b" or "c" anywhere and any number of times, 
    return the minimum number of letters that must be inserted so that word becomes valid.

    Runtime: 0ms  Memory: 6.19mb
*/

class Solution {
public:
    int addMinimum(string word) {
        int ans = 0, i = 0;
        while(i < word.size()){
            (word[i] == 'a') ? i++ : ans++;         
            (word[i] == 'b') ? i++ : ans++;
            (word[i] == 'c') ? i++ : ans++;
        }
        return ans;
    }
};