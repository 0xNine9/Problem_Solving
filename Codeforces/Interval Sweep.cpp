//solution of https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/E
    #include <iostream>
    #include <cmath>
    #include <iomanip>
    
    using namespace std;
     
    int main(){
        int a ,b, diff;
        cin >> a >> b;
        diff = abs(a - b);
        if (diff >= 2 || (a == 0 && b == 0))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }  