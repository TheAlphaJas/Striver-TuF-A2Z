class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> a,b;
        for(int i = 0;i<matrix.size();i++) {
            for(int j = 0;j<matrix[i].size();j++) {
                if (matrix[i][j] == 0) {a.insert(i); b.insert(j);}
        }
    }
    for(int i = 0;i<matrix.size();i++) {
        for(int j = 0;j<matrix[i].size();j++) {
            if (a.count(i)||b.count(j)) {matrix[i][j]=0;}
        }
    }
    }
};
