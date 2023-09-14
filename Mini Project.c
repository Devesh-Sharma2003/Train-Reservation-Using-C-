# include <stdio.h>
# include <string.h>
# include <stdlib.h>

struct book_tickets
{
    char number[40];
    char firstname[50];
    char middlename[50];
    char lastname[50];
    char email[50];
};
void personal_info (struct book_tickets p[],char from[],char to[],char dates[],int passenger,char car[])
{
    for(int i=0;i<passenger;i++)
    {
         printf("\n\n");
         printf("%d. passenger info-\n",i+1);
         printf("Passenger Name: %s %s %s\n",p[i].firstname,p[i].middlename,p[i].lastname);
         printf("Passenger E-Mail ID: %s\n",p[i].email);
         printf("Passenger Contact Number: %s\n",p[i].number);
         printf("Travel Class: %s \n",car);
         printf("Date Of Booking: %s\n",dates);
         printf("From Station: %s\n",from);
         printf("To Station: %s\n",to);
         printf("%d Adult, 0 children\n",passenger);
         printf("\n\n");
    }
    printf("\t\t\t\t\t**************THANKS FOR BOOKING AND HAVE A SAFE TRIP**************");
}

void rajori_express (struct book_tickets p[],char from[],char to[],char date[],int passenger,char dates[])
{
     printf("**********************************************************************************************************************************************************\n");
     printf("\t\t\t\t\t\t\tCongratulation! Your Ticket Got Successfully Booked\n\n");
     char car[30]="AC tier (A)";
     FILE *fp1;
     char ch1;
     fp1=fopen("rajori express.txt","r");
     ch1=getc(fp1);
     while(ch1!=EOF)
     {
         printf("%c",ch1);
         ch1=getc(fp1);
     }
     fclose(fp1);
     personal_info (p,from,to,dates,passenger,car);
}

void chennai_express (struct book_tickets p[],char from[],char to[],char date[],int passenger,char dates[])
{
     printf("**********************************************************************************************************************************************************\n");
     printf("\t\t\t\t\t\t\tCongratulation! Your Ticket Got Successfully Booked\n\n");
     char car[30]="AC tier (A)";
     FILE *fp1;
     char ch1;
     fp1=fopen("chennai express.txt","r");
     ch1=getc(fp1);
     while(ch1!=EOF)
     {
         printf("%c",ch1);
         ch1=getc(fp1);
     }
     fclose(fp1);
     personal_info (p,from,to,dates,passenger,car);
}


void friyangyu_tez (struct book_tickets p[],char from[],char to[],char date[],int passenger,char dates[])
{
     printf("**********************************************************************************************************************************************************\n");
     printf("\t\t\t\t\t\t\tCongratulation! Your Ticket Got Successfully Booked\n\n");
     char car[30]="AC tier (A)";
     FILE *fp1;
     char ch1;
     fp1=fopen("friyangyu tez.txt","r");
     ch1=getc(fp1);
     while(ch1!=EOF)
     {
         printf("%c",ch1);
         ch1=getc(fp1);
     }
     fclose(fp1);
     personal_info (p,from,to,dates,passenger,car);
}

void rajoriya_gadi (struct book_tickets p[],char from[],char to[],char date[],int passenger,char dates[])
{
     printf("**********************************************************************************************************************************************************\n");
     printf("\t\t\t\t\t\t\tCongratulation! Your Ticket Got Successfully Booked\n\n");
     char car[30]="AC tier (A)";
     FILE *fp1;
     char ch1;
     fp1=fopen("rajoriya gadi.txt","r");
     ch1=getc(fp1);
     while(ch1!=EOF)
     {
         printf("%c",ch1);
         ch1=getc(fp1);
     }
     fclose(fp1);
     personal_info (p,from,to,dates,passenger,car);
}

void emporium_super_express (struct book_tickets p[],char from[],char to[],char date[],int passenger,char dates[])
{
     printf("**********************************************************************************************************************************************************\n");
     printf("\t\t\t\t\t\t\tCongratulation! Your Ticket Got Successfully Booked\n\n");
     char car[30]="AC tier (A)";
     FILE *fp1;
     char ch1;
     fp1=fopen("emporium_super_express.txt","r");
     ch1=getc(fp1);
     while(ch1!=EOF)
     {
         printf("%c",ch1);
         ch1=getc(fp1);
     }
     fclose(fp1);
     personal_info (p,from,to,dates,passenger,car);
}

void shatabdi_express (struct book_tickets p[],char from[],char to[],char date[],int passenger,char dates[])
{
     printf("**********************************************************************************************************************************************************\n");
     printf("\t\t\t\t\t\t\tCongratulation! Your Ticket Got Successfully Booked\n\n");
     char car[30]="Sleeper (SL)";
     FILE *fp1;
     char ch1;
     fp1=fopen("shatabdi_express.txt","r");
     ch1=getc(fp1);
     while(ch1!=EOF)
     {
         printf("%c",ch1);
         ch1=getc(fp1);
     }
     fclose(fp1);
     personal_info (p,from,to,dates,passenger,car);
}


void rajdhani_express (struct book_tickets p[],char from[],char to[],char date[],int passenger,char dates[])
{
     printf("**********************************************************************************************************************************************************\n");
     printf("\t\t\t\t\t\t\tCongratulation! Your Ticket Got Successfully Booked\n\n");
     char car[30]="Sleeper (SL)";
     FILE *fp1;
     char ch1;
     fp1=fopen("rajdhani_express.txt","r");
     ch1=getc(fp1);
     while(ch1!=EOF)
     {
         printf("%c",ch1);
         ch1=getc(fp1);
     }
     fclose(fp1);
     personal_info (p,from,to,dates,passenger,car);
}

void mahamana_vivek (struct book_tickets p[],char from[],char to[],char date[],int passenger,char dates[])
{
     printf("**********************************************************************************************************************************************************\n");
     printf("\t\t\t\t\t\t\tCongratulation! Your Ticket Got Successfully Booked\n\n");
     char car[30]="Sleeper (SL)";
     FILE *fp1;
     char ch1;
     fp1=fopen("mahamana_vivek.txt","r");
     ch1=getc(fp1);
     while(ch1!=EOF)
     {
         printf("%c",ch1);
         ch1=getc(fp1);
     }
     fclose(fp1);
     personal_info (p,from,to,dates,passenger,car);
}

void rajoriya_kranti (struct book_tickets p[],char from[],char to[],char date[],int passenger,char dates[])
{
     printf("**********************************************************************************************************************************************************\n");
     printf("\t\t\t\t\t\t\tCongratulation! Your Ticket Got Successfully Booked\n\n");
     char car[30]="Sleeper (SL)";
     FILE *fp1;
     char ch1;
     fp1=fopen("rajoriya_kranti.txt","r");
     ch1=getc(fp1);
     while(ch1!=EOF)
     {
         printf("%c",ch1);
         ch1=getc(fp1);
     }
     fclose(fp1);
     personal_info (p,from,to,dates,passenger,car);
}

void tejas_rath_express (struct book_tickets p[],char from[],char to[],char date[],int passenger,char dates[])
{
     printf("**********************************************************************************************************************************************************\n");
     printf("\t\t\t\t\t\t\tCongratulation! Your Ticket Got Successfully Booked\n\n");
     char car[30]="Sleeper (SL)";
     FILE *fp1;
     char ch1;
     fp1=fopen("tejas_rath_express.txt","r");
     ch1=getc(fp1);
     while(ch1!=EOF)
     {
         printf("%c",ch1);
         ch1=getc(fp1);
     }
     fclose(fp1);
     personal_info (p,from,to,dates,passenger,car);
}

void sampark_krati (struct book_tickets p[],char from[],char to[],char date[],int passenger,char dates[])
{
     printf("**********************************************************************************************************************************************************\n");
     printf("\t\t\t\t\t\t\tCongratulation! Your Ticket Got Successfully Booked\n\n");
     char car[30]="Second Siting (2S)";
     FILE *fp1;
     char ch1;
     fp1=fopen("sampark_kranti.txt","r");
     ch1=getc(fp1);
     while(ch1!=EOF)
     {
         printf("%c",ch1);
         ch1=getc(fp1);
     }
     fclose(fp1);
     personal_info (p,from,to,dates,passenger,car);
}

void kavi_guru_express (struct book_tickets p[],char from[],char to[],char date[],int passenger,char dates[])
{
     printf("**********************************************************************************************************************************************************\n");
     printf("\t\t\t\t\t\t\tCongratulation! Your Ticket Got Successfully Booked\n\n");
     char car[30]="Second Siting (2S)";
     FILE *fp1;
     char ch1;
     fp1=fopen("kavi_guru_express.txt","r");
     ch1=getc(fp1);
     while(ch1!=EOF)
     {
         printf("%c",ch1);
         ch1=getc(fp1);
     }
     fclose(fp1);
     personal_info (p,from,to,dates,passenger,car);
}

void humsafar_express (struct book_tickets p[],char from[],char to[],char date[],int passenger,char dates[])
{
     printf("**********************************************************************************************************************************************************\n");
     printf("\t\t\t\t\t\t\tCongratulation! Your Ticket Got Successfully Booked\n\n");
     char car[30]="Second Siting (2S)";
     FILE *fp1;
     char ch1;
     fp1=fopen("humsafar_express.txt","r");
     ch1=getc(fp1);
     while(ch1!=EOF)
     {
         printf("%c",ch1);
         ch1=getc(fp1);
     }
     fclose(fp1);
     personal_info (p,from,to,dates,passenger,car);
}

void vande_bharat (struct book_tickets p[],char from[],char to[],char date[],int passenger,char dates[])
{
     printf("**********************************************************************************************************************************************************\n");
     printf("\t\t\t\t\t\t\tCongratulation! Your Ticket Got Successfully Booked\n\n");
     char car[30]="Second Siting (2S)";
     FILE *fp1;
     char ch1;
     fp1=fopen("vande_bharat.txt","r");
     ch1=getc(fp1);
     while(ch1!=EOF)
     {
         printf("%c",ch1);
         ch1=getc(fp1);
     }
     fclose(fp1);
     personal_info (p,from,to,dates,passenger,car);
}

void gatiman_express (struct book_tickets p[],char from[],char to[],char date[],int passenger,char dates[])
{
     printf("**********************************************************************************************************************************************************\n");
     printf("\t\t\t\t\t\t\tCongratulation! Your Ticket Got Successfully Booked\n\n");
     char car[30]="Second Siting (2S)";
     FILE *fp1;
     char ch1;
     fp1=fopen("gatiman_express.txt","r");
     ch1=getc(fp1);
     while(ch1!=EOF)
     {
         printf("%c",ch1);
         ch1=getc(fp1);
     }
     fclose(fp1);
     personal_info (p,from,to,dates,passenger,car);
}


void ac (struct book_tickets p[],char from[],char to[],char date[],int passenger,char dates[])
{
    printf("\t\t\t\t**************************  On %s  ********************************\n",date);
    printf("\t\t\t\t\t\t\t    %s -> %s",from,to);
    char ch;
    int choice;
    FILE *fp;
    fp=fopen("ac1.txt","r");
    ch=getc(fp);
    while(ch!=EOF)
    {
        printf("%c",ch);
        ch=getc(fp);
    }
    fclose(fp);
    printf("Enter the number of your desired train\n");
    scanf("%d",&choice);
    printf("\n\n");


    switch(choice)
    {
        case 1:
        {
            rajori_express(p,from,to,date,passenger,dates);
            break;
        }
        case 2:
        {
            chennai_express(p,from,to,date,passenger,dates);
            break;
        }
        case 3:
        {
            friyangyu_tez(p,from,to,date,passenger,dates);
            break;
        }
        case 4:
        {
            rajoriya_gadi(p,from,to,date,passenger,dates);
            break;

        }
        case 5:
        {
            emporium_super_express(p,from,to,date,passenger,dates);
            break;
        }
        default:
            {
                printf("Invalid option\n");
                break;
            }
    }
    printf("\n\n\n");
}

void ac2 (struct book_tickets p[],char from[],char to[],char date[],int passenger,char dates[])
{
    printf("\t\t\t\t**************************  On %s  ********************************\n",date);
    printf("\t\t\t\t\t\t\t     %s -> %s",from,to);
    char ch;
    int choice;
    FILE *fp;
    fp=fopen("ac2.txt","r");
    ch=getc(fp);
    while(ch!=EOF)
    {
        printf("%c",ch);
        ch=getc(fp);
    }
    fclose(fp);
    printf("Enter the number of your desired train\n");
    scanf("%d",&choice);
    printf("\n\n");


    switch(choice)
    {
        case 1:
        {
            shatabdi_express(p,from,to,date,passenger,dates);
            break;
        }
        case 2:
        {
            rajdhani_express(p,from,to,date,passenger,dates);
            break;
        }
        case 3:
        {
            mahamana_vivek(p,from,to,date,passenger,dates);
            break;
        }
        case 4:
        {
            rajoriya_kranti(p,from,to,date,passenger,dates);
            break;
        }
        case 5:
        {
            tejas_rath_express(p,from,to,date,passenger,dates);
            break;
        }
        default:
            {
                printf("Invalid option\n");
                break;
            }
    }
    printf("\n\n\n");
}

void general (struct book_tickets p[],char from[],char to[],char date[],int passenger,char dates[])
{
    printf("\t\t\t\t**************************  On %s  ********************************\n",date);
    printf("\t\t\t\t\t\t\t     %s -> %s",from,to);
    char ch;
    int choice;
    FILE *fp;
    fp=fopen("general.txt","r");
    ch=getc(fp);
    while(ch!=EOF)
    {
        printf("%c",ch);
        ch=getc(fp);
    }
    fclose(fp);
    printf("Enter the number of your desired train\n");
    scanf("%d",&choice);
    printf("\n\n");


    switch(choice)
    {
        case 1:
        {
            sampark_krati(p,from,to,date,passenger,dates);
            break;
        }
        case 2:
        {
            kavi_guru_express(p,from,to,date,passenger,dates);
            break;
        }
        case 3:
        {
            humsafar_express(p,from,to,date,passenger,dates);
            break;
        }
        case 4:
        {
            vande_bharat(p,from,to,date,passenger,dates);
            break;
        }
        case 5:
        {
            gatiman_express(p,from,to,date,passenger,dates);
            break;
        }
        default:
        {
            printf("Invalid option\n");
            break;
        }

    }
    printf("\n\n\n");
}


void book_tickets(struct book_tickets p[])
{
    int passenger,ch;
    char date[20],from[20],to[20],dates[20];
    printf("Enter the number of passenger:\n");
    scanf("%d",&passenger);
    printf("\n\n\n");
    for(int i=0;i<passenger;i++)
    {
        printf("***************************************************\n");
        printf("Enter the %d passenger info-\n",i+1);
        printf("\nEnter first name:\n");
        scanf("%s",&p[i].firstname);
        printf("\nEnter middle name (If Not Press '-'):\n");
        scanf("%s",&p[i].middlename);
        printf("\nEnter last name:\n");
        scanf("%s",&p[i].lastname);
        printf("\nEnter contact number:\n");
        scanf("%s",&p[i].number);
        printf("\nEnter E-Mail ID:\n");
        scanf("%s",&p[i].email);
        printf("\n");
    }
    printf("Travelling Date (DD/MM/YYYY): ");
    scanf("%s",date);
    printf("\nToday's Date (DD/MM/YYYY): ");
    scanf("%s",dates);
    printf("\nFrom (Enter First Word Of Place) - ");
    scanf("%s",from);
    printf("\nTo (Enter First Word Of Place) - ");
    scanf("%s",to);
    printf("\nSelect your comfort (By Entering A Number)\n");
    printf("1. AC tier (A)\n");
    printf("2. Sleeper (SL)\n");
    printf("3. Second Siting (2S)\n");
    scanf("%d",&ch);
    printf("\n\n");
    switch (ch)
    {
        case 1:
            {
                ac(p,from,to,date,passenger,dates);
                break;
            }
        case 2:
            {
                ac2(p,from,to,date,passenger,dates);
                break;
            }
        case 3:
            {
                general(p,from,to,date,passenger,dates);
                break;
            }
        default:
            {
                printf("Invalid Option\n");
                break;
            }
    }
    printf("\n\n\n");

}

void cancel_tickets ()
{
    int pnr,num;
    char name[30];
    printf("Enter your first name: ");
    scanf("%s",name);
    printf("\n\n");
    printf("\t\t\t\t\t\t\t   **Ticket is cancelled**\n\n");
    printf("\t\t\t\t%s, Your Ticket Is Cancelled And The Refund Will Be Sent In Your Bank Account Within 7 Working Days\n\n\n",name);
    printf("\t\t\t\t\t**************THANKS FOR VISITING US**************");
    printf("\n\n\n");
}

void check_trains()
{
    char from[30],to[30],date[30];
    printf("Enter The Travelling Date (DD/MM/YYYY):\n");
    scanf("%s",date);
    printf("From Station:\n");
    scanf("%s",from);
    printf("To Station:\n");
    scanf("%s",to);
    printf("\t\t\t\t************************  On Date: %s  ******************************\n\n",date);
    printf("\t\t\t\t\t\t\t    %s -> %s",from,to);
    printf("\n\n");
    char c;
    FILE *f;
    f=fopen("train_list.txt","r");
    c=getc(f);
    while(c!=EOF)
    {
        printf("%c",c);
        c=getc(f);
    }
    fclose(f);
}

int main()
{
    int num,ch,y=10;
    while(y--)
    {
        struct book_tickets p[20];
        printf("\n\n\t\t\t\t\t\t*******WELCOME TO RAILWAY RESERVATION*******");
        printf("\n\n\n\nPress following buttons to choose the service -\n");
        printf("\nThese are following services:\n");
        printf("\t1.To book tickets-\t\t\t\t2.To cancel tickets-\t\t\t\t3.To check trains-\t\t\t\t4.Logout- \n");
        printf("\n\nEnter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                book_tickets(p);
                break;
            }
            case 2:
            {
                cancel_tickets();
                break;
            }
            case 3:
            {
                check_trains();
                break;
            }
            case 4:
            {
                exit(0);
            }
            default:
            {
                printf("Invalid Option\n");
                break;
            }
        }
    }
    return 0;
}
