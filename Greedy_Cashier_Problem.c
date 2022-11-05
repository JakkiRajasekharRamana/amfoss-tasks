//Greedy Algorithm/cashier

#include <stdio.h>

int main()
{
    float a;
    int quaters,dimes,nickels,pennies;
    
    printf("Enter The Amount Of Money The Cashier Owns To The Customer(in dollers):");
    scanf("%f",&a);
    
    int cents = round(a * 100);
    
    if(cents==0)
    printf("The Cashier Owns Nothing to the Customer");
    
    else if(cents<0)
    printf("Please Enter A Positive Value");
    
    else
    {
       quaters=cents/25;
       cents=cents%25;
       dimes=cents/10;
       cents=cents%10;
       nickels=cents/5;
       cents=cents%5;
       pennies=cents;
    }
    printf("Cents=%d\n",cents);
    printf("Pennies=%d\n",pennies);
    printf("nickels=%d\n",nickels);
    printf("dimes=%d\n",dimes);
    printf("quaters=%d\n",quaters);
}
