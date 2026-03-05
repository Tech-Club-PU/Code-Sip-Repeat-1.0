Grish takes his best friend to the most famous coffee house in Tanahun.

The coffee house offers the following menu:

| Coffee | 1 Cup | 2 Cups |
| --- | --- | --- |
| Cappuccino | 200 | 390 |
| Americano | 180 | 350 |
| Macchiato | 220 | 430 |

Unfortunately, Grish forgot his wallet at home. Luckily, he finds some money in his jacket pocket.

He has exactly **M rupees**.

His friend decides to order exactly **N cups of coffee**.

---

## Ordering Rules

- You may choose **any combination** of coffee types.
- You may use **1-cup or 2-cup offers**.
- **At least one Macchiato must be ordered.**
- The **total number of cups must be exactly N.**
- The **total cost must be minimized.**

After calculating the minimum possible bill:

- If Grish can afford it (minimum cost ≤ M), print `NOT BROKE`
- Otherwise, print `BROKE`

---

## Input Format

A single line containing two integers:

```
N M
```

- `N` — total number of cups ordered
- `M` — amount of money Grish has

---

## Output Format

Print a single line:

- `NOT BROKE` if Grish can afford the minimum bill
- `BROKE` otherwise

---

## Constraints

```
1 ≤ N ≤ 10^5
0 ≤ M ≤ 10^9
```

All coffee prices are fixed as given in the table.

---

## Example

### Input

```
1 250
```

### Output

```
NOT BROKE
```

### Explanation

At least one Macchiato must be ordered.

Minimum cost for 1 cup = 220

Since 220 ≤ 250, Grish is NOT BROKE.