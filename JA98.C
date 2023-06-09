//2d arraty revars
#include<stdio.h>
#include<conio.h>
void main(){
int j,c,r,i,a[10][10];
clrscr();
	printf("enter your row and colum ");
		scanf("%d%d",&r,&c);
printf("enter your %d data ",r*c);
for(i=0;i<r;i++){
	for(j=0;j<c;j++){
		scanf("%d",&a[i][j]);}}
printf("your data\n");
for(i=r-1;i>=0;i--){
	for(j=c-1;j>=0;j--){
		printf("%d ",a[i][j]);}
	printf("\n");}
getch();}