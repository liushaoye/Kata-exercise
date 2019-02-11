//
// Created by 刘洋 on 2019-02-07.
//

#ifndef CPROGRAMMER_PRINT_H
#define CPROGRAMMER_PRINT_H

#endif //CPROGRAMMER_PRINT_H
#include "../dao/interfacedao.h"


void timeDifference(){

    int hour1,minute1;
    int hour2,minute2;

    printf("请输入小时和分钟数，"
           "如输入\"10:40\"表示10小时40分钟：\n");
    printf("第一个时间是:");
    scanf("%d:%d", &hour1, &minute1);
    printf("第二个时间是:");
    scanf("%d:%d", &hour2, &minute2);

    int ih = hour2-hour1;
    int im = minute2-minute1;

    if (im<0){
        im=60+im;
        ih--;
    }
    printf("时间差是%d小时%d分.\n",ih,im);
}

void thrid(){

    for (int i = 0; i < 3; ++i) {
        printf("I'm gonna WIN!\n");
    }
}

void average(){

    int a,b;
    printf("请输入两个整数：\n");
    scanf("%d %d", &a, &b);

    double c = (a+b)/2.0;

    printf("%d和%d的平均值=%f\n", a, b, c);

}

void foot(){
    printf("请分别输入身高的英尺和英寸，"
           "如输入\"5 7\"表示5英尺7英寸：");

    // 防止丢失精度，所以采用这种方式
    double foot;
    double inch;

    scanf("%lf %lf", &foot, &inch);

    printf("身高是%f米。\n",
           ((foot + inch / 12) * 0.3048));

}


void foot2(){

    int height=0;
    int foot;
    int inch;

    printf("请分别输入身高是:\n");
    scanf("%d厘米\n", &height);

    foot = height/100.0/0.3048;
    inch = (height/100.0/0.3048-foot)*12;

    printf("表示%d英尺%d英寸：",foot,inch);
}

void  change(){

    // const常量的设置标识
    const int AMOUNT = 100;
    int price = 0;
    printf("共计金额（元）：\n",AMOUNT);
    printf("请输入消费金额（元）：");
    scanf("%d", &price);

    int change = AMOUNT - price;

    printf("找您%d元。\n", change);

}

void printhello(){
    printf("Hello,World\n");
}

void printtwoint()
{
    int a;
    int b;

    printf("请输入两个整数：");
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);
}