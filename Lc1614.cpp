#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        int max = 0, count = 0;
        for(auto c : s){
            if (c == '(') count++; // increment count
            if (c == ')') count--;
            if (count > max) max = count;
        }
        return max;
    }
};
