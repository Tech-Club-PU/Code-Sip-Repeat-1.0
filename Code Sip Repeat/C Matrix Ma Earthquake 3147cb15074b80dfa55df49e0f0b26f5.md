# C. Matrix Ma Earthquake

```cpp
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long matrix[100][100];

    // Input
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cin>>matrix[i][j];
        }
    }

    // Directly print rotated matrix
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cout << matrix[N-j-1][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
```