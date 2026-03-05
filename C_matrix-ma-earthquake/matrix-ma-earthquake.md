Easy: 30

You are given a square matrix of size **N × N**.

Originally, the matrix was perfectly arranged.

But after an earthquake, the matrix got disturbed.

Luckily, scientists discovered that the earthquake always follows a **fixed pattern**:

> The entire matrix is rotated **90 degrees clockwise**.
> 

Your task is to restore the matrix to its original earthquake state — meaning you must apply the same earthquake pattern.

### **Hint: How to Rotate**

1. **Transpose the Matrix**:
    - Swap the rows and columns. For a matrix *M*, the element at *M*[*i*][*j*] becomes *M*[*j*][*i*].
2. **Reverse Each Row**:
    - After transposing, reverse the elements in each row. For example, the first row stays the same but the last element becomes the first, and so on.

---

## Input Format

```
N
matrix elements (N rows each containing N integers)
```

---

## Output Format

Print the rotated matrix.

---

## Constraints

```
1 ≤ N ≤ 100
-10^9 ≤ matrix[i][j] ≤ 10^9
```

---

## Sample Input

```
3
1 2 3
4 5 6
7 8 9
```

---

## Sample Output

```
7 4 1
8 5 2
9 6 3
```