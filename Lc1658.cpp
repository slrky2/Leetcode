#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
[] - capture
() - params
{} - body
*/
// using sliding door algo
class Solution {
public:
int minOperations(vector<int>& nums, int x) {
    int n = nums.size();
    int total = 0;
    for (int num : nums) total += num;

    int target = total - x;      // the middle chunk we keep must sum to this
    if (target < 0) return -1;   // can't remove more than the whole array

    int start = 0, curr = 0, longest = -1;

    for (int end = 0; end < n; end++) {
        curr += nums[end];
        // cout << "adding " << nums[end] << " to the curr = " << curr << endl;

        // window too big, shrink from the front
        while (curr > target) {
            cout << "current: " << curr;
            curr -= nums[start];
            // cout << " pulling from the front " << nums[start] << " to " << curr << endl;
            start++;
        }

        // exact match, keep the longest one
        if (curr == target) {
            longest = max(longest, end - start + 1);
        }
    }

    return longest == -1 ? -1 : n - longest;
}
};

int main(){
    vector<int> test {3,2,20,1,1,3};
    int x = 10;
    Solution sol;
    cout << sol.minOperations(test, x) << endl;
    return 0;
}

/*
int minOperations(vector<int>& nums, int x) {
        int mini = 0, start = 0, end = 0, curr = 0;
        while (curr < x){
            curr += nums[end];
            cout << "adding " << nums[end] << " to the curr = " << curr << endl;;
            end++;
        }
        // save this as out current min
        mini = end;

        while (start < end && curr > x ){
            cout << "current: " << curr;
            curr = curr - nums[start];
            cout << " pulling from the front "<< nums[start] << " to " << curr << endl;;
            start++;
        }
        int smallest = min(mini, end-start+1);
        return smallest;
    }
};
*/