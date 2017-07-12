#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void stairCase(int n)
{
    int spaces = n;
    for(int i = 1; i <= n; i++)
    {
        for(int k = spaces-1; k >0; k--)
        {
            cout << " ";
        }
        spaces --;
        for(int j = 1; j <= i; j++)
        {
          
            cout << "#";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    
    stairCase(n);
    return 0;
}
