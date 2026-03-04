# D. Dream Treasure

```cpp
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
        
        for(int i=0; i<N; i++) {
            cin>>arr[i];
        }

        long long X;
        cin>>X;

        int left=0, right= N-1;
        int answer=-1;

        while (left<=right) {
            int mid=left+(right-left)/2;

            if (arr[mid]==X) {
                answer=mid;
                break;
            }
            else if (arr[mid]<X) {
                left=mid+1;
            }
            else {
                right=mid-1;
            }
        }

        cout<<answer<<"\n";
    }

    return 0;
}
```

```cpp
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
```