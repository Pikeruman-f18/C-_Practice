#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <ctime>
#include <cstdlib>

int main()
{
    //乱数の種を生成する
    srand(time(NULL));

    //0~9の乱数を生成する
    int lucky = rand() % 10; 

    printf("今日のラッキーナンバーは【 %d 】です！\n", lucky);

}