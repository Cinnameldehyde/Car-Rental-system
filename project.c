#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Declaring typedef struct User
typedef struct{
    char acc_name[30];
    int acc_num;
    char password[20];
    int balance;
}User;

// Declaring functions
//void log_menu(void);            // login menu
    User create_acc(User *user);    // new acc to existing list of users
    int exist_acc(User *user);      // login to existing dummy acc; int i
void main_menu(User user);     // main menu
    int fund_menu(User user);      // fund transfer menu
        int send_money(User user);     // fund transfer sub- send money
        int rec_money(User user);      // fund transfer sub- receive money
    int bill_pay(User user);       // bill n payment
    void card_menu(User user);     // card menu
        void create_card(User user);        // create new card
        void add_card(User user);           //   enter existing card
    void cust_support(User user);  // customer support
    void remove_acc(User user);    // remove account
    void log_out(User user);       // log out of current account; end of program
void receipt(User user);


int main(void)
{
    int option = 0, a = 0;
    User user1 = {"ABC", 1234567890, "master_key", 25000}; // Dummy
    User user2 = {"DEF", 1987654321, "master_key", 10000}; // Dummy
    User users[] = {user1, user2};
    int i = 1; //sizeof(users)/sizeof(users[0]);

    // Login menu
    printf("\t**********************************************************************\n");
    printf("\t*\t\tWelcome to Banking Management System!                *\n");
    printf("\t*\t\t\t     Login Menu                              *\n");
    printf("\t*____________________________________________________________________*\n");
    printf("\t*\t1 = \tCreate a new account                                 *\n");
    printf("\t*\t2 = \tLog in(if existing user)                             *\n");
    printf("\t**********************************************************************\n");

    // User input
    do{
        printf("\t\t\t\tChoose your option: ");
        scanf("%d", &option);
        if(option < 0 || option > 3)
            printf("\t\t\tInvalid input !! Try again!\n");
    }while(option < 0 || option > 3);
    printf("\n\n");

    switch(option)
    {
        case 1:
            users[i] = create_acc(users); // returns struct user
            break;
        case 2:
            i = exist_acc(users); // returns index in users array
            break;
    }
    //printf("login done\n");

    main_menu(users[i]);
    return 0;
}

// defining functions
//in  create account we'll take all the details right? mother father name bhi lena hai kya 

//yeah saari leni hai. ek final screen bana kr sab display bhi kar denge but 
//record keval name, password balance hi karte hain

// haan okay okay
// chal will do it by today...create account and hatane waala toh ho jaana chahiye aaj
//baaki history waala kar rha hoon try...ho jaayega most probably

// okk as you wish. listen ye live share hai. to is pure code ki ek copy paste kar le.
// usi c project.file mein hi kar le. kuch edits kari hongi ig.
// rest main iske aage aaj to  kuch ni add krungi. too much pending shit 

// haan ok

// band kar dun session??

// idk...dekh le...band karne se if I code here toh save ho toh jaayega hi na?

// arre i mean ki ye session band karne se ye window band ho jayegi. so you will
// need to make a copy of this whole thing and do it in your own IDE. 
// ur using codeblocks?

// yup but this is more cool toh haan band karde...i ll 

// XD arre just google vs code desktop download. official website se download kar le
// sending u link   ok cool 

// Create account
User create_acc(User *user) // takes input for acc_name, acc_num, password,  yeah got it 
{
    User user1 = {"Hello", 1234456677, "master_key", 210000}; // Dummy
    return user1;
}

// Login to existing account
int exist_acc(User *user)
{
    return 0;
}

// Main menu
void main_menu(User user)
{
    int option;
    printf("bal%d\n", user.balance);
    printf("\n\n\t**********************************************************************\n");
    printf("\t*\t\tWelcome to Banking Management System!                *\n");
    printf("\t*\t\t\t      Main Menu                              *\n");
    printf("\t*____________________________________________________________________*\n");
    printf("\t*\t1 = \tFund transfer.                                       *\n");
    printf("\t*\t2 = \tOnline payments and billing.                         *\n");
    printf("\t*\t3 = \tCards.                                               *\n");
    printf("\t*\t4 = \tCustomer support.                                    *\n");
    printf("\t*\t5 = \tRemove your existing bank account.                   *\n");
    printf("\t*\t6 = \tLog out.                                             *\n");
    printf("\t**********************************************************************\n");

    // Taking user input
    do{
        printf("\t\t\t\tChoose your option: ");
        scanf("%d", &option);
        if(option < 0 || option > 7)
            printf("Invalid input !! Try again!\n");
    }while(option < 0 || option > 7);
    printf("\n\n");

    switch(option)
    {
        case 1:
            user.balance = fund_menu(user);
            break;
        case 2:
            user.balance = bill_pay(user);
            break;
        case 3:
            card_menu(user);
            break;
        case 4:
            cust_support(user);
            break;
        case 5:
            remove_acc(user);
            break;
        case 6:
            log_out(user);
            break;
    }
    main_menu(user);
}

// Fund menu
int fund_menu(User user)
{
    int option = 0, balance = user.balance;
    printf("\n\t**********************************************************************\n");
    printf("\t*\t\tWelcome to Fund transfer: Master Menu!               *\n");
    printf("\t*____________________________________________________________________*\n");
    printf("\t*\t1 =\tSend money                                           *\n");
    printf("\t*\t2 =\tReceive money                                        *\n");
    printf("\t**********************************************************************\n");

    // User input
    printf("\t\t\t\tEnter your choice: ");
    do{
        scanf("%d", &option);
        if(option < 0 || option > 3)
            printf("\t\t\tInvalid input!! Try again!\n");
    }while(option < 0 || option > 3);
    printf("\n\n");
// yo
    switch(option)
    {
        case 1:
            balance = send_money(user);
            break;
        case 2:
            //balance = rec_money(user);
            break;
    }
    return balance; 
}

// Send money
int send_money(User user)
{
    long int ben_acc = 0;
    int amount = 0, option = 0, balance = user.balance;
    char ben_name[25], ans, pass[20];
    printf("\t**********************************************************************\n");
    printf("\t*\t\tWelcome to Fund Transfer: Send money!                *\n");
    printf("\t*____________________________________________________________________*\n");
    printf("\t*\tEnter 12 digit beneficiary account number: ");
    scanf("%li", &ben_acc);
    printf("\t*\tEnter beneficiary name: ");
    scanf("%s", ben_name);
    printf("\t*\tEnter amount(in Rupees): ");
    scanf("%d", &amount);
    printf("\t**********************************************************************\n");
    printf("\t\t Modes of payment:\n");
    printf("\t\t*************************\n");
    printf("\t\t*\t1 =\tIMPS\t*\n");
    printf("\t\t*\t2 =\tNEFT\t*\n");
    printf("\t\t*\t3 =\tRTGS\t*\n");
    printf("\t\t*************************\n");
        do{
            printf("\tSelect your mode of payment: ");
            scanf("%d", &option);
            if(option < 0 || option > 4)
                printf("\t\t\tInvalid input!! Try again!\n");
        }while(option < 0 || option > 4);
    printf("\t%s", user.password);
    getchar();
    printf("\n\tEnter your password: ");
    gets(pass);
    if(strcmp(pass,user.password) == 0)
    {
        switch(option)
        {
            case 1:
                if(amount >= 1 && amount <= 200000)
                {
                    if((balance-amount) >= 0)
                    {
                        balance -= amount;
                        printf("\t\t\tTransaction successfully completed!!\n");
                        printf("\t\t\tNew balance\t= Rs. %12d\n", balance);
                        printf("\t\t\tAmount deducted\t= Rs. %12d\n",amount);
                        printf("\t\tDo you want to print receipt? (y/n): ");
                        scanf("%c", &ans);
                        if(ans == 'y')
                            receipt(user);
                    }
                    return balance;
                    break;
                }
            case 2:
                if(amount >= 1)
                {
                    if((balance-amount) >= 0)
                    {
                        balance -= amount;
                        printf("\t\t\tTransaction successfully completed!!\n");
                        printf("\t\t\tNew balance\t= Rs. %12d\n", balance);
                        printf("\t\t\tAmount deducted\t= Rs. %12d\n",amount);
                        printf("\t\tDo you want to print receipt?(y/n): ");
                        scanf("%c", &ans);
                        if(ans == 'y')
                            receipt(user);
                    }
                    return balance;
                    break;
                }
            case 3:
                if(amount >= 200000)
                {
                    if((balance-amount) >= 0)
                    {
                        balance -= amount;
                        printf("\t\t\tTransaction successfully completed!!\n");
                        printf("\t\t\tNew balance\t= Rs. %12d\n", balance);
                        printf("\t\t\tAmount deducted\t= Rs. %12d\n",amount);
                        printf("\t\tDo you want to print receipt? (y/n): ");
                        scanf("%s", &ans);
                        if(ans == 'y')
                            receipt(user);
                    }
                    return balance;
                    break;
                }
            default:
                printf("\t\t\tTransaction failed!! Try again!\n");
                break;
        }
    }
    else
        printf("\t\t\tTransaction failed!! Try again!\n");
    return balance;
}

int bill_pay(User user)     // Pay your bills online
{
    printf("pay ur bill\n"); 
    return user.balance;
}

void card_menu(User user)         // card menu
{
    printf("cardss\n"); 
}

void create_card(User user)       //create new card
{
    printf("Add new card\n"); 
}

void add_card(User user)          //add existing card
{
    printf("Add exisiting card\n"); 
}

void cust_support(User user) // Customer support
{
    printf("customer support\n"); 
}

 void remove_acc(User user)   // Remove your bank account
{
    printf("remove acc\n"); 
}

void log_out(User user)      // Log out of current session
{
    printf("log out\n");
    exit(0); // exit out of program completely
}

void receipt(User user)
{
    printf("\treceipt\n");
}