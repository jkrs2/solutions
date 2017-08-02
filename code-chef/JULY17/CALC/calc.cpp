#include <bits/stdc++.h>
using namespace std;
int main( int argc, char ** argv )
{
     uint32_t T,N,B;
     cin >> T;
     while (T--) {
          cin >> N >> B;
          uint64_t r = (N+B)/(B+B);
          cout << r*(N-r*B) << endl;
     }
     return 0;
}


// press x times on second button, and balance on second button
// final score
// S = (N - xB) x
//   = Nx-Bx^2
//   = B( N^2/(4B^2) - (x-N/2B)^2)-
