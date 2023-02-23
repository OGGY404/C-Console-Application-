#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    printf("          \t\tWELCOME TO PAYON ONLINE PAYMENTS    \n\t             <<<<<   SYSTEM   >>>>>\n\n");
    dT();
    payopt();
return 0;
}
int payopt()
{
    int option;
    printf (" >> PAYON ONLINE PAYMENT OPTIONS\n\n      1.Water Bill\n      2.Electricity Bill\n      3.Mobile Reloads/Pay Bills\n\n >> Your Selection Is:");
    scanf ("%d",&option);

    switch (option)
   {
        case 1:
            printf("\n\t** WATER BILL **\n\n");
            billdetails();
            break;

        case 2:
            printf ("\n\t** ELECTRICITY BILL **\n\n");
            billdetails();
            break;

        case 3:
            printf("\n\t** MOBILE RELOADS/PAY BILLS **\n");
            serviceprovider();
            break;

        default:
            printf ("\n     *** YOU ENTERED INVALID NUMBER......PLEASE TRYAGAIN!!! ***\n  \t\t**********************\n   \t\t**********************\n  \t\t**********************\n\n\n");
        break;
    }
}
int billdetails()
{
    float billnum,payment,tax,tot;
    printf(" >Enter Your Bill Number:");
    scanf("%f",&billnum);
    printf("\n >Enter The Payable Amount:");
    scanf("%f",&payment);
    if (payment>1000)
    {
        tax=payment*5/100;
        tot=tax+payment;
        printf("Your Total Is:%f",tot);
    }
    else
    {
        tot=payment*2/100;
        printf("Your Total Is:%f",tot);
    }


}
int serviceprovider()
{
   int Num,option,payment;
   char phnum[10];
   printf ("\n    >> Please Choose Your Service Provider:\n\n\t1.DIALOG\n\t2.MOBITEL\n\t3.HUTCH\n\t4.AIRTEL\n\n    >> YOUR SERVICE PROVIDER:");
   scanf ("%d",&Num);

   switch (Num)
   {
    case 1:
        printf("\n\t\t\t>>> WELCOME TO DIALOG <<<\n\n");
        printf ("\n\t1.Voice & SMS Reloads\n\t2.Mobile Data Reloads\n\n    >> Select Voice or Data :");
        scanf ("%d",&option);
        if (option==1)
        {
            printf ("\n\t** Voice & SMS Reloads **\n\n");
            mobpay();
        }
        else if(option==2)
        {
            printf ("\n\t** Mobile Data Reloads **\n");
            datapay();
        }
        else
        {
            printf("\n\t*** INVALID input...Please Try again!!! ***\n\n");
        }
    break;

   case 2:
        printf("\n\t\t >>> WELCOME TO MOBITEL <<<\n\n");
        printf ("\n\t1.Voice & SMS Reloads\n\t2.Mobile Data Reloads\n\n    >> Select Voice or Data :");
        scanf ("%d",&option);
        if (option==1)
        {
            printf ("\n\t** Voice & SMS Reloads **\n\n");
            mobpay();
        }
        else if(option==2)
        {
            printf ("\n\t** Mobile Data Reloads **\n");
            datapay();
        }
        else
        {
            printf("\n\t*** INVALID INPUT...PLEASE TRY AGAIN!!! ***\n\n");
        }
    break;

   case 3:
        printf("\n\t\t >>> WELCOME TO HUTCH <<<\n\n");
        printf ("\n\t1.Voice & SMS Reloads\n\t2.Mobile Data Reloads\n\n    >> Select Voice or Data :");
        scanf ("%d",&option);
        if (option==1)
        {
            printf ("\n\t** Voice & SMS Reloads **\n\n");
            mobpay();
        }
        else if(option==2)
        {
            printf ("\n\t** Mobile Data Reloads **\n");
            datapay();
        }
        else
        {
            printf("\n\t*** INVALID INPUT...PLEASE TRY AGAIN!!! ***\n\n");
        }
    break;

   case 4:
        printf("\n\t\t >>> WELCOME TO AIRTEL <<<\n\n");
        printf ("\n\t1.Voice & SMS Reloads\n\t2.Mobile Data Reloads\n\n    >> Select Voice or Data :");
        scanf ("%d",&option);
        if (option==1)
        {
            printf ("\n\t** Voice & SMS Reloads **\n\n");
            mobpay();
        }
        else if(option==2)
        {
            printf ("\n\t** Mobile Data Reloads **\n");
            datapay();
        }
        else
        {
            printf("\n\t*** INVALID INPUT...PLEASE TRY AGAIN!!! ***\n\n");
        }
    break;

   default:
        printf("\n    *** YOU ENTERED INVALID NUMBER...PLEASE TRYAGAIN!!! ***\n  \t\t**********************\n   \t\t**********************\n  \t\t**********************");
    break;

   }
}
int mobpay()
{
    char phnum[10];
    int payment,tot,tax;
    printf ("    >> Enter Your Phone Number:");
    scanf ("%s",&phnum);
    billdetails();
    if(strlen(phnum)==10)
    {
        printf ("\n    >> How Much Do You Want To Reload?: LKR.");
        scanf ("%d",&payment);

    if (payment>1000)
    {
        tax=payment*5/100;
        tot=tax+payment;
        printf("Your Total Is:%f",tot);
    }

    else
    {
        tot=payment*2/100;
        printf("Your Total Is:%f",tot);
    }
        carddetails();
    }
    else
    {
        printf("\n\t*** INVALID MOBILE NUMBER...PLEASE TRY AGAIN!!! ***\n");
    }
}
int datapay()
{
    char phnum[10];
    int option;
    printf ("\n    >> Enter Your Mobile Number:");
    scanf ("%s",&phnum);
    if(strlen(phnum)==10)
    {
        printf ("\n\t1.Rs.49\n\t2.Rs.99\n\t3.Rs.199\n\t4.RS.299\n\n    >> Please Select Data Package:");
        scanf ("%d",&option);
        switch(option)
        {
        case 1:
            {
                carddetails();
            }
        break;
        case 2:
            {
                carddetails();
            }
        break;
        case 3:
            {
                carddetails();
            }
        break;
        case 4:
            {
                carddetails();
            }
        break;
        default:
            {
                printf("\n\t*** INVALID DATA PACKAGE NUMBER...PLEASE TRYAGAIN!!! ***\n\n");
            }
        break;
        }
    }
    else
    {
        printf("\n\t*** INVALID MOBILE NUMBER...PLEASE TRY AGAIN!!! ***\n");
    }
}
int carddetails()
{
    char Cd[16];
    char ch;
    int cvv,expmo,expy;
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    printf("\n    >> Enter Your Credit Card Number : ");
    scanf("%s",&Cd);

    if(strlen(Cd)>16||strlen(Cd)<16)
    {
        printf("\n\n\t*** INVALID CARD NUMBER...PLEASE TRY AGAIN!!! ***\n");
    }
    else
    {
        printf("\n    >> Enter Expire Month(MM): ");
        scanf("%d",&expmo);
        printf("\n    >> Enter Expire Year(YYYY): ");
        scanf("%d",&expy);

        if(tm.tm_year<expy)
        {
            printf("\n    >> Enter CVV : ");
            scanf("%d",&cvv);
        }
        else
        {
            printf("\n\t*** ERROR: There Is a Problem With Your Card Expiration Date...Please Try again!!! ***\n");
        }

        printf("\n\t>>Do You Want To Submit Your Payment?[Y/N]:   ");
        scanf("%s",&ch);
        if(ch=='Y'||ch=='y')
        {
            printf("\n     >>>Your Payment Is Successful..!!");
            printf("\n\n     > Do You Need Another Service?[Y/N]:    ");
            scanf("%s",&ch);
            if(ch=='Y'||ch=='y')
            {
            payopt();
            }
            else if (ch=='N'||ch=='n')
            {
            printf("\n\n\t\t *** THANK YOU FOR USING ***\n\n\t\t     PAYON ONLINE PAYMENTS\n\t\t\t     SYSTEM\n");
            }
            else
            {
            printf("\n     *** YOU ENTERED INVALID INPUT......PLEASE TRYAGAIN!!! ***\n  \t\t**********************\n   \t\t**********************\n  \t\t**********************");
            }
        }
        else if(ch=='N'||ch=='n')
        {
            printf("\n\n\t\tTHANK YOU FOR USING\n\tPAYON ONLINE PAYMENTS\n\t\t\t   SYSTEM");
        }
        else
        {
            printf("\n\t\t*** YOU ENTERED WRONG COMMAND..!!! ***\n\n\t\t      THANK YOU FOR USING\n\t\t***  PAYON ONLINE PAYMENTS ***\n\t\t          SYSTEM\n\n\n");
        }

    }

}
int dT()
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("   Date: %d-%02d-%02d                    %02d:%02d:%02d\n\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
}
