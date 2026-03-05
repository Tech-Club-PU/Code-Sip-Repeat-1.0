#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin>>T;

    while (T--) {
        int N;
        cin>>N;
        vector<long long> arr(N);

        for (int i=0; i<N; i++) {
            cin>>arr[i];
        }

        long long X;
        cin>>X;
        int answer=-1;

        for (int i=0; i<N; i++) {
            if (arr[i]==X) {
                answer=i;
                break;
            }
        }

        cout <<answer<< endl;
    }

    return 0;
}