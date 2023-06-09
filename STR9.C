//string using for find string len
//logic and string two type program
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20];
int l;
clrscr();
printf("enter your data:")
gets(a);
l=strlen(a);
printf("your data size ==>%d",l);
/* with logic
int i,count=0
for(i=0;i<l;i++)
{
	count++;
}
printf("%d",count);
*/
