#include <bits/stdc++.h>
using namespace std;

struct Point
{
    int x, y;
};

int countVShapes(vector<Point> &points)
{
    int n = points.size();
    int count = 0;

    stack<Point> st;

    for (int i = 0; i < n; ++i)
    {
        while (!st.empty() && st.top().y < points[i].y)
        {
            st.pop();
            count += st.size();
        }
        st.push(points[i]);
    }

    return count;
}

int main()
{
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t)
    {
        int N;
        cin >> N;

        vector<Point> points(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> points[i].x >> points[i].y;
        }

        sort(points.begin(), points.end(), [](const Point &a, const Point &b)
             { return a.x < b.x; });

        int result = countVShapes(points);
        cout << result << endl;
    }

    return 0;
}
