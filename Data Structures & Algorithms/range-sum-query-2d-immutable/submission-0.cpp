class NumMatrix {
    private:
    vector<vector<int>>mat;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        mat=vector<vector<int>>(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=1;j<n;j++){
                int add=matrix[i][j]+matrix[i][j-1];
                matrix[i][j]=add;
            }
        }
        for(int j=0;j<n;j++){
            for(int i=1;i<m;i++){
                int add=matrix[i][j]+matrix[i-1][j];
                matrix[i][j]=add;
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mat[i][j]=matrix[i][j];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int add=0;
        int sub1=0;
        int sub2=0;
        if(row1-1>=0 && col1-1>=0)add=mat[row1-1][col1-1];
        if(row1-1>=0 && col2>=0)sub1=mat[row1-1][col2];
        if(row2>=0 && col1-1>=0)sub2=mat[row2][col1-1];
        return mat[row2][col2]+add-sub1-sub2;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */