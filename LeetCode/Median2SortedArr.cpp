#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
*/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp;
        temp.resize(nums1.size()+nums2.size());
        copy(nums1.begin(),nums1.end(),temp.begin());
        copy(nums2.begin(),nums2.end(),temp.begin()+nums1.size());
        sort(temp.begin(),temp.end());

        if(temp.size()%2 == 0){
            int index = temp.size()/2;
            double result = (temp[index] + temp[index-1])/2.0;
            return result;
        }else{
            int index = temp.size()/2;
            return temp[index];
        }
    }
};