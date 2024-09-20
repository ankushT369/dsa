#include <iostream>
#include <vector>

void spiralTraversal(std::vector<std::vector<int>>& matrix) {
    if (matrix.empty()) return;
    
    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;
    
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; ++i) {
            std::cout << matrix[top][i] << " ";
        }
        top++;
        
        for (int i = top; i <= bottom; ++i) {
            std::cout << matrix[i][right] << " ";
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                std::cout << matrix[bottom][i] << " ";
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                std::cout << matrix[i][left] << " ";
            }
            left++;
        }
    }
}

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    spiralTraversal(matrix);
    
    return 0;
}

