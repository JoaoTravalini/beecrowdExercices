#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 10000, count;
    char string[10001];

    while (scanf("%s", string) != EOF)
    {
        count = 0;
        int tam;
        tam = strlen(string);


        for (int i = 0; i < tam ; i++)
        {
            if (count < 0)
            {
                break;
            }
            if (string[i] == ')')
            {
                count--;
            }
            else if (string[i] == '(')
            {
                count++;
            }
        }

        if(count == 0){
            printf("correct\n");
        }
        else{
            printf("incorrect\n");
        }
    }

    return 0;
}