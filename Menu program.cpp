#include <iostream>
using namespace std;

int main() {
    string validUsername="mariawanuh", validPassword="maryjane", username, password;
    int usernameTries=5, passwordTries=5;
    bool usernameCorrect=false, passwordCorrect=false;

    cout<<"========================================\n";
    cout<<"         SECURE ACCESS SYSTEM           \n";
    cout<<"========================================\n";

    while(usernameTries>0 && !usernameCorrect){
        cout<<"Enter Username: "; cin>>username;
        if(username==validUsername) usernameCorrect=true;
        else { usernameTries--; cout<<"[ERROR] Username not recognized. "<<usernameTries<<" tries left.\n"; if(usernameTries==0) return 0; }
    }

    while(passwordTries>0 && !passwordCorrect){
        cout<<"Enter Password: "; cin>>password;
        if(password==validPassword) passwordCorrect=true;
        else { passwordTries--; cout<<"[ERROR] Incorrect password. "<<passwordTries<<" tries left.\n"; if(passwordTries==0) return 0; }
    }

    cout<<"\n************** ACCESS GRANTED **************\n";

    char adminChoice;
    cout<<"Access admin settings? (y/n): "; cin>>adminChoice;
    if(adminChoice=='y'||adminChoice=='Y') cout<<">>> Admin unlocked! <<<\n";
    else cout<<">>> Limited access granted <<<\n";

    int programChoice;
    do {
        cout<<"\n========================================\n";
        cout<<"           MINI APPS DASHBOARD          \n";
        cout<<"========================================\n";
        cout<<"1. Foodie Corner (Menu & Ordering)\n";
        cout<<"2. Voting Booth (Polls & Voting)\n";
        cout<<"Select an app: "; cin>>programChoice;
        if(programChoice<1 || programChoice>2) cout<<"[ERROR] Invalid selection. Try again.\n";
    } while(programChoice<1 || programChoice>2);

    string foods[5]={"Cheese Burger Deluxe","Spicy Chicken Wings","Vegan Salad Bowl","Grilled Salmon Rice","Beef Tapa with Egg"};
    double foodPrices[5]={150,180,120,220,200};
    int foodStock[5]={10,8,12,5,7};

    string drinks[5]={"Mango Smoothie","Iced Latte","Chocolate Milkshake","Coconut Water","Strawberry Lemonade"};
    double drinkPrices[5]={90,85,110,70,95};
    int drinkStock[5]={10,10,10,10,10};

    string desserts[5]={"Chocolate Brownie","Crepe with Ice Cream","Fruit Parfait","Cheesecake Slice","Macaron Set (3 pcs)"};
    double dessertPrices[5]={100,120,95,150,130};
    int dessertStock[5]={5,6,8,4,7};

    string purchasedItems[50]; int purchasedQty[50]; double purchasedTotal[50]; int purchasedCount=0;

    if(programChoice==1){
        int mainChoice, subChoice, quantity; char addAnother;
        double totalPrice=0; bool invalidChoice;

        cout<<"\n----------------- FOODIE CORNER -----------------\n";

        do{
            invalidChoice=false;
            do {
                cout<<"1. Foods\n2. Drinks\n3. Desserts\nChoose category: "; cin>>mainChoice;
                if(mainChoice<1 || mainChoice>3) cout<<"[ERROR] Invalid category. Try again.\n";
            } while(mainChoice<1 || mainChoice>3);

            switch(mainChoice){
                case 1:
                    cout<<"--- FOODS ---\n";
                    for(int i=0;i<5;i++) cout<<i+1<<". "<<foods[i]<<" | P"<<foodPrices[i]<<" | Stock:"<<foodStock[i]<<endl;
                    break;
                case 2:
                    cout<<"--- DRINKS ---\n";
                    for(int i=0;i<5;i++) cout<<i+1<<". "<<drinks[i]<<" | P"<<drinkPrices[i]<<" | Stock:"<<drinkStock[i]<<endl;
                    break;
                case 3:
                    cout<<"--- DESSERTS ---\n";
                    for(int i=0;i<5;i++) cout<<i+1<<". "<<desserts[i]<<" | P"<<dessertPrices[i]<<" | Stock:"<<dessertStock[i]<<endl;
                    break;
            }

            do {
                cout<<"Choice: "; cin>>subChoice;
                if(subChoice<1 || subChoice>5) cout<<"[ERROR] Invalid item. Try again.\n";
            } while(subChoice<1 || subChoice>5);

            do {
                cout<<"Quantity: "; cin>>quantity;
                if(mainChoice==1 && quantity>foodStock[subChoice-1]) cout<<"[ERROR] Only "<<foodStock[subChoice-1]<<" left.\n";
                if(mainChoice==2 && quantity>drinkStock[subChoice-1]) cout<<"[ERROR] Only "<<drinkStock[subChoice-1]<<" left.\n";
                if(mainChoice==3 && quantity>dessertStock[subChoice-1]) cout<<"[ERROR] Only "<<dessertStock[subChoice-1]<<" left.\n";
            } while((mainChoice==1 && quantity>foodStock[subChoice-1])||(mainChoice==2 && quantity>drinkStock[subChoice-1])||(mainChoice==3 && quantity>dessertStock[subChoice-1]));

            switch(mainChoice){
                case 1:
                    foodStock[subChoice-1]-=quantity;
                    purchasedItems[purchasedCount]=foods[subChoice-1]; break;
                case 2:
                    drinkStock[subChoice-1]-=quantity;
                    purchasedItems[purchasedCount]=drinks[subChoice-1]; break;
                case 3:
                    dessertStock[subChoice-1]-=quantity;
                    purchasedItems[purchasedCount]=desserts[subChoice-1]; break;
            }
            purchasedQty[purchasedCount]=quantity;
            purchasedTotal[purchasedCount]=(mainChoice==1?foodPrices[subChoice-1]:(mainChoice==2?drinkPrices[subChoice-1]:dessertPrices[subChoice-1]))*quantity;
            purchasedCount++;
            cout<<quantity<<" x "<<purchasedItems[purchasedCount-1]<<" added.\n";

            cout<<"Order another item? (y/n): "; cin>>addAnother;
        } while(addAnother=='y'||addAnother=='Y');

        cout<<"\n=================== YOUR ORDER ===================\n";
        double grandTotal=0;
        for(int i=0;i<purchasedCount;i++){
            cout<<purchasedQty[i]<<" x "<<purchasedItems[i]<<" = P"<<purchasedTotal[i]<<endl;
            grandTotal+=purchasedTotal[i];
        }
        cout<<"--------------------------------------------------\nTOTAL: P"<<grandTotal<<"\n==================================================\n";
    }
    else if(programChoice==2){
        int voteChoice; int votes[3]={0,0,0};
        cout<<"\n------------------ VOTING BOOTH ------------------\n";
        do {
            cout<<"1. K-Drama\n2. K-Pop\n3. Korean Food\nVote (1-3): "; cin>>voteChoice;
            if(voteChoice<1 || voteChoice>3) cout<<"[ERROR] Invalid vote. Try again.\n";
        } while(voteChoice<1 || voteChoice>3);
        votes[voteChoice-1]++;
        cout<<"Thank you!\nK-Drama: "<<votes[0]<<" | K-Pop: "<<votes[1]<<" | Korean Food: "<<votes[2]<<endl;
    }

    cout<<"\nProgram ended. Thank you!\n";
    return 0;
}
