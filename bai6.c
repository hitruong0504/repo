#include <stdio.h>
#include <string.h>
#define A 100

int ViTriXH(char a[], char n)
{
    int temp;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == n)
        {
            temp = i;
            break;
        }
    }
    return temp + 1;
}
int main()
{
    char a[A], n;
    printf("\n-----Nhap vao chuoi bat ki-----\n");
    fgets(a, A, stdin);

    printf("\n-----Nhap vao ki tu tim kiem-----\n");
    scanf("%c", &n);

    printf("\n-----Vi tri dau tien xuat hien-----\n");
    printf("%d", ViTriXH(a, n));
}