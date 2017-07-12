#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sumDiag(int n, vector< vector<int> > a)
{
    int primaryDiag = 0;
    int secondDiag = 0;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if (i == j)
                primaryDiag += a[i][j];
            if(i+j == n-1)
            {
               secondDiag += a[i][j];
            }
        }
    }
    
    return abs(primaryDiag - secondDiag);
    
}

int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    cout << sumDiag(n, a) << endl;
    return 0;
}
