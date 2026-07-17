class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();//let here the size=4;
        vector<vector<int>> ans(n-2,vector<int>(n-2));//it create matrix like2*2
        for(int i=0;i<n-2;i++){//row
            for(int j=0;j<n-2;j++){//colmn
                int maxi=0;//maximum alue of current window
                for(int x=i;x<i+3;x++){//move row
                    for(int y=j;y<j+3;y++){//move colmn
                        maxi=max(maxi,grid[x][y]);
                    }
                }
                ans[i][j]=maxi;
            }
        }
        return ans;
    }
};