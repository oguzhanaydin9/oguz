#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int cust1();
int cust2();
int cust3();
int cust4();
int cust5();
struct atmUser{
    char name[15] ;
    int cardno;
    int pass;
};

int main()
{



        int i,a;
        struct atmUser *u;
        u = (struct atmUser*)malloc(i * sizeof(struct atmUser));

        strcpy(u->name, "*****************\n*****OGZ ATM*****\n*****************\n");
        printf("%s",u->name);
        printf("PLEASE ENTER CARD NO AND PASSWORD\n");
        printf("CARD NUMBER :");
        scanf("%d",&u->cardno);
        printf("PASSWORD :");
        scanf("%d",&u->pass);

        system("cls");
        if((u->pass==1234)&&(u->cardno==741258)){
            cust1();


        }
        else if((u->pass==1247)&&(u->cardno==123456)){
            cust2();
        }




        else if((u->pass==1254)&&(u->cardno==987654)){
            cust3();
        }
        else if((u->pass==1269)&&(u->cardno==123654)){
            cust4();
        }
        else if((u->pass==9632)&&(u->cardno==852369)){
            cust5();

        }
        else{

            for(i=0;i<3;i++){
                printf("INVALID PASSWORD OR CARD NUMBER PLEASE TRY AGAIN\n");

                printf("CARD NUMBER :");
                scanf("%d",&u->cardno);
                printf("PASSWORD :");
                scanf("%d",&u->pass);
                        if((u->pass==1234)&&(u->cardno==741258)){
                            cust1();


                        }
                        else if((u->pass==1247)&&(u->cardno==123456)){
                            cust2();
                        }




                        else if((u->pass==1254)&&(u->cardno==987654)){
                            cust3();
                        }
                        else if((u->pass==1269)&&(u->cardno==123654)){
                            cust4();
                        }
                        else if((u->pass==9632)&&(u->cardno==852369)){
                            cust5();

                        }
                        system("cls");


                }
                printf("System locked");
                exit(1);
            }





    system("pause");
    system("clr");
    return 0;
}
int cust2(){
    FILE *cust;
    cust = fopen("oguz.txt","w+");
    int balance1=2000,withdraw1,deposit1,operation,repeat;
     printf("||||WELCOME MR. OGUZ||||\nPLEASE SELECT TYPE OF OPERATION:\n ");
    printf("1-WITHDRAW      2-BALANCE\n      3-DEPOSIT\n");
    scanf("%d",&operation);
    if(operation==1){
        printf("Your balance: %d\n",balance1);

        printf("Enter the amount of money you want to withdraw :");
        scanf("%d",&withdraw1);
        if(withdraw1>balance1){
            printf("NOT ENOUGH MONEY\n");
        }
        else
            balance1 -= withdraw1;
            printf("Your balance: %d\n",balance1);
            fprintf(cust,"Your withdraw: %d\n",withdraw1);
    }
    else if(operation==2){
        printf("%d\n",balance1);
    }


    else if(operation==3){
        printf("%d\n",balance1);
        printf("Enter the amount of money you want to deposit :");
        scanf("%d",&deposit1);
        balance1 += deposit1;
        printf("YOUR BALANCE: %d\n",balance1);
        fprintf(cust,"Your deposit: %d\n",deposit1);

    }
    else
        printf("INVALID COMMAND\n");
    printf("(1)Exit/(2)Back/(3)Sign Out");
    scanf("%d",&repeat);
    if(repeat==1){
        system("cls");
        printf("THANKS FOR USING OGZ ATM\n");
        exit(1);
    }
    else if(repeat==2){
        cust2();
    }
    else if(repeat==3){
        system("cls");
        return main();

    }
    else{
        printf("INVALID COMMAND\n");
        system("cls");
    }
fclose(cust);

}
int cust3(){
    FILE *cust;
    cust = fopen("gokhan.txt","w+");
    int balance1=500,withdraw1,deposit1,operation,repeat;
     printf("||||WELCOME MR. GOKHAN||||\nPLEASE SELECT TYPE OF OPERATION:\n ");
    printf("1-WITHDRAW     2-BALANCE\n      3-DEPOSIT\n");
    scanf("%d",&operation);
    if(operation==1){
        printf("Your balance: %d\n",balance1);
        printf("Enter the amount of money you want to withdraw");
        scanf("%d",&withdraw1);
        if(withdraw1>balance1){
            printf("NOT ENOUGH MONEY");
        }
        else
            balance1 -= withdraw1;
            printf("Your balance: %d",balance1);
            fprintf(cust,"Your withdraw: %d\n",withdraw1);
    }
    else if(operation==2){
        printf("%d\n",balance1);
    }


    else if(operation==3){
        printf("%d",balance1);
        printf("Enter the amount of money you want to deposit :");
        scanf("%d",&deposit1);
        balance1 += deposit1;
        printf("YOUR BALANCE: %d\n",balance1);
        fprintf(cust,"Your deposit: %d\n",deposit1);

    }
    else
        printf("INVALID COMMAND\n");
    printf("(1)Exit/(2)Back/(3)Sign Out\n");
    scanf("%d",&repeat);
    if(repeat==1){
        system("cls");
        printf("THANKS FOR USING OGZ ATM");
        exit(1);
    }
    else if(repeat==2){
        system("cls");
        cust3();
    }
    else if(repeat==3){
        system("cls");
        return main();
    }
    else
        system("cls");
        printf("INVALID COMMAND");
    system("cls");
    fclose(cust);
}
int cust1(){
    FILE *cust;
    cust = fopen("deniz.txt","w+");
    int balance1=1000,withdraw1,deposit1,operation,repeat;
     printf("||||WELCOME MRS. DENIZ||||\nPLEASE SELECT TYPE OF OPERATION:\n ");
    printf("1-WITHDRAW     2-BALANCE\n         3-DEPOSIT\n");
    scanf("%d",&operation);
    if(operation==1){
        printf("Your balance: %d\n",balance1);
        printf("Enter the amount of money you want to withdraw :");
        scanf("%d",&withdraw1);
        if(withdraw1>balance1){
            printf("NOT ENOUGH MONEY");
        }
        else{
            balance1 -= withdraw1;
            printf("Your balance: %d\n",balance1);
            fprintf(cust,"Your withdraw: %d\n",withdraw1);


        }
    }
    else if(operation==2){
        printf("%d",balance1);
    }


    else if(operation==3){
        printf("%d",balance1);
        printf("Enter the amount of money you want to deposit :");
        scanf("%d",&deposit1);
        balance1 += deposit1;
        printf("YOUR BALANCE: %d",balance1);
        fprintf(cust,"Your deposit: %d\n",deposit1);

    }
    else
        printf("INVALID COMMAND\n");
    printf("\n(1)Exit/(2)Back/(3)Sign Out");
    scanf("%d",&repeat);
    if(repeat==1){
        system("cls");
        printf("THANKS FOR USING OGZ ATM\n");
        exit(1);
    }
    else if(repeat==2){
        system("cls");
        cust1();
    }
    else if(repeat==3){
        system("cls");
        return main();
    }
    else
        printf("INVALID COMMAND");
    system("cls");
    fclose(cust);
}

int cust4(){
    FILE *cust;
    cust = fopen("fuat.txt","w+");
    int balance1=7000,withdraw1,deposit1,operation,repeat;
     printf("||||WELCOME MR. FUAT||||\nPLEASE SELECT TYPE OF OPERATION:\n ");
    printf("1-WITHDRAW     2-BALANCE\n    3-DEPOSIT\n");
    scanf("%d",&operation);
    if(operation==1){
        printf("Your balance: %d\n",balance1);
        printf("Enter the amount of money you want to withdraw");
        scanf("%d",&withdraw1);
        if(withdraw1>balance1){
            printf("NOT ENOUGH MONEY\n");
        }
        else
            balance1 -= withdraw1;
            printf("Your balance: %d",balance1);
            fprintf(cust,"Your withdraw: %d\n",withdraw1);
    }
    else if(operation==2){
        printf("%d",balance1);
    }



    else if(operation==3){
        printf("%d",balance1);
        printf("Enter the amount of money you want to deposit");
        scanf("%d",&deposit1);
        balance1 += deposit1;
        printf("YOUR BALANCE: %d\n",balance1);
        fprintf(cust,"Your deposit: %d\n",deposit1);


    }
    else
        printf("INVALID COMMAND");
    printf("(1)Exit/(2)Back/(3)Sign Out");
    scanf("%d",&repeat);
    if(repeat==1){
        system("cls");
        printf("THANKS FOR USING OGZ ATM");
        exit(1);
    }
    else if(repeat==2){


        cust4();
    }
    else if(repeat==3){
        system("cls");
        return main();
    }
    else
        printf("INVALID COMMAND");
    system("cls");
    fclose(cust);
}
int cust5(){
    FILE *cust;
    cust = fopen("yusuf.txt","w+");
    int balance1=300,withdraw1,deposit1,operation,repeat;
     printf("||||WELCOME MR. YUSUF||||\nPLEASE SELECT TYPE OF OPERATION:\n ");
    printf("1-WITHDRAW     2-BALANCE\n       3-DEPOSIT\n");
    scanf("%d",&operation);
    if(operation==1){
        printf("Your balance: %d\n",balance1);
        printf("Enter the amount of money you want to withdraw");
        scanf("%d",&withdraw1);
        if(withdraw1>balance1){
            printf("NOT ENOUGH MONEY");
        }
        else
            balance1 -= withdraw1;
            printf("Your balance: %d\n",balance1);
            fprintf(cust,"Your withdraw: %d\n",withdraw1);
    }
    else if(operation==2){
        printf("%d",balance1);
    }



    else if(operation==3){
        printf("%d",balance1);
        printf("Enter the amount of money you want to deposit");
        scanf("%d",&deposit1);
        balance1 += deposit1;
        printf("YOUR BALANCE: %d\n",balance1);
        fprintf(cust,"Your deposit: %d\n",deposit1);
    }
    else
        printf("INVALID COMMAND");
    printf("(1)Exit/(2)Back/(3)Sign Out");
    scanf("%d",&repeat);
    if(repeat==1){
        system("cls");
        printf("THANKS FOR USING OGZ ATM");
        exit(1);
    }
    else if(repeat==2){


        cust5();
    }
    else if(repeat==3){
        system("cls");
        return main();

    }
    else
        printf("INVALID COMMAND");
    system("cls");
    fclose(cust);
}
