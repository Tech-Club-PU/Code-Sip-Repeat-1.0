# A. Take the Input

Easy: 30

## C

```c
#include <stdio.h>
#include <stdio.h>

int main() {
    // Input for integer
    int num;
    scanf("%d", &num);

    // Input for string (without spaces)
    char str_array[100];
    scanf("%s", str_array);

    // Input for string (possibly with spaces)
    char str_gets[100];
    scanf(" %[^\n]", str_gets);

    // Input for array size and elements
    int arr_size;
    scanf("%d", &arr_size);
    int arr[arr_size];
    for (int i = 0; i < arr_size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input for 2D array size and elements
    int rows;
    scanf("%d", &rows);
    int arr2D[rows][2];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &arr2D[i][j]);
        }
    }

    // Print all the data
    printf("%d\n", num);
    printf("%s\n", str_array);
    printf("%s\n", str_gets);
    for (int i = 0; i < arr_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", arr2D[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

## C++

```cpp
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
```

## Python

```python
# Input for integer
num = int(input())

# Input for string (without spaces)
str_array = input()

# Input for string (possibly with spaces)
str_gets = input()

# Input for array size and elements
arr_size = int(input())
arr = list(map(int, input().split()))

# Input for 2D array size and elements
rows = int(input())
arr2D = []
for i in range(rows):
    row_input = list(map(int, input().split()))
    arr2D.append(row_input)

# Print all the data
print(num)
print(str_array)
print(str_gets)
print(*arr)
for row in arr2D:
    print(*row)
```

## Javascript

```jsx
const readline = require('readline').createInterface({
  input: process.stdin,
  output: process.stdout
});

const inputLines = [];

readline.on('line', (line) => {
  inputLines.push(line);

  // Close the interface when we've received 7 lines + the rows of the 2D array
  if (inputLines.length === 7 + parseInt(inputLines[5])) {
    readline.close();
  }
});

readline.on('close', () => {
  const num = parseInt(inputLines[0]);
  const str_array = inputLines[1];
  const str_gets = inputLines[2];
  const arr_size = parseInt(inputLines[3]);
  const arr = inputLines[4].split(' ').map(Number);
  const rows = parseInt(inputLines[5]);
  const arr2D = [];

  for (let i = 0; i < rows; i++) {
    arr2D.push(inputLines[6 + i].split(' ').map(Number));
  }

  // Print all the data
  console.log(num);
  console.log(str_array);
  console.log(str_gets);
  console.log(...arr);
  for (let i = 0; i < rows; i++) {
    console.log(arr2D[i].join(' '));
  }
});
```

# Rust

```rust
use std::io::{self, Read};

fn main() {
    // Read entire input
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();
    let mut it = input.split_whitespace();

    // Input for integer
    let num: i32 = it.next().unwrap().parse().unwrap();

    // Input for string (without spaces)
    let str_array: String = it.next().unwrap().to_string();

    // Input for string (possibly with spaces)
    // Since split_whitespace loses spaces, this must be taken as a full line.
    // So we re-parse using lines.
    let mut lines = input.lines();
    lines.next(); // num
    lines.next(); // str_array
    let str_gets = lines.next().unwrap().to_string();

    // Input for array size and elements
    let arr_size: usize = it.next().unwrap().parse().unwrap();
    let mut arr = Vec::with_capacity(arr_size);
    for _ in 0..arr_size {
        arr.push(it.next().unwrap().parse::<i32>().unwrap());
    }

    // Input for 2D array size and elements
    let rows: usize = it.next().unwrap().parse().unwrap();
    let mut arr2d: Vec<Vec<i32>> = Vec::with_capacity(rows);
    for _ in 0..rows {
        let mut row = Vec::new();
        // assumes row length is known from input line
        for _ in 0..arr_size {
            if let Some(v) = it.next() {
                row.push(v.parse().unwrap());
            }
        }
        arr2d.push(row);
    }

    // Print all the data
    println!("{}", num);
    println!("{}", str_array);
    println!("{}", str_gets);

    for x in &arr {
        print!("{} ", x);
    }
    println!();

    for row in arr2d {
        for x in row {
            print!("{} ", x);
        }
        println!();
    }
}
```

**Input Format**

- An integer (num) on a single line.
- A string (str_array) without spaces on a single line.
- Another string (str_gets) possibly with spaces, entered on a single line after str_array.

An integer (arr_size) on a single line.

- Space-separated integers representing the elements of an array (arr) on a single line.
- An integer (rows) on a single line.
- Each subsequent row contains two space-separated integers representing elements of a 2D array (arr2D)

**Constraints**

""

**Output Format**

- Print each piece of data on a separate line.
- For the integer and string inputs, print the label followed by the value.
- For the array, print space-separated elements of the array.
- For the 2D array, print each row on a separate line, with elements separated by space.

**Sample Input 0**

```jsx
10
Hello
World
5
1 2 3 4 5
3
1 2
3 4
5 6
```

**Sample Output 0**

```jsx
10
Hello
World
1 2 3 4 5
1 2
3 4
5 6
```

**C++**

```
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
```