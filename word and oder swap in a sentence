#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define n 100000
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
void copy(char *str1,int start,int end,int lenght)
{
  int s , e;
  s = lenght-1-end;
  e = lenght-1;
  while(start<=end)
  {
    str1[s]=str[start];
    s++;
    start++;
  }
  str1[s]=' ';
  
}

int main()
{

scanf("%[^\n]s",str);
//printf("%s",str);
int len = strlen(str);
char str1[len+1];  
int lenght=len;  
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
  
start=end=0;
i=0;  
while(len>0)
{
  //printf("entered\n");
while(str[end]!=' ' && str[end]!='\0')
{
 // printf("end\n");
  end++;
  
  len--;
}
copy(str1,start,end-1,lenght);  
//printf("%s\n",str1);
  
  len--;  
end++;  
  
start=end;  

}
  
str1[lenght] =  '\0'; 
printf("%s",str1);

return 0;
}
