# 001_numeric_limits
## 動作手順
```bash
./numeric_limits
```

## 表示結果
```bash
[int] sizeof: 4, min: -2147483648, max: 2147483647
[float] sizeof: 4, min: 1.17549e-38, max: 3.40282e+38
[double] sizeof: 8, min: 2.22507e-308, max: 1.79769e+308
```

## 解説
```bash
std::numeric_limits<型>::min()
std::numeric_limits<型>::max()
```
`min()`は指定した型の最小値（浮動小数点の場合限りなく0に近い数）、`max()`は指定した型の最大値が入る。
