class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        bool firstRowZero = false;
        bool firstColZero = false;

        // Check if the first row needs to be zeroed
        for (int j = 0; j < cols; ++j) {
            if (matrix[0][j] == 0) {
                firstRowZero = true;
                break;
            }
        }

        // Check if the first column needs to be zeroed
        for (int i = 0; i < rows; ++i) {
            if (matrix[i][0] == 0) {
                firstColZero = true;
                break;
            }
        }

        // Use first row and column to mark zero rows and columns
        for (int i = 1; i < rows; ++i) {
            for (int j = 1; j < cols; ++j) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Zero out cells based on marks in the first row
        for (int i = 1; i < rows; ++i) {
            if (matrix[i][0] == 0) {
                for (int j = 1; j < cols; ++j) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Zero out cells based on marks in the first column
        for (int j = 1; j < cols; ++j) {
            if (matrix[0][j] == 0) {
                for (int i = 1; i < rows; ++i) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Zero out the first row if needed
        if (firstRowZero) {
            for (int j = 0; j < cols; ++j) {
                matrix[0][j] = 0;
            }
        }

        // Zero out the first column if needed
        if (firstColZero) {
            for (int i = 0; i < rows; ++i) {
                matrix[i][0] = 0;
            }
        }
    }
};
