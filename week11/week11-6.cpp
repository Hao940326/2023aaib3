class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n=coordinates.size();
        int dx=coordinates[1][0]-coordinates[0][0];
        int dy=coordinates[1][1]-coordinates[0][1];
        for(int i=0;i<n;i++){
            int xi=coordinates[i][0]-coordinates[0][0],yi=coordinates[i][1]-coordinates[0][1];
            if(dy * xi != dx * yi)return false;
        }
        return true;
    }
};