#include <bits/stdc++.h>
using ll=long long int; 
 
int main () { 
  ll n;
  std::cin >> n; 
 
  bool ispresent [n]; // prepared a boolean hash 
 
  for ( ll i=0; i<=n; i++ ) ispresent [i] = false; //all are turned to false so that we might not face problem afterward
 
  for ( ll i=0; i<n-1; i++ ) { 
    ll no;
    std::cin >> no;
    ispresent [no] = true; // TRUE is placed at the index having value no
  }
 
  for ( ll i=1; i<=n; i++ ) { 
    if ( !ispresent [i] ) {  // on just comparing values with it's corresponding index. 
      std::cout << i << std::endl;
      break;
    }
  }
}
