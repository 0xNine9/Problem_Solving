// solution of https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C
    #include <iostream>
    #include <cmath>
    #include <iomanip>
     
    using namespace std;
     
    int main(){
        char ch;
        cin >> ch;
        ch = ((ch - 'a') + 1)%26 + 97;
        cout <<ch<< endl;
     
    }  