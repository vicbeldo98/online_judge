#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

    long long n1,n2;

    while(!cin.eof() && cin >> n1 && n1 >=0){
        cin >> n2;
        cout << abs(n1-n2) << "\n";
    }
    return 0;
}