#include <bits/stdc++.h>

using namespace std;

void getMaxMinSum(vector<int> a)
{
    vector<long> b(a.size(),0);
    int elementScape = 0;
    long sum = 0;
    for(int j = 0; j < a.size(); j++)
    {
        for(int i = 0; i< a.size(); i++)
        {
            if(i != elementScape)
            {
                sum+= a[i];
            }
            
        }
        b[j] = sum;
        sum = 0;
        elementScape++;    
    }
    
    long max = b[0];;
    for(int i = 1; i < b.size(); i++)
    {
        if(max < b[i])
        {
            max = b[i];
        }
    }
        
    
    
    long min = b[0];;
    for(int i = 1; i < b.size(); i++)
    {
        if(min > b[i])
        {
            min = b[i];
        }
    }
    
   cout << min << " "<< max;
    
}

int main() {
    vector<int> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    getMaxMinSum(arr);
    return 0;
}
