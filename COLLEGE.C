//college student list with struct program
#include<stdio.h>
#include<conio.h>
struct clg
{
	char name[20];
	int bca,bcom,bba;
};
void main()
{
struct clg c,cc,ccc;
clrscr();
printf("sutex college");
printf("\nenter bca ,b.com and b.ba student ");
scanf("%d%d%d",&c.bca,&c.bcom,&c.bba);
printf("\nambaba college");
printf("\nenter bca ,b.com and b.ba student ");
scanf("%d%d%d",&cc.bca,&cc.bcom,&cc.bba);
printf("\nsv patel");
printf("\nenter bca ,b.com and b.ba student ");
scanf("%d%d%d",&ccc.bca,&ccc.bcom,&ccc.bba);

printf("sutex college");
printf("\nenter bca=%d\nb.com=%d\nb.ba=%d\n",c.bca,c.bcom,c.bba);

printf("\nambaba college");
printf("\nenter bca=%d\nb.com=%d\nb.ba=%d\n",cc.bca,cc.bcom,cc.bba);

printf("\nsv patel");
printf("\nenter bca=%d\nb.com=%d\nb.ba=%d\n",ccc.bca,ccc.bcom,ccc.bba);
getch();
}