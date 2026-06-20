class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3) {
            return false;
        }

        bool inc = false;
        bool dec = false;

        int i = 0;

        while(i < arr.size()-1 && arr[i] < arr[i+1]) {
            inc = true;
            i++;
        }

        if(i == 0 || i == arr.size()-1) {
            return false;
        }

        while(i < arr.size()-1 && arr[i] > arr[i+1]) {
            dec = true;
            i++;
        }

        return inc && dec && i == arr.size()-1;
    }
};