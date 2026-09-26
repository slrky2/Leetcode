#include <string>

class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        // when we see the key value we need to remove it from the string ( and its parenthesis ) , and replace it with the value in this 2d vector which is being used 
        // as a map
        
        // parse string until we find '('
        int i = 0;
        s.find('(');
        string key = '';
    }
};

int main(){
    string s = "this is a (test)";

    Solution d;
    d.evaluate();

}