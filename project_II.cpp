#include<iostream>
#include<conio.h>
#include<Windows.h>// for the use of system function
#include<stdio.h>//printf
#include<fstream>//file handling
using namespace std;

class menu{
	
	char name[70];
	int id;
	string address;
	int opt;
	char op;
	
		//utility function	
	  void waitForEnter(void){
            cout<<"\n\n\n Press enter to go back \n\n";
            cin.get();
            cin.get();
        }
        
        // yes and no 
        
//        void yn(void)
//        {
//        	if(ch==y)
//        	{
//        		
//			}
//			
//		}

		void details()
	{
		system("cls");
		cout<<"Enter the first name id and address"<<endl;
		cin>>name>>id>>address;
		ofstream myFile("data.txt");
		myFile<<"Name,id,address";
		myFile<<name<<" "<<id<<" "<<address;
		
		cout<<"Any more data[y/n]";
		cin>>op;
		
		if(op=='y')
		{
			return details();
		}
		else{
				myFile.close();
		}
		
	
//		string content;
//		ifstream readFile("data.txt");
//		while(readFile.eof()==0)
//		{
//			getline(readFile,content);
//			cout<<content;
//		}
		waitForEnter();
	}
	
	void show()
	{
		string content;
		ifstream readFile("data.txt");
		while(readFile.eof()==0)
		{
			getline(readFile,content);
			cout<<content;
		}
		while(op=='y');
		waitForEnter();
		getch();
	}	
	
	void insert()
	{
		system("cls");
		cout<<"Add the new employee details"<<endl;
		cout<<"Enter the name age and address"<<endl;
		cin>>name>>id>>address;
		ofstream myFile("data.txt");
		myFile<<"Name,id,address";
		myFile<<name<<" "<<id<<" "<<address;
		myFile.close();
		
	}
	
	
		public:
	
	void choice(){
		
		cout<<"----------------------------------------------------------"<<endl;
		cout<<"                       WELCOME TO MENU                    "<<endl;
		cout<<"----------------------------------------------------------"<<endl;
		cout<<endl;
		
		cout<<"Enter 1   To add the details of the employees"<<endl<<endl;
		cout<<"Enter 2   To view the details of the employees"<<endl<<endl;
		cout<<"Enter 3   To add the new employee details"<<endl<<endl;
		
		cin>>opt;
		
		switch(opt)
		{
			case 1:
				details();
				break;
			case 2:
				show();
				break;
			case 3:
				insert();
				break;
			default:
				cout<<"NOT appropriate selection";
				break;
		}
		
		waitForEnter();
	
	
	
	}	
		
};


int main()
{
//	system("COLOR 0e");
//	system("cls");
//	printf("\e[?25l");//cheatcode to remove the cursor from the loading bar
//	
//	//set ASCII to print special character
//	//code page 437
//	
//	SetConsoleCP(437);//set console to the code page 437 
//	SetConsoleOutputCP(437);
//	
//	int bar1 = 177, bar2=219;
//	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t Loading...";
//	cout<<"\n\n\n\n\n\t\t\t\t\t";
//	
//	for(int i=0;i<25;i++)
//	cout<<(char)bar1;
//	cout<<"\r";//carrige return type to overwrite the character previously written on
//	cout<<"\t\t\t\t\t";
//	for(int i=0;i<25;i++)
//	{
//		cout<<(char)bar2;
//		Sleep(160);//in milisecond (delay)
//	}
//	
//	cout<<"\n\n\t\t\t\t\t"<<(char)1 <<"!";
//	system("pause");
	
	menu me;//object declaration
	me.choice();
	


}

