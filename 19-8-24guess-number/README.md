## 猜数字问题

1 问题描述： 猜1-100之内的数字，若是你输入的数小于此”数字“，则提示：输入的数字太小；如果大于，提示数字大了；输入的数字等于，提示：恭喜猜对，程序退出

2 解题思路：

- 1 随机数的产生

```
使用的库：<stdlib.h> <time.h>

C语言中用rand（）函数产生20-90的随机整数

20-90共有71个数字，所以是rand()%71+20 ；

用rand()生成-20-20的随机数

-20-20共有41个数字，所以是rand()%41-20;
```

- 2 循环语句：当输入不准确，还需要继续输入