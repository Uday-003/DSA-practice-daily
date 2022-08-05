
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
ll merge(ll *arr, ll *tmp, int l, int mid, int r)
{
    ll inverse_count = 0;

    int i = l;
    int j = mid;
    int k = l;

    while ((i <= mid - 1) && (j <= r))
    {
        if (arr[i] <= arr[j])
        {
            tmp[k++] = arr[i++];
        }
        else
        {
            tmp[k++] = arr[j++];
            inverse_count = inverse_count + (mid - i);
        }
    }
    while (i <= mid - 1)
    {
        tmp[k++] = arr[i++];
    }
    while (j <= r)
    {
        tmp[k++] = arr[j++];
    }
    for (int i = l; i <= r; i++)
    {
        arr[i] = tmp[i];
    }

    return inverse_count;
}

long long mergesort(ll *arr, ll *tmp, int l, int r)
{
    int mid;
    ll inverse_count = 0;
    if (l < r)
    {
        mid = (l + r) / 2;
        inverse_count += mergesort(arr, tmp, l, mid);
        inverse_count += mergesort(arr, tmp, mid + 1, r);

        inverse_count += merge(arr, tmp, l, mid + 1, r);
    }
    return inverse_count;
}

long long inversion(long long *arr, int n)
{
    ll tmp[n] = {0};
    ll ans = 0;
    ans = mergesort(arr, tmp, 0, n - 1);
    return ans;
}
int main()
{
    ll arr[5] = {5, 3, 2, 1, 4};
    // ll tmp[5]={0};
    ll ans = invers(arr, 5);
    cout << ans << endl;
}
