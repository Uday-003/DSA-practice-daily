#include <bits/stdc++.h>
using namespace std;
#define For(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define pb push_back
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

// ------------------------------------------------------------------------------------------------------------
void ispresent(vector<vector<int>> &matrix, int target)
{
    int m = matrix.size();
    int n = matrix[0].size();
    int i = 0;
    int j = (m * n) - 1;
    while (i <= j)
    {
        int mid = (i + j) / 2;
        int ele = matrix[mid / n][mid % n];
        if (ele > target)
        {
            j = mid - 1;
        }
        else if (ele < target)
        {
            i = mid + 1;
        }
        else if (ele == target)
        {
            cout << "yes" << endl;
            return;
        }
    }
    cout << "no" << endl;
    return;
}

int main()
{
    vector<vector<int>> matrix;
    matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 3;
    ispresent(matrix, target);
}