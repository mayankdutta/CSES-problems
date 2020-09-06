#include <bits/stdc++.h>
using ll=long long int; 
 
int main () { 
  ll n; 
  std::cin >> n; 
 
  std::cout << n << " ";

  while ( n != 1 ) {        // While loop till give no. don't turn to 1
    if ( n % 2 == 0 ) {     //if no. is even 
      n /= 2; 
      std::cout << n << " ";
    }
    else {                  //if no. is odd 
      n = 3*n + 1; 
      std::cout << n << " ";
    }
  }
}
