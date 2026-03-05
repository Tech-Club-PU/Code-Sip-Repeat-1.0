#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;

    long long result = 0;
    long long num;

    for (int i=0; i<N; i++) {
        cin>>num;
        result^= num;
    }

    cout<<result<< "\n";
    return 0;
}