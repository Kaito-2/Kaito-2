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
    }

    //Kiểm tra số chẵn
    int laSoChan = true;   
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0)
        {
            laSoChan = false;
        }
    }
    //Kiểm tra số thuận nghịch
    if(laSoChan == true)
    {
        int soThuanNghich = true;
        for(int i = 0; i < n; i++)
        {
            if(a[i] != a[n-i-1])
            {
                soThuanNghich = false;
            }
        }
        if(soThuanNghich == true)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }
}

int main()
{   
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int number;
        scanf("%d",&number);
        kiemTraSoDep(number);
    }
}
 



