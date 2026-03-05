At Pokhara University, students created their own version of Conway’s Game of Life and named it **PU Game of Life**.

You are given a 2D grid representing cells in a laboratory.

Each cell can be:

- `1` → Alive
- `0` → Dead

The grid evolves according to PU rules.

The boundary is simple:

Cells outside the grid are considered permanently dead.

You must simulate the next state of the grid.

---

For each cell, count its 8 neighbors (horizontal, vertical, diagonal).

Let `alive_neighbors` be the count.

### Rules:

1. If a cell is alive (`1`):
    - It survives if it has **2 or 3** alive neighbors
    - Otherwise, it becomes dead (`0`)
2. If a cell is dead (`0`):
    - It becomes alive if it has **exactly 3** alive neighbors
    - Otherwise, it stays dead

These rules are applied simultaneously to all cells.

---

## Input Format

- First line: two integers `N M` (rows and columns)
- Next `N` lines: `M` integers (0 or 1)

---

## Output Format

- Print the updated grid after **one generation**
- Maintain the same format

---

## Sample Input

```
3 3
0 1 0
0 1 0
0 1 0
```

## Sample Output

```
0 0 0
1 1 1
0 0 0
```