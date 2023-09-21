
/************************************************************************
 *                 Solved By : Abdul Alim                               *
 *                 GitHub    : github.com/FarmerAbdulAlim               *
 *                 Email     : farmerabdulalim@gmail.com                *
 *                 YouTube   : youtube.com/@TravelerAbdulAlim           *
 *                 YouTube   : youtube.com/@AbdulAlim-Bangladesh        *
 ************************************************************************/

/*
    Algorithm Used: Binary Search
    Complexity: O(log(N))
    Solution Approach:
*/

#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define MAX 100009

int a[MAX];

bool binarySearch(int left, int right, int value)
{
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (a[mid] == value)
            return 1;
        else if (a[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return 0;
}

int main()
{
    int i, j, k, n, m, d, value;
    while (cin >> n)
    {
        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        cin >> value;
        if (binarySearch(0, n - 1, value))
            cout << "Found" << endl;
        else
            cout << "Not Found" << endl;
    }
    return 0;
}