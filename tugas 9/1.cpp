#include <stdio.h>

#define MAX 100

int CharToInt(const char *);

int main()
{
    char str[MAX];

    printf(" masukan beberapa angka (tanpa spasi) : ");
    gets(str);
//  fgets(str, sizeof(str), stdin);
//  scanf("%s", str);

    printf(" angka yang dimasukkan adalah : %d\n", CharToInt(str));

    return 0;
}

int CharToInt(const char *s)
{
    int i, result, temp;

    result = 0;
    i = 0;

    while(*(s+i) != '\0')
    {
        temp = *(s+i) & 15;
        result = (temp + result) * 10;
        i++;
    }

    return result / 10;
}