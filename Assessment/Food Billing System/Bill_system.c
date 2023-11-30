// Food billing system

#include <stdio.h>

int choice, quantity, amount = 1, total_amt = 0;
char order_choice = 'y';

void order()
{
    switch (choice)
    {
    case 1:
        printf("\nYou have selected Pizza.");

        printf("\nEnter the quantity : ");
        scanf("%d", &quantity);

        amount = 180 * quantity;
        printf("\nAmount : %d", amount);

        total_amt = total_amt + amount;
        printf("\nTotal Amount is = %d", total_amt);

        printf("\nDo you want to place more orders ? y or n : ");
        scanf("%c", &order_choice);

        break;

    case 2:
        printf("\nYou have selected Burger.");

        printf("\nEnter the quantity : ");
        scanf("%d", &quantity);

        amount = 100 * quantity;
        printf("\nAmount : %d", amount);

        total_amt = total_amt + amount;
        printf("\nTotal Amount is = %d", total_amt);

        break;

    case 3:
        printf("\nYou have selected Dosa.");

        printf("\nEnter the quantity : ");
        scanf("%d", &quantity);

        amount = 120 * quantity;
        printf("\nAmount : %d", amount);

        total_amt = total_amt + amount;
        printf("\nTotal Amount is = %d", total_amt);

        break;

    case 4:
        printf("\nYou have selected Idli.");

        printf("\nEnter the quantity : ");
        scanf("%d", &quantity);

        amount = 50 * quantity;
        printf("\nAmount : %d", amount);

        total_amt = total_amt + amount;
        printf("\nTotal Amount is = %d", total_amt);

        break;

    default:
        printf("Invalid input");
        break;
    }
}

void main()
{
    do
    {
        if (order_choice == 'y')
        {
            printf("\n-------------- MENU --------------");
            printf("\n1. Pizza      Price = 180rs/pcs");
            printf("\n2. Burder     Price = 100rs/pcs");
            printf("\n3. Dosa       Price = 120rs/pcs");
            printf("\n4. Idli       Price = 50rs/pcs");
            printf("\nPlease Enter your choice : ");
            scanf("%d", &choice);
            order();
        }
    } while (order_choice != 'n');
}
