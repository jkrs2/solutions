#include <bits/stdc++.h>
using namespace std;
int main( int argc, char ** argv )
{
     uint32_t T,N,B;
     srand(argc==1 ? 10 : atoi(argv[1]));

     T=10000000;
     T=10000000;
     cout << T << endl;;
     while (T--) {
          N=rand()%1000000000+1;;
          B=rand()%1000000000+1;;
          cout << N << " " << B << endl;
     }
     return 0;
}


// press x times on second button, and balance on second button
// final score
// S = (N - xB) x
//   = Nx-Bx^2
//   = B( N^2/(4B^2) - (x-N/2B)^2)-
