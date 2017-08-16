#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    
    string hour = s.substr(0,s.find_first_of(":"));
    int intHour = stoi(hour);
    
    string ampm = s.substr(s.length()-2, s.length());
    
    if(ampm == "PM")
    {
        if(intHour != 12)
        {
            intHour +=12;
        }
    }
    else
    {
        if(intHour == 12)
        {
            intHour = 0;
        }
    }
    hour = to_string(intHour);
    
    if (hour == "0" || hour.length() < 2)
    {
        s = "0"+hour+s.substr(2,s.length()-4);
    }
    else
    {
        s = hour+s.substr(2,s.length()-4);
    }
    return s;
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}
