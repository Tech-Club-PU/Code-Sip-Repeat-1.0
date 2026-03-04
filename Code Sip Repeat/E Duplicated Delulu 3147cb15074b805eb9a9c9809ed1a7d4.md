# E. Duplicated Delulu

```cpp
#include <iostream>
#include <map>
using namespace std;

int main() {
    int N;
    cin>>N;

    map<long long, int> freq;
    long long num;

    for (int i=0; i<N; i++) {
        cin>>num;
        freq[num]++;
    }

    for (auto it:freq) {
        if (it.second==1) {
            cout<<it.first<<"\n";
            break;
        }
    }

    return 0;
}
```

```cpp
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
}12
```