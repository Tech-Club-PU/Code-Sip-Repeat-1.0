# D. Dream Treasure

Easy: 50

## Problem: *The Dream Treasure*

Sneha’s grandfather was known for hiding valuable treasures using clever puzzles.

Before he passed away, he hid one final treasure but left behind a magical way to find it.

One night, Sneha drinks a mysterious liquid and sees her grandfather in a dream.

He tells her that the treasure’s **secret combination number** is hidden inside a **sorted line of non duplicate numbers in increasing order**.

However, Sneha may see this dream **multiple times**, and each time the array and the secret number may be different.

To unlock the treasure in each dream, Sneha must quickly find **the position where the secret combination appears** in the line.

Help Sneha uncover the treasure by solving all her dreams.

---

## Input

- The first number Sneha sees in her dream is **T**, the number of dreams.
- For each dream:
    - She first sees a number **N**, representing how many numbers are in the line.
    - Next, she sees **N numbers arranged in increasing order**, representing the magical line.
    - Finally, her grandfather whispers a number **X**, the secret combination she must find.

---

## Output

For each dream:

- If the secret combination **exists** in the line, print the **position (0-based index)** where it appears.
- If the secret combination **does not exist**, print -1.

Print the answer for each dream on a new line.

---

## Sample Input

```
2
7
2 4 6 8 10 12 14
10
5
1 3 5 7 9
4

```

## Sample Output

```
4
-1
```

---

## Constraints

```jsx
1 ≤ T ≤ 10
1 ≤ N ≤ 100000
Array elements are sorted in increasing order
-10^9 ≤ numbers[i], X ≤ 10^9
```