#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
        
    int max = -55;
    for(int i = 0; i < 4; i++)
    {
        int sum = 0;
    
        for(int j = 0; j < 4; j++)
        {
            
            //cout << arr[i][j] << arr[i][j+1] << arr[i][j+2] ;
            //cout << " ";
            sum += arr[i][j];
            sum += arr[i][j+1];
            sum += arr[i][j+2];
            
            //cout << endl;
            
            sum += arr[i+1][j+1];
            
            //cout << " " << arr[i+1][j+1];
            //cout << " ";
            //cout << endl;
            
            
            //cout << arr[i+2][j] << arr[i+2][j+1] << arr[i+2][j+2] ;
            //cout << " ";
            sum += arr[i+2][j];
            sum += arr[i+2][j+1];
            sum += arr[i+2][j+2];
            
            //cout <<"sum: " << sum << endl;
            //cout << endl << endl;
            
            if(sum > max)
            {
                max = sum;
            }
            sum = 0;
            
        }
       //cout << endl;        
    }
    cout << max ;
    return 0;
}
