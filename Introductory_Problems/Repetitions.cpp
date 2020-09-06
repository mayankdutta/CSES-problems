#include <bits/stdc++.h>
using ll=long long int;
 
template <typename t> inline t max ( const t & a, const t & b ) { 
    if ( a > b ) return a; 
    else return b;
}
 
int main () { 
    std::string s;
    std::cin >> s; 
 
    ll i, j;
    i = 0;
    ll max_count = 0;
    while ( i < s.size () ){ 
        ll count_similar_character = 1;
        j = i+1;        // we don't have to worry for i++ later, increment already done here. 
        while ( s[i] == s[j] and j < s.size () ) {
            count_similar_character++; 
            j++;
        }
 
        i = j;   // if nothing happened then we already have i++
        max_count = max ( count_similar_character, max_count );
    }
 
    std::cout << max_count << std::endl;
}
