// solution of https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G
    #include <iostream>
    #include <cmath>
    #include <iomanip>
     
    using namespace std;
     
    int main(){
        long long m, e , b;
        long long count = 0;
        cin >> e >> m >> b;
     
        if (m >= 0){
            count = min(min(m,e), b) ;
            if (e >= count)
                e = e - count;
            if (b >= count)
                b -= count;
            if(e > 0 || b > 0)
                count += min(b, e/2);
        }
        cout << count << endl;
    }  