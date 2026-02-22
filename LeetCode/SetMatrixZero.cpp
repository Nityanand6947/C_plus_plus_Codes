#include<iostream>
#include <vector>

using namespace std;


/*
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.

Example 1:


Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]
*/

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        if (matrix.empty())
            return;

        int m = matrix.size();
        int n = matrix[0].size();

        bool firstRow = false;
        bool firstColumn = false;

        for (int j = 0; j < n; j++)
        {
            if (matrix[0][j] == 0)
            {
                firstRow = true;
                break;
            }
        }

        for (int i = 0; i < m; i++)
        {
            if (matrix[i][0] == 0)
            {
                firstColumn = true;
                break;
            }
        }

        for (int i = 1; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        for (int i = 1; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
        if (firstRow)
        {
            for (int j = 0; j < n; j++)
            {
                matrix[0][j] = 0;
            }
        }

        if (firstColumn)
        {
            for (int i = 0; i < m; i++)
            {
                matrix[i][0] = 0;
            }
        }
    }
};