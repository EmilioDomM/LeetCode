/*
    Nov / 05 / 2023
    1535. Find the Winner of an Array Game
    ""Given an integer array arr of distinct integers and an integer k.""

    Runtime: 81ms  Memory: 63.36mb
*/

class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int counter = 0;
        int first = arr[0];

        if (k == 1) {
            return max(arr[0], arr[1]);
        }
        if (k >= arr.size()) {
            return *max_element(arr.begin(), arr.end());
        }

        for(int i = 1; i < arr.size(); i++){
            if(first > arr[i]){
                counter++;
            } else{
                first = arr[i];
                counter = 1;
            }

            if(counter == k){
                return first;
            }
        }
        return first;
    }
};