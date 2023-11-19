#include <vector>
#include <iostream>
#include <stdlib.h>

class Solution {
public:
    bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {

        for (int i = 0; i < matrix.size(); i++) {

            for (int j = 0; j < matrix[i].size(); j++) {

                int matrixed = matrix[i][j];

                switch (matrix[i][j] == target) {
                    
                case true:
                    return true;
                default:
                    break;
                }
            }
        }
        return false;
    }
};