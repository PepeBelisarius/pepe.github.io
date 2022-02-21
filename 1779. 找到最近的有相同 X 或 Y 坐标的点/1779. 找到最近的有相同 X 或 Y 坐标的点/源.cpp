class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        vector<vector<int>> v1;
        bool fu = false;
        int min = 9999;
        int minnumb = -1;
        for (int qw = 0; qw < points.size(); qw++) {
            if (points[qw][0] == x || points[qw][1] == y)
            {
                vector<int> v2{ abs(points[qw][0] - x) + abs(points[qw][1] - y),qw };
                v1.push_back(v2);
                fu = true;
                if (v1[qw][0] < min)
                {
                    minnumb = v1[qw][1];
                    min = v1[qw][0];
                }
            }
        }
        if (!fu)
            return -1;
        else
            return minnumb;
    }
};