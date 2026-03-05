#include <iostream>
using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;

    long long cost=0;

    if(N==0) {
        cout << "BROKE\n";
        return 0;
    }

    cost+=220;
    N-=1;

    long long twos=N/2;
    long long ones=N%2;

    cost+=twos*350+ones*180;

    if(cost<=M) cout<<"NOT BROKE\n";
    else cout<<"BROKE\n";

    return 0;
}