/*
1) Problem: Given N coins. You have to find the number of ways TAKA can be made using these coins. You can
    use a coin as many times as you wish.
2) Similar Problem Link: https://onlinejudge.org/external/6/674.pdf
3) Algorithm: Dynamic Programming
4) dp[i] = j means, there are j ways to make i (in the current iteration). If all iteration is finished, then we
    can say dp[i] = j means, there are j ways to make i after using all the coins provided.
5) Use Paper and Pencil to understand visually and clearly.
6)
Sample Input:
3 8
1 2 5
Sample Output:
4
Explanation:
1+1+1+1+1+1+1+1
1+1+1+1+1+1+2
1+1+1+5
1+2+5
So, there are 4 ways to make 8 using coins 1, 2, 5.
*/
#include<bits/stdc++.h>
using namespace std;

int coins[109];
int maxCents = 7009;
int dp[7009];
int n, taka;

void coinChangeNumberOfWays() {
    dp[0] = 1;
    for(int i=0; i<n; i++) {
        for(int j=coins[i]; j<=taka; j++) {
            dp[j] = dp[j] + dp[j-coins[i]];
        }
    }

}

int main() {
    while(cin>>n>>taka) {
        for(int i=0; i<n; i++)
            scanf("%d", &coins[i]);
        coinChangeNumberOfWays();
        cout<<dp[taka]<<endl;
    }
    return 0;
}
