#include <iostream>
#include <string>

using namespace std;

/*
Given an input string s and a pattern p, implement regular expression matching with support for '.' and '*' where:

'.' Matches any single character.​​​​
'*' Matches zero or more of the preceding element.
The matching should cover the entire input string (not partial).

 

Example 1:

Input: s = "aa", p = "a"
Output: false
Explanation: "a" does not match the entire string "aa".
Example 2:

Input: s = "aa", p = "a*"
Output: true
Explanation: '*' means zero or more of the preceding element, 'a'. Therefore, by repeating 'a' once, it becomes "aa".
Example 3:

Input: s = "ab", p = ".*"
Output: true
Explanation: ".*" means "zero or more (*) of any character (.)".
*/

class Solution {
public:
    bool isMatch(string s, string p) {
        return match(0, 0, s, p);
    }

    bool match(int i, int j, string &s, string &p) {
        if (j == p.length())
            return i == s.length();

        bool firstMatch = (i < s.length() &&
                          (s[i] == p[j] || p[j] == '.'));

        if (j + 1 < p.length() && p[j + 1] == '*') {
            return (match(i, j + 2, s, p) ||
                   (firstMatch && match(i + 1, j, s, p)));
        } 
        else {
            return firstMatch && match(i + 1, j + 1, s, p);
        }
    }
};