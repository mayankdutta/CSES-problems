#include <bits/stdc++.h>
using namespace std; 
using ll=long long int; 

ll factor ( ll n, ll x ) { 
    // base case
    if ( n == 0 ) { 
        return 0;
    }
    return n/x + factor ( n/x, x ); 
}

int main () {
    ll n;
    std::cin >> n; 

    std::cout << min (factor ( n, 5 ), factor ( n, 2 ) ) << std::endl; 
}

