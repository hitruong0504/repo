#include <stdio.h>
#include <string.h>
#define A 1000

void ViTriXuatHien(char a[], char n, int ViTri[])
{
    int j = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == n)
        {
            ViTri[j] = i;
            j++;
        }
        
    }
}

int SoPT(int ViTri[])
{
    int count = 0;
    while (ViTri[count] != 0)
    {
        count++;
    }
    return count;
}

int main()
{
    char a[A], n;
    int ViTri[A];
    printf("\n-----Nhap vao chuoi bat ki-----\n");
    fgets(a, A, stdin);

    printf("\n-----Nhap vao ki tu tim kiem-----\n");
    scanf("%c", &n);

    printf("\n-----Nhung vi tri xuat hien-----\n");

    ViTriXuatHien(a, n, ViTri);


    for (int i = 0; i < SoPT(ViTri); i++)
    {
        printf("%d\t", ViTri[i] + 1);
    }
    
}