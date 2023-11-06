/*
    Aug / 07 / 2023
    14. Longest Common Prefix
    ""Write a function to find the longest common prefix string amongst an array of strings, if there is no common prefix, return an empty string "".""

    Runtime: 0ms  Memory: 9.19mb
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if ( strs.size() == 0 ) return "";
        string answer = "";

        for ( int i = 0; i < strs[0].length(); i++){
            for ( int j = 1; j < strs.size(); j++){
                if ( j >= strs.size() || strs[j][i] != strs[0][i]){
                    return answer;
                }
            }
            answer += strs[0][i];
        }
        return answer;
    }
};