#include <stdio.h>

int main()
{
    float d, sotien;

    printf("\nNhap vao so km: ");
    scanf("%f", &d);

    if (d <= 1)
    {
        sotien = d * 18000;
        printf("\nPhi dich vu la: %.1f VND", sotien);
    }
    else if (d > 1 && d <= 10)
    {
        sotien = 18000 + (d - 1) * 8000;
        printf("\nPhi dich vu la: %.1f VND", sotien);
    }
    else if (d > 10 && d <= 30)
    {
        sotien = 18000 + 9 * 8000 + (d - 10) * 6000;
        printf("\nPhi dich vu la: %.1f VND", sotien);
    }else
    {
        sotien = 18000 + 9 * 8000 + 20 * 6000 + (d - 30) * 4000;
        printf("\nPhi dich vu la: %.1f VND", sotien);
    }
}