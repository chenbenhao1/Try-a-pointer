#include<stdio.h>
#include<string.h>
void huhuan_1(int a, int b);

void huhuan_3(int * p, int * q)//启示是 指针操作直接作用于内存 不受函数的栈结构影响
{
    int  t;//p是int *，*p是int

    t = *p;
    *p = *q;
    *q = t;

    return 0;
}

int main(void)
{
    int a = 3;
    int b = 5;

    huhuan_3(&a, &b);//huhuan_2(*p,*q); huhuan_2(a, b)； 是错误的

    printf("a = %d, b = %d\n", a, b);

    return 0;
}
/*
void huhuan_1(int a, int b)//不能交换
{
    int t;

    t = a;
    a = b;
    b = t;

    return 0;
}*/

/*
void huhuan_2(int * p, int * q)//仍然不能实现
{
    int * t;//如果要互换p和q的值，t必须是int * ,不能是int

    t = p;
    p = q;
    q = t;

    return 0;
}*/