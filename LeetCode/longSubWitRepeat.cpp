#include <iostream>
#include <string>
using namespace std;

/*
Given a string s, find the length of the longest substring without duplicate characters.

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max = 0;
        for(int i=0;i<s.length();i++){
            string temp = "";
            for(int j=i;j<s.length();j++){
                char c = s[j];
                if(temp.find(c) != string::npos){
                    break;
                }
                temp += c;
            }
            if(temp.size() > max)
            max = temp.size();
        }
        return max;
    }
};