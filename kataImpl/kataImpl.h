//
// Created by 刘洋 on 2019-02-12.
//

#ifndef CPROGRAMMER_KATAIMPL_H
#define CPROGRAMMER_KATAIMPL_H

#endif //CPROGRAMMER_KATAIMPL_H
#include "../kata/katadao.h"

// 7-1 厘米换算英尺英寸
void convertedFeetToInches(){

    int height=0;
    int foot;
    int inch;

    printf("请分别输入身高是(正整数):\n");
    scanf("%d厘米\n", &height);

    foot = height/100.0/0.3048;
    inch = (height/100.0/0.3048-foot)*12;

    printf("表示%d英尺%d英寸：",foot,inch);
}


