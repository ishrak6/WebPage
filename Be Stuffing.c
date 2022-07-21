#include <stdio.h>
#include <string.h>
int main()
{
    int i, p, c = 0, k, n;
    char data[100];
    printf("Enter bits as 0 & 1=");
    scanf("%s", data);
    n = strlen(data);
    printf("\n\n data after bit stuffing=");
    for (i = 0; i < n; i++)
    {
        if (data[i] == '1')
        {
            c++;
            if (c == 5)
            {
                p = i + 1;
                for (i = n; i > p; i--)
                {
                    data[i] = data[i - 1];
                    data[i - 1] = '0';
                    n++;
                    c = 0;
                    n = n - 1;
                }
            }
        }
        else
        {
            c = 0;
        }
    }
    printf("01111110 %s 01111110", data);

    return 0;
}
