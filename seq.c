#include <stdio.h>
#include<stdlib.h>
void main()
{
int f[50], i, st, len, j, c, k, count = 0;

for(i=0;i<50;i++)
f[i]=0;
printf("Files Allocated are : \n");
x: count=0;
printf("Enter starting block and length of files:");
scanf("%d%d", &st,&len);
for(k=st;k<(st+len);k++)
if(f[k]==0)
count++;
if(len==count)
{
for(j=st;j<(st+len);j++)
if(f[j]==0)
{
f[j]=1;
printf("%d\t%d\n",j,f[j]);
}
if(j!=(st+len-1))
printf(" The file is allocated to disk\n");
}
else
printf("The file is not allocated \n");
printf("Do you want to enter more file(Yes - 1/No - 0)");
scanf("%d", &c);
if(c==1)
goto x;

}
/*OUTPUT
Files Allocated are : 
Enter starting block and length of files:1
5
1	1
2	1
3	1
4	1
5	1
 The file is allocated to disk
Do you want to enter more file(Yes - 1/No - 0)1
Enter starting block and length of files:5
2
The file is not allocated 
Do you want to enter more file(Yes - 1/No - 0)1
Enter starting block and length of files:7
4
7	1
8	1
9	1
10	1
 The file is allocated to disk
Do you want to enter more file(Yes - 1/No - 0)

*/
