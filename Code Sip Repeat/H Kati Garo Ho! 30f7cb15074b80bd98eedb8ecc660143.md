# H. Kati Garo Ho!

Hard: 100

Time limit: *1000 ms* Memory limit: *256 MB*

In a futuristic telecommunication network, servers are connected by bidirectional links that allow the transmission of digital messages.

However, not all links are equally reliable: some introduce a risk of message corruption, and all require a certain transmission time.

A message must be sent from server 1 to server N.

To evaluate the quality of a route, the company defines a pair of values:

- **Maximum risk** (*maxR*): the highest risk value among all links used in the route.
    
    maxR
    
- **Total time** (*totalT*): the sum of the transmission times of all links in the route.
    
    totalT
    

The company prioritizes **safety over speed**. That is, among all possible routes, it prefers the one that first minimizes maxR; and, in case of a tie, the one with the smallest totalT.

Your task is to determine the quality of the best possible transmission from server 1 to server N.

If no such route exists, you must report it.

# **Standard input**

The first line contains a single integer T, the number of test cases.

The description of the test cases follows.

For each test case, the first line contains two integers N and M, the number of servers and the number of links, respectively.

Each of the next M lines contains four integers ui,vi,Wi,Ri, describing a bidirectional link:

- ui,vi: the servers connected by this link.
- W: the transmission time in milliseconds.
- R: the corruption risk of this link.

# **Standard output**

For each test case, print the answer on a separate line.

If a path exists, print two integers:

maxR totalT

representing the quality of the best route from server 1 to server *N*.

If no path exists, print `-1`.

# **Constraints and notes**

![image.png](H%20Kati%20Garo%20Ho!/image.png)

---

input:

```
3
2 9
2 1 6 3
2 1 25 29
2 1 16 21
1 2 29 1
2 1 7 95
2 1 16 3
1 2 90 56
2 1 86 12
1 2 93 83
8 1
1 8 45 68
6 7
2 4 55 26
3 2 45 71
1 6 86 80
4 3 55 96
1 3 55 43
4 3 10 57
6 3 32 79
```

output

```
1 29
68 45
79 87
```

input 2

```
2
4 5
1 2 10 5
2 4 10 5
1 3 5 10
3 4 5 10
1 4 30 2
5 6
1 2 5 10
2 5 5 10
1 3 2 15
3 4 2 15
4 5 2 15
1 5 100 8
```

output2

```
2 30
8 100
```

input3

```
4
3 2
1 2 10 5
2 3 10 5
3 1
1 2 5 5
4 4
1 2 10 100
2 4 10 100
1 3 50 10
3 4 50 10
5 6
1 2 10 20
1 2 5 30
2 3 10 20
1 4 5 50
4 5 5 50
3 5 10 20
```

output3

```
5 20
-1
10 100
20 30
```

input4

```
2
6 7
1 2 10 100
2 6 10 100
1 3 5 50
3 4 5 50
4 5 5 50
5 6 5 50
1 6 50 150
5 7
1 2 10 30
2 5 10 30
1 3 5 30
3 4 5 30
4 5 15 30
1 5 100 10
```

output4

```
50 20
10 100
```