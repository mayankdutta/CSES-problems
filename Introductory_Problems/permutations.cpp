//Need not to create actual permutations, just required to maintain given adjacent no.s difference
#include <bits/stdc++.h>
using ll=long long int;
 
template <typename t> void print ( const t & v ) { 
    for ( auto i: v ) { 
        std::cout << i << " "; 
    }std::cout << std::endl;
}
 
int main () { 
    ll n; 
    std::cin >> n; 
 
    if ( n == 1 ) { // corner case 
        std::cout << "1 " << std::endl;
    }
    else if ( n > 1 and  n <= 3 ) {  // not possible for n > 1 and n <= 3
        std::cout << "NO SOLUTION" << std::endl;
    }
 
    else { 
        ll start = n-1; 
        ll mid = n; 
 
        for ( ll i=0; i<n; i++ ) {
            if ( start  > 0) { 
                std::cout << start << " ";
                start -= 2; // no.s are printed so that they might not get the difference of 1
            }
            else { 
                std::cout << mid << " ";
                mid -= 2;
            }
        }
    }
}
