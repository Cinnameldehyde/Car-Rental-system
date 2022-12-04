# project
sdf-1 mini project banking management
//void log_menu(void);                      // login menu[not req]
    User create_acc(User *user);            // new acc to existing list of users
    int exist_acc(User *user);              // login to existing dummy acc; int i

void main_menu(User user);                  // main menu
    int fund_menu(User user);               // fund transfer menu
        int send_money(User user);          // fund transfer sub- send money
        int rec_money(User user);           // fund transfer sub- receive money
    int bill_pay(User user);                // bill n payment
    void card_menu(User user);              // card menu
        void create_card(User user);        // create new card
        void add_card(User user);           // enter existing card
    void cust_support(User user);           // customer support
    void remove_acc(User user);             // remove account
    void log_out(User user);                // log out of current account; end of program

void send_receipt(User user, int  amt, char acc_name2[]);     // receipt
void dep_receipt(User user, int  amt, char acc_name2[]);      // receipt
void logo(void);                            // logo


// Every function calls back to main_menu(i.e. a = 0) except log_out(end of program i.e. a = 1)
// all int functions will return balance

typedef struct{
    char acc_name[30];
    int acc_num;
    char password[20];
    int balance;
}User;

// basic menu box entry view
    printf("\t**********************************************************************\n");
    printf("\t*\t\tWelcome to Fund Transfer: Send money!                *\n");
    printf("\t*____________________________________________________________________*\n");

// clear screen after every panel | user <conio.h>
logo(inserted as much as you can)
                    ₹ ☆ ☆ ☆ ₹ 
                    ☆ ₹   ₹ ☆
                    ☆   ₹   ☆   ☆ Welcome to <Bank_name> !!! ☆
                    ☆ ₹   ₹ ☆
                    ₹ ☆ ☆ ☆ ₹

