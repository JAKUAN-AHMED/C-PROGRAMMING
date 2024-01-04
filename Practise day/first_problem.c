#include <stdio.h>
#include <string.h>

int main() {
    char arr[101];
    scanf("%s", arr); // removed unnecessary & before arr
    
    char arr1[101];
    strcpy(arr1,arr);
    strrev(arr);
    if(strcmp(arr1,arr)==0)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
    return 0;
}
