//this is the do while loop in question three 

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
