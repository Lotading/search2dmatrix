#include <vector>
#include <iostream>
#include <stdlib.h>

class Solution {
public:
    bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {

        int m,n;

        for (int i = 0; i < matrix.size(); i++) {

            for (int j = 0; j < matrix[i].size(); j++) {

                if (matrix[i][j] == target) {
                return true;
                }
            }
            
        }
        return false;
    }
};