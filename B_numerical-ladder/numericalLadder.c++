#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    int current=1;

    for (int i=1; i<=N; i++) {
        for (int j=1; j<=i; j++) {
            cout<<current<<" ";
            current++;
        }
        cout << endl;
    }

    return 0;
}