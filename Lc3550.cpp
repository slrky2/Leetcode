#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            int total = 0;
            // cout << "num = " << nums[i] << " count = " << i; ;
                while (nums[i] > 0){
                    total += nums[i]%10;
                    nums[i] /= 10;
                    }
            // cout << ": our total for this number = " << total << endl;;
            if (i == total) return i;
        }
        return -1;
    }
};

int main(){
    vector<int> test = {1,3,2};
    Solution sol;
    cout << sol.smallestIndex(test);
    return 0;
}