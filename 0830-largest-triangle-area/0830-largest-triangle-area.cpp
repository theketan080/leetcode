class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        int n = points.size();
        double maxArea = 0.0;
        for(int i = 0; i < n; i++){
            for(int j = i+ 1; j<n;j++){
                for(int k = j +1; k < n; k++){
                    double x1 = points[j][0] - points[i][0];
                    double y1 = points[j][1] - points[i][1];
                    double x2 = points[k][0] - points[i][0];
                    double y2 = points[k][1] - points[i][1];
                    double cross = fabs(x1*y2 - x2*y1);
                    double area = 0.5 * cross;
                    if(area > maxArea) maxArea = area;
                }
            }
        }
            return maxArea;
    }
};