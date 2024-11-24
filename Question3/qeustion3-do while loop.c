#include <stdio.h>

int main ()
{
    int credit_limit, price, quantity, total_price, n, counter, quantity2;
    counter=1;
    printf("enter number of clients :\n");
    scanf("%d", &n);

    while(counter<=n)
    {
        printf("enter your credit limit :\n");
        scanf("%d", &credit_limit);

        printf("enter price of the item :\n");
        scanf("%d", &price);
        
        do
        {
                    printf("enter the quantity :\n");
                    scanf("%d" ,&quantity);

                    total_price=price*quantity;
                    if(total_price>credit_limit)
                    {
                        printf("sorry you cannot purchase goods worthy such a value on credit\n");
                    }

        }
    }
}