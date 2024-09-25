//To input string from user and to check whether it is palindrom or not
int main()
{
char a[100];
int i,j,flag=1;
printf("enter the string ");
scanf("%s", &a);
for(i=0;a[i]!='\0';i++);
i--;
j=0;
while(j<i)
{ if(a[j]!=a[i])
{printf("string is not palindrome");
flag=0;
break;
}
j++;
i--;
}
if(flag==1)
printf("string is palindrom");
}