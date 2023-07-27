class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        std::vector<std::vector<int> > matrix2(matrix.size(), std::vector<int>(matrix[0].size()));
        for(int i=0; i<matrix.size();i++)
        {
            for(int j=0; j<matrix[0].size();j++)
            {
                matrix2[j][i]=matrix[i][j];
            }
        }

        for(int i=0; i<matrix.size();i++)
        {
            for(int j=0; j<matrix[0].size();j++)
            {
                matrix[i][j]=matrix2[i][j];
            }
        }

        for(int i=0; i<matrix.size();i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
