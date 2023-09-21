/*
1) A C++ Program to generate prime numbers.
2) prime[] array stores the prime numbers less than N=100000006.
3) Algorithm: Sieve
4) Time Complexity: O(N*(log(logN)))
*/

#include<bits/stdc++.h>
using namespace std;

bool a[100000009];
int prime[5800009];
long long cnt=0;
void sieve() {
    long long i,j;
    a[0]=1; a[1]=1; prime[0]=2;
    for(i=3; i<=100000006; i=i+2) {
        if(a[i]==0) {
            cnt++;
            prime[cnt]=i;
            for(j=i*i; j<=100000006; j=j+2*i)
                a[j]=1;
        }
    }
}

int main()
{
    sieve();
    printf("Number of Primes Number Generated=%d\n", cnt);
    for(int i=0;i<=10000;i++)
    printf("%d ",prime[i]);
    puts("");
    return 0;
}
