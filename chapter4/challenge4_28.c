#include <stdio.h>


int main()
{
    int paycode, sales, total_item, managers = 0, hr_workers = 0, com_workers = 0, pic_workers = 0;
    float pay, hr_sal, work_hr, week_sal, pay_per_item;
    while (paycode != -1)
    {
        printf("\n\nEnter paycode (-1 to end): ");
        scanf("%d", &paycode);
        switch (paycode)
        {
        case 1:
            printf("\nManagers Selected.");
            printf("\nEnter fixed weekly salary: ");
            scanf("%f", &week_sal);
            printf("\nManager\'s pay is $ %.2f", week_sal);
            managers++;
            break;
        case 2:
            printf("\nHourly Workers Selected.");
            printf("\nEnter hourly salary: ");
            scanf("%f", &hr_sal);
            printf("\nEnter the total hours worked: ");
            scanf("%f", &work_hr);
            if (work_hr <= 40)
                pay = work_hr * hr_sal;
            else
                pay = 40 * hr_sal + ((work_hr - 40) * hr_sal * 1.5);
            printf("\nHourly Worker’s pay is $ %.2f", pay);
            hr_workers++;
            break;
        case 3:
            printf("\nCommition Workers Selected.");
            printf("\nEnter gross weekly sales: ");
            scanf("%d", &sales);
            pay = 250 + (sales / 100) * 5.7;
            printf("\nCommission worker’s pay is $ %.2f", pay);
            com_workers++;
            break;
        case 4:
            printf("\nPieceWorkers Selected.");
            printf("\nEnter total number of item produced: ");
            scanf("%d", &total_item);
            printf("\nEnter pay per item: ");
            scanf("%f", &pay_per_item);
            pay = total_item * pay_per_item;
            printf("\nPieceWorkers worker’s pay is $ %.2f", pay);
            pic_workers++;
            break;
        case -1:
            break;
        default:
            printf("\nPlease enter a valid choice.");

            break;
        }
    }
    printf("\nSummary of Payouts");
    printf("\nEmployee Categories Number Paid");
    printf("\n-------------------");
    printf("\nManagers %d", managers);
    printf("\nHourly Workers %d", hr_workers);
    printf("\nCommission Workers %d", com_workers);
    printf("\nPiece Workers %d", pic_workers);
    return 0;
}