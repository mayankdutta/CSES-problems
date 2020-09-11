#include <bits/stdc++.h>
using namespace std; 
using ll=long long int;

int main () { 
    string s, first_half, odd;
    std::cin >> s; 

    map <char, ll> mp;
    for ( char ch: s ) { 
        mp[ch] ++; 
    }

    int odd_count = 0;

    for ( auto &i: mp ) { 
        if ( i.second % 2 ) { 
            odd_count ++;
            odd += i.first; 
            i.second --; 
        }

        if ( i.second % 2 == 0 ) { 
            auto k = i.second /2; 
            while ( k-- ) { 
                first_half += i.first; 
            }
        }
    }

    if ( odd_count == 1 or odd_count == 0 ) {  // solution will only exist if there is 1 odd count or 0 
        cout << first_half << odd; 
        reverse ( first_half.begin (), first_half.end ( ) ); 
        cout << first_half; 
    }
    else {  // if there will be more then one odd character, symmetry will be disturbed 
        std::cout << "NO SOLUTION" << std::endl;
    }
}

