#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void plusMinus(vector<int> a)
{
    double countPositive = 0;
    double countNegative = 0;
    double countZero = 0;
    for (auto b:a)
    {
        if (b == 0)
        {
            countZero++;
        }
        else if (b < 0)
        {
            countNegative++;
        }
        else
        {
            countPositive++;
        }
    }
    cout << countPositive/a.size() << endl;
    cout << countNegative/a.size() << endl;
    cout << countZero/a.size() << endl;     
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    
    plusMinus(arr);
    
    return 0;
}
