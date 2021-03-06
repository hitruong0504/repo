#include <stdio.h>

int main()
{
    int m = 80;
    float h, sotien;

    printf("\nNhap vao so gio lam viec: ");
    scanf("%f", &h);

    if (h <= 40)
    {
        sotien = h * m;
        printf("So tien luong la: %.1f", sotien);
    }
    else if (h > 41 && h <= 45)
    {
        sotien = 40 * m + (h - 40) * m * 1.8;
        printf("So tien luong la: %.1f");
    }
    else if (h > 46 && h <= 50)
    {
        sotien = 40 * m + 5 * m * 1.8 + (h - 45) * m * 2.5;
        printf("So tien luong la: %.1f", sotien);
    }
    else
    {
        sotien = 40 * m + 5 * m * 1.8 + 5 * m * 2.5 + (h - 50) * m * 2.6;
        printf("So tien luong la: %.1f", sotien);
    }
}