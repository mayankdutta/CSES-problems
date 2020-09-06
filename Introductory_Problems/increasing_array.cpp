#include <bits/stdc++.h>
using namespace std; 
using ll=long long int; 

int main () { 
    ll n;
    std::cin >> n;
    std::vector <ll> v ( n );

    for ( ll i=0; i<n; i++ ) { 
        std::cin >> v[i];
    }

    ll count=0; 

    for ( ll i=0; i<n-1; i++ ) { 
        if ( v[i] > v[i+1] ) {

            count += abs (v[i+1] - v[i]); 
            v[i+1] = v[i];
        }
    }
    std::cout << count << std::endl;
}
