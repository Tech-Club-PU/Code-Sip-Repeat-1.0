#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // Input for integer
    int num;
    cin >> num;

    // Input for string (without spaces)
    string str_array;
    cin >> str_array;

    // Input for string (possibly with spaces)
    cin.ignore(); // Ignore the newline character left in the input buffer
    string str_gets;
    getline(cin, str_gets);

    // Input for array size and elements
    int arr_size;
    cin >> arr_size;
    vector<int> arr(arr_size);
    for (int i = 0; i < arr_size; ++i) {
        cin >> arr[i];
    }

    // Input for 2D array size and elements
    int rows;
    cin >> rows;
    vector<vector<int>> arr2D(rows, vector<int>(2));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin >> arr2D[i][j];
        }
    }

    // Print all the data
    cout << num << endl;
    cout << str_array << endl;
    cout << str_gets << endl;
    for (int i = 0; i < arr_size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << arr2D[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}