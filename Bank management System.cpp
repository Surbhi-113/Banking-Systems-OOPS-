#include <iostream>
#include<conio.h>
using namespace std;
 class bank{
 	char name[100],add[100],y;
 	int balance;
 	public:
 		void open_account();
 		void deposit_money();
 		void withdraw_money();
 		void display_account();
 };
 void bank::open_account(){
 	cout<<"Enter your full name ::";
 	cin.ignore();
 	cin.getline(name,100);
 	cout<<"Enter your address :";
 	cin.ignore();
 	cin.getline(add,100);
 	cout<<"What type of account do you want to open? Saving(s) or current(c)";
 	cin>>y;
 	cout<<"Enter amount for deposit:";
 	cin>>balance;
 	cout<<"Your account has been created.";
 }
 void bank::deposit_money(){
 	int a;
 	cout<<"Enter the amount to be deposited";
 	cin>>a;
 	balance+=a;
 	cout<<"Total balance : \t"<<balance;
 	
 }
 void bank::display_account(){
 	cout<<"Your full name: \t "<<name;
 	cout<<"Your address: \t "<<add;
 	cout<<"Type of account that you have opened: \t "<<y;
 	cout<<"Amount that you have deposited: \t "<<balance;
 }
 void bank::withdraw_money(){
 	float amount;
 	cout<<" Withdraw \n";
 	cout<<" Enter the amount to be withdraw:";
 	cin>>amount;
 	balance-=amount;
 	cout<<"Amount left:"<<balance;	
 }
int main() {
    // Write C++ code here
    int ch,x;
    bank obj;
    do{
	
   cout<<"1) Open account \n";
	cout<<"2) Deposit money \n";
	cout<<"3) Withdraw money\n";
	cout<<"4) Display account \n";
	cout<<"5) Exit \n" ;
	cout<<"Select the option from the above sections:";
	cin>>ch;
	switch(ch){
		case 1:
		cout<<"1)Open account \n";
		obj.open_account();
		break;
		case 2:
		cout<<"2)Deposit money \n";
		obj.deposit_money();
		break;
		case 3:
		cout<<"3)Withdraw money: \n";
		obj.withdraw_money();
		break;
		case 4:
		cout<<"4)Display account \n";
		obj.display_account();
		break;
		case 5:
			if(ch==5){
				exit(1);
			}
			default:
				cout<<"This option doesn't exist. Pleasr Try Again!! \n";
	}
	cout<<"Do you want to choose next option? If yes then press :: y \n";
	cout<<"If No then press::N";
	x= getch();
	if(x=='n'||x=='N')
		exit(0);
	}
	while(x=='y'||x=='Y');
	getch();

    return 0;
}

