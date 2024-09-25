//ternaryoperator 

//greater of the two numbers

int main()

{

int a,b;
printf ("enter the two numbers"); 
scanf("%d %d", &a, &b);

a>b?printf("%d is greater", a): a<b?printf("%d is greater", b):printf("Both numbers are equal");

return 0;
}