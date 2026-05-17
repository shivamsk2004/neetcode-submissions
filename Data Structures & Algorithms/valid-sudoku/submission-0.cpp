class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<int>>row(9,vector<int>(9,0));
        vector<vector<int>>col(9,vector<int>(9,0));
        vector<vector<int>>box(9,vector<int>(9,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='.')continue;
                int num=(board[i][j]-'1');
                if(row[i][num]==1)return false;
                row[i][num]=1;
                if(col[j][num]==1)return false;
                col[j][num]=1;
                if(box[3*(i/3)+(j/3)][num]==1)return false;
                box[3*(i/3)+(j/3)][num]=1;
            }
        }
        return true;
    }
};
