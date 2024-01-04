#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001];
    int count[26] = {0};
    scanf("%s", str);
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            count[str[i] - 'a']++;
        }
    }
    for(int i=0; i<26; i++)
    {
        printf("%c - %d\n", 'a'+i, count[i]);
    }

    return 0;
}
