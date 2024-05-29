#include <stdio.h>
#include <stdlib.h>

/*K.G.Prageeth Kaushalya
  as2022924

  #Sample users
  user  AccountNumber   password
    1       1111           111
    2       2222           222
    3       3333           333
    4       4444           444
  */


//ARRAY
int    intAccountNumber[]       = {1111,2222,3333,4444};
int    intpassword[]            = { 111, 222, 333, 444};
float  fltBalancesAmountArray[] = { 500,1000,1500,2000};

void CreateAccount();           //Function 1
void DepositMoney();            //Function 2
void WithdrawMoney();           //Function 3
void CheckAccountBalance();     //Function 4
void Exit();                    //Function 5

int main()
{
    //The create variable
    int intCustomerInput;
    do
        {

    printf("\n%40.s==Welcome to the Prageeth Bank==\n\n\n");

    // Services offered by bank

    printf("%40.s1. Create a new bank account\n");
    printf("%40.s2. Deposit money\n");
    printf("%40.s3. Withdraw money\n");
    printf("%40.s4. Check account balance\n");
    printf("%40.s5. Exit\n\n");

    //calling the customer

    printf("Dear customer, What is your need?\n");

    // Enter the customer operation

    printf("Enter your operation input : ");
    scanf("%d",&intCustomerInput);

    //Cheking the customer's inputs

    printf("\n\n");

    if(intCustomerInput > 0 && intCustomerInput < 6)
    {
        if (intCustomerInput == 1)
        {
            CreateAccount();                // Call the Functions "CreateAccount"
        }

        else if (intCustomerInput == 2)
        {
            DepositMoney();                 // Call the Functions "DepositMoney"
        }
        else if (intCustomerInput == 3)
        {
            WithdrawMoney();                // Call the Functions "WithdrawMoney"
        }
        else if (intCustomerInput == 4)
        {
            CheckAccountBalance();          // Call the Functions "WithdrawMoney"

        }
        else if (intCustomerInput == 5)
        {
            Exit();                         // Call the Functions "Exit"

        }


    }

    else
    {
        printf("This is an invalid input\n ");
        printf("Try Again");
    }

        }while(intCustomerInput != 5);

    return 0;
}


// create a functions


// Function 1
// Create a new bank account

void CreateAccount()
{
    int    intAccNumber;
    float  fltDepositAmount;
    int    intNewpassword;


    printf("Enter a 4 digit Account Number : ");                                        //create Account Number
    scanf("%d",&intAccNumber);

    printf("Enter a 3 digit password       : ");
    scanf("%d",&intNewpassword);

    intpassword[4] = intNewpassword;
    intAccountNumber[4] = intAccNumber;

    if(intAccNumber > 0)
    {
        printf("Enter the initial amount       : ");                                          //deposit Amount
        scanf("%f",&fltDepositAmount);

        fltBalancesAmountArray[4] = fltDepositAmount;
        printf("\n");


        if (fltDepositAmount > 500)
        {
            printf("Your Account Number is   : %d\n",intAccountNumber[4]);              //print Account number & Balance
            printf("Your Account password is : %d\n",intpassword[4]);
            printf("Your Deposit Balance is  : %.2f\n",fltBalancesAmountArray[4]);
        }
        else
        {

            printf("Your opening balance is insufficient\n");
            CreateAccount();                                                            //recursion Function

        }
    }
    else
    {
        printf("\n");
        printf("Invalid Number\n");
        CreateAccount();                                                                //recursion Functio
    }


}




// Function 2
//Deposit money

void DepositMoney()
{

    int    intEnterAccNumber;
    int    intEnterPassword;
    float  fltDeposit;
    int    i;

    printf("Enter your Account Number : ");                                                                 // User input
    scanf("%d",&intEnterAccNumber);

    printf("Enter your password       : ");
    scanf ("%d",&intEnterPassword);

    printf ("\n");

    for (i=0 ; i < 100 ; i++)
    {

        if( (intAccountNumber[i] == intEnterAccNumber) && (intpassword[i] == intEnterPassword))               // check the Account Number
        {
            printf ("Your Account is Verified\n");
            printf ("Enter Your Deposit Amount : ");                                                          // Deposit money
            scanf  ("%f",&fltDeposit);
            printf ("\n");

            printf ("Your Deposit is SUCCESSFUL\n");

            printf ("Your Account Number is : %d\n",intAccountNumber[i]);                                      // Display the amount
            printf ("Your Deposit Amount is : %.2f\n\n",fltDeposit);
        }

    }



}

// Function 3
// Withdraw money

void WithdrawMoney()
{
    int    intEnterAccNumber;
    int    intEnterPassword;
    float  fltWithdraw;
    float  fltOldBalance;
    float  fltFinalBalance;
    int    i;

    printf("Enter your Account Number : ");                                                                 // User input
    scanf("%d",&intEnterAccNumber);

    printf("Enter your password       : ");
    scanf ("%d",&intEnterPassword);

    printf ("\n");

    for (i=0 ; i < 100 ; i++)
    {

        if( (intAccountNumber[i] == intEnterAccNumber) && (intpassword[i] == intEnterPassword))             // check the Account Number
        {

            printf ("Your Account is Verified\n");
            printf ("Enter Your Withdraw Amount : ");                                                       // User input
            scanf  ("%f",&fltWithdraw);
            printf ("\n");

            fltOldBalance=fltBalancesAmountArray[i];
            fltFinalBalance = fltOldBalance - fltWithdraw;


            if (fltFinalBalance >= 0)
            {
                printf("Your Withdrawal is SUCCESSFUL\n");
                printf("Your Account Number is : %d\n",intAccountNumber[i]);                                 // print Balance
                printf("Your Withdrawal Amount is : %.2f\n\n",fltWithdraw);
                printf("Your Current Balance is %.2f\n",fltFinalBalance);
            }
             else
            {
                printf("This is insufficient balance in your account");
            }
        }
    }
}





// Function 4
//Check account balance

void CheckAccountBalance()
{

    int    intEnterAccNumber;
    int    intEnterPassword;
    float  fltDeposit;
    float  fltBalance;
    int    i;

    printf("Enter your Account Number : ");
    scanf("%d",&intEnterAccNumber);

    printf("Enter your password       : ");
    scanf ("%d",&intEnterPassword);

    printf ("\n");

    for (i=0 ; i < 100 ; i++)
    {
        if( (intAccountNumber[i] == intEnterAccNumber) && (intpassword[i] == intEnterPassword))                  // check the Account Number
        {
            fltBalance=fltBalancesAmountArray[i];
            printf("Your Account Number is a %d\n",intEnterAccNumber);
            printf("Your Account Balance is %.2f\n",fltBalance);                                                // print Balance
        }
    }
}


// Function 5
// Exit
void Exit()
{
    printf ("Thanks For Banking ! \n\n");                                                                       //Exiting the program
}

