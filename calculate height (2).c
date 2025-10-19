#include<stdio.h>
#include <stdlib.h>
#include"calculate.h"
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