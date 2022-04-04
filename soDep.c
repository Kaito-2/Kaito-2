#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0

void kiemTraSoDep(int number)
{
    //Tách số thành từng số 1 rồi đẩy vào mảng 1 chiều
    int a[100];
    int n = 0;
    while(number != 0)
    {
        a[n] = number%10;
        number/=10;
        n++;

    //Kiểm tra số chẵn
    int laSoChan = true;   
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0)
        {
            laSoChan = false;
        }
