#include<stdio.h>
#include<string.h>
#define n 100
char str[n];

void reverse(int start , int end)
    {
    char c;
    while(start<=end)
        {
        c=str[end];
        str[end]=str[start];
        str[start]=c;
        start++;
        end--;
        }
    }

int main()
{
scanf("%[^\n]s",str);
//printf("%s",str);
int len = strlen(str);
int i=0;
int start,end;
start=end=0;

while(str[i])
{
//printf("i==%c start==%c \n",str[i],str[start]);
while(str[end]!=' '&&str[end]!='\0')
{
  //  printf("end %c",str[end]);
 end++;   
}
//printf("while ended\n");
reverse(start,end-1);
end++;
start = i = end;

//printf("i==%d\n",i);
}

printf("%s",str);

return 0;
}
