#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
int temp=*a;
*a=*a+*b;
*b=abs(temp-*b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
//
//    scanf("%d %d", &a, &b);
//    update(pa, pb);
//    printf("%d\n%d", a, b);
// char ch;
//string s;
// string sen;
//scanf("%c", &ch);
//scanf("%s", &s);
//scanf("%[^\n]%*c", &sen);
//    //printf("C\nLanguage\nWelcome To C!!");
//printf("%c\n%s\n%s",ch,s,sen);
//    return 0;

char ch;            //use this code
char s[100];
char s1[122];
scanf("%c%*c",&ch);
scanf("%s%*c",&s);
scanf("%[^\n]",&s1);
printf("%c\n",ch);
printf("%s\n",s);
printf("%s",s1);
return 0;}
