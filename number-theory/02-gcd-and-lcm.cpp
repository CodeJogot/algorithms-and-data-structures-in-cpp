/*
1) Implementation of GCD(Greatest Common Divisor) and LCM(Least Common Multiple).
*/
#include <iostream>
using namespace std;


long long gcd(long long int a, long long int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

long long lcm(int a, int b) {
	return (a / gcd(a, b)) * b;
}

int main()
{
	while(true) {
	    long long a, b, c, d;
	    printf("Enter two number to find GCD=");
	    cin>>a>>b;
	    cout<<gcd(a,b)<<endl;
	    printf("Enter two number to find LCM=");
	    cin>>c>>d;
	    cout<<lcm(c,d)<<endl;
	}
	return 0;
}

