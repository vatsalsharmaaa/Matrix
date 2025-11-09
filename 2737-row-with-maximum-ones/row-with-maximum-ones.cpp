class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxCount = 0;
        int rowIndex = 0;

        for (int i = 0; i < mat.size(); i++) {
            int count = 0;

            // Count ones in the current row
            for (int j = 0; j < mat[i].size(); j++) {
                if (mat[i][j] == 1)
                    count++;
            }

            // Update if this row has more ones
            if (count > maxCount) {
                maxCount = count;
                rowIndex = i;
            }
        }

        return {rowIndex, maxCount};
    }
};
