/*
1) Problem: Given 5 types of coins. You have to find the number of ways CENTS can be made using these coins. You can
use a coin as many times as you need.
2) Problem Link: https://onlinejudge.org/external/6/674.pdf
3) Algorithm: Dynamic Programming
4) dp[i][j] = k means, there are k ways to make j using first i coins.
5) We consider the coin array as a 1-indexed.
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

int coins[6];
int maxCents = 7500;
int dp[6][7500];

void coinChangeNumberOfWays() {
    coins[1] = 1; coins[2] = 5; coins[3] = 10; coins[4] = 25; coins[5] = 50;
    for(int i=0; i<7500; i++)
        dp[0][i] = 0;
    for(int i=0; i<=5; i++)
        dp[i][0] = 1;
    for(int i=1; i<=5; i++) {
        for(int j=1; j<7500; j++) {
            if(j-coins[i]<0) {
                dp[i][j] = dp[i-1][j];
                continue;
            }
            int p1 = dp[i-1][j]; //p1 stores the number of ways j can be made, not taking or considering the current coins[i];
            int p2 = dp[i][j-coins[i]]; //p2 stores the number of ways j-coins[i] be made, taking or considering the current coins[i];
            dp[i][j] = p1 + p2;
        }
    }

}

int main() {
    int i, j, k, n, m, d, cents;
    coinChangeNumberOfWays();
    while(cin>>cents) {
            cout<<dp[5][cents]<<endl;
    }
    return 0;
}
