
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

void binarySearch(int left, int right)
{
    char s[10];
    while (left != right)
    {
        int mid = (left + right + 1) / 2;
        printf("%d\n", mid);
        fflush(stdout);
        scanf("%s", s);
        if (strcmp(s, "<") == 0)
            right = mid - 1;
        else
            left = mid;
    }
    printf("! %d\n", left);
    fflush(stdout);
}

int main()
{
    int i, j, k, n, m, d, value;
    binarySearch(1, 1000000);
}