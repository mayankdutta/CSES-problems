#include <bits/stdc++.h>
using namespace std;

int main () { 
    string s;
    std::cin >> s;

    set <string> st; 

    sort ( s.begin (), s.end () );
    st.insert ( s );

    do {
        st.insert ( s ); 
    }while ( next_permutation ( s.begin(), s.end () ) ); 

    std::cout << st.size() << std::endl;
    for ( auto i: st ) { 
        std::cout << i << std::endl;
    }
}
