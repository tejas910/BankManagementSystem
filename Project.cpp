#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

class bank{
	
	public:
		char name[100],add[100];
		int pho_no;
		int dp_mon;
		int dep;
		int wd;
		int acc_id;
		int a_id;
		void display_bankname()
		{
			cout<<"\t\t\t\t\t******Government Bank Of India******\t\t\t\t\t"<<endl<<endl;
			cout<<endl;
		}
		
		/*void Loading()
		{
			int gd=EGA,gm=EGAHI;
			initgraph(&gd,&gm,"C://TC//BGI");
			outtextxy(200,200,"Loading....");
			rectangle(199,179,350,191);
			for(int i=0;i<150;i++)
			{
				setcolor(3);
				rectangle(200,180,200+i,190);
				delay(100);
			}
		}*/
		void create_account()
		{   
		   cout<<"\tEnter the Account ID:";
		   cin>>acc_id; 
		   cout<<"\tEnter the name:";
		   cin>>name;
		   cout<<endl;
		   cout<<"\tEnte the Address:";
		   cin>>add;
		   cout<<endl;
		   
		   cout<<"\tEnter the Phone Number:";
		   cin>>pho_no;
		 
		   cout<<endl;
		   cout<<"\tEnter the Money You want to Deposite:";
		   cin>>dp_mon;
		   cout<<endl;
		   cout<<"\tThe Available Balance is:"<<dp_mon;
		   cout<<endl;
		   
		}
		void search(){
			cout<<"\tEnter the Account ID For search:";
			cin>>a_id;
			if(a_id==acc_id){
				display_details();
			}
			else{
				cout<<"\tNot Valid!!";
			}
		}
		void deposite(){
	       cout<<endl;
		   cout<<"\tEnter The Money you want to deposite now:";
		   cin>>dep;
		   cout<<endl;
		   dp_mon=dp_mon+dep;
		   cout<<"\tAfter Deposit Money Available Balance is:"<<dp_mon;
			
		}
		void withdrwal()
		{
			cout<<"\tEnter the Amount You want to withdrawal";
			cin>>wd;
			dp_mon=dp_mon-wd;
			cout<<"\tAfter Withdrwal Available balace is"<<dp_mon;
			
			
			
		}
		
		void display_details(){
			cout<<"\n"<<"\tAccount ID:"<<acc_id<<endl;
			cout<<"\tName:"<<name<<endl;
			cout<<"\tAddress:"<<add<<endl;
			cout<<"\tPhone No:"<<pho_no<<endl;
			cout<<"\tAvailable Balance:"<<dp_mon<<endl;
		}
		void Money_transfer()
		{    
			cout<<"\tEnter The account number From which you want to take Money:";
		}
	
	
};

int main()
{   int ch;
	
	system("COLOR A");
	bank b;
	
	    b.display_bankname();
	    int USERNAME1=1234,PASSWORD1=4567;
    int USERNAME2,PASSWORD2;
    
    cout<<"\n\n\n\t\t\t\t\t\tBANK LOGIN\n\n\n\t\t\t\t\t";
    cout<<"\n\n\t\t\t\t\tENTER THE USERNAME:";
    cin>>USERNAME2;
    cout<<"\n\n\t\t\t\t\tENTER THE PASSWORD:";
    cin>>PASSWORD2;
     if(USERNAME1==USERNAME2&&PASSWORD1==PASSWORD2){
	 

	    do{
		cout<<endl;
		cout<<"\n1: Create Account"<<endl;
		cout<<"2: Deposit Money"<<endl;
		cout<<"3: Withdrawal Money"<<endl;
		cout<<"4: Display Details"<<endl;
		cout<<"5: Search Record"<<endl;
		cout<<"6: Exit"<<endl;
		cout<<"Enter the Choice";
		cin>>ch;
		switch(ch)
		{
			case 1:
			b.create_account();	
			break;
			
			case 2:
			b.deposite();	
			break;	
			
			case 3:
			b.withdrwal();			
			break;	
			
			case 4:
            b.display_details();
			break;	
			
			case 5:
				b.search();
				break;
			case 6:
				exit(0);
		}
}while(ch!=5);
}
else{
	cout<<"\n\t\tYou Have entered Wrong Password, Sorry";
}
	
	

	
	return 0;
}
