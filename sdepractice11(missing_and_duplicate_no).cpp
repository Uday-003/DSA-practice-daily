// Link: https://www.codingninjas.com/codestudio/problems/873366?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0
#include <bits/stdc++.h>
using namespace std;
#define For(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define pb push_back
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve(vector<int> &arr, int n)
{
    int sum = 0;
    pair<int, int> ans;

    For(i, n)
    {
        sum += arr[i];
    }

    sort(arr.begin(), arr.end());
    For(i, n - 1)
    {
        if (arr[i] == arr[i + 1])
        {
            ans.second = arr[i];
            break;
        }
    }

    ll req = (n * (n + 1)) / 2;

    sum -= ans.second;

    ans.first = abs(req - sum);

    cout << ans.first << " " << ans.second << endl;
    return;
}

int main()
{

    int n = 10;
    vector<int> arr;
    arr = {4, 5, 2, 9, 8, 1, 1, 7, 10, 3};

    solve(arr, n);
}