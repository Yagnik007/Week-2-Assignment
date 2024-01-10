#include <stdio.h>


int main()
{
    int n;
    printf("Enter the size of ths strings: ");
    scanf("%d", &n);
    char a[n];
    char b[n];
    printf("Enter the first string: ");
    scanf("%s", a);
    printf("Enter the second string: ");
    scanf("%s", b);
    int cnt[26];
    for(int i=0; i<n; i++)
    {
        cnt[a[i]-'0']++;
        cnt[b[i]-'0']--;
    }
    int x = 0;
    for(int i=0; i<26; i++)
    {
        if(cnt[i]!=0)
        {
            x = 1;
            break;
        }
    }
    if(!x) printf("These strings are anagrams");
    else printf("These strings are not anagrams");
    return 0;
}