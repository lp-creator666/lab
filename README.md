<h1 style="text-align: center;">gcc编译练习</h1>
<div style="text-align: right;"><small>2511王立鹏</small></div>  

***
**一，源文件**  

1.[calculate.h](D:\SE\calculate.h)
```
#include <stdio.h>
int add()
{
    printf("%f",10.0/3*3);
}
```
2.[calculate.c]
```
#include<stdio.h>
#include"calculate.h"
#include <stdlib.h>
// 计算找零
int main()
{
  int amount = 100;
  int price = 0;

  printf("请输入金额");
  scanf("%d",&price);

  printf("请输入票面");
  scanf("%d",&amount);

  int change = amount-price;

  printf("找您%d元\n", change);
  system("pause");

  return 0;
}
```
<img width="2542" height="514" alt="屏幕截图 2025-10-19 132903" src="https://github.com/user-attachments/assets/682e5b2a-c920-478d-adc0-c7fd785ee161" />

---
## 库，环境变量
***
**一，静态库与动态库**
1. 静态库：在编译时将库文件的代码直接复制到可执行文件中，程序运行时不需要依赖库文件。
>>特点  ：**编译时**；完整复制；更新需要重新编译
2. 动态库：在编译时只引用库文件的符号表，程序运行时需要依赖库文件。
>>特点：**运行时**；仅引用；更新无需重新编译  

**二，环境变量**
环境变量就像系统级的全局变量，所有程序都能读取，用来影响他们的运行方式
>>特点：影响全局；不重新编译改变程序行为

***<u>类比头文件</u>***
- 头文件就像机器的说明书，告诉编译器有什么，并且参与编译  
- 环境变量就像机器中的材料，告诉程序如何运行，作为配置信息
