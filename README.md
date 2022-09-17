# AllSquaredPairs

Program which finds all <img src="./img/a.png" height="12px" alt="a" /> and <img src="./img/b.png" height="16px" alt="b" />, such that <img src="./img/01.png" height="24px" alt="a^2 + b^2 = num" /> for given number <img src="./img/num.png" height="14px" alt="num" /> and <img src="./img/02.png" height="26px" alt="0 <= a < b <= floor(sqrt(num))" /> to prevent redundant iterations.

Algorithm has time complexity <img src="./img/bigo.png" height="28px" alt="O(n^2)" /> since unequality statement above implies.

## Example output

Output shown below has <img src="./img/numeq.png" height="16px" alt="num = 100000000" />

```text
[ [ 0, 10000 ], [ 2800, 9600 ], [ 3520, 9360 ], [ 5376, 8432 ], [ 6000, 8000 ] ]
```

## Note

You need Visual Studio 2022 to run this project.
