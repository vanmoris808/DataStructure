#include <time.h>
#include <cstdlib>
#include <stdlib.h>
#include <cassert>
#include <set>
#include <iostream>                  
#include <fstream>                   
#include <string>
using namespace std;


int main()
{   
   srand(time(0)); 
   multiset<string> choresGalore;
   multiset<string> ::iterator choresIT;
   
   string line;

   ifstream fin;                  

   fin.open("chores.txt");       

   if(fin.is_open())
   {     
			while (fin.good()) 

            {

                  getline(fin, line);   //read a line from file

                  choresGalore.insert(line);
                  
                  
			}

            fin.close();               

	}

   else
   {

            cout << "Error trying to open the file or file does not exist";
            exit(1);
	}

  
	bool exit_menu=false;
	int user_option=0;
		
		
		do
		{
			cout<<"What do you want to do?"<<endl;
			
			cout<<"1) Add an item to the list"<<endl;

			cout<<"2) Ask how many chores are in the list"<<endl;

			cout<<"3) Print the list of chores"<<endl;

			cout<<"4) Delete an item from the list"<<endl;

            cout<<"5) Exit the program"<<endl;
            
            cin>>user_option;
            string newChore;
            string delChore;
            			
			switch(user_option)
			{
				case 1:
					cout<<"Adding chore..."<<endl;
					cin.ignore();					
					getline(cin, newChore);
					choresGalore.insert(newChore);
					break; 
				case 2:
					cout<<"How many chores so far:"<<endl;
					cout<<choresGalore.size()-1;
					cout<<""<<endl;
					break;
				case 3:
					cout<<"Here's the list!"<<endl;
					for(choresIT=choresGalore.begin();choresIT!=choresGalore.end();choresIT++)
					{
						cout<<*choresIT<<endl;
						}
					cout<<endl;	
					break;
				case 4:
					cout<<"Delete which one?"<<endl;
					cin.ignore();
					getline(cin, delChore);
					for(choresIT=choresGalore.begin();choresIT!=choresGalore.end();choresIT++)
					{
						if(delChore==*choresIT)
						{
						choresGalore.erase(choresIT);
						}
					}
					
					break;
				case 5:
				    cout<<"Goodbye!"<<endl;
				    exit_menu=true;
				    break;	
				default:
					cout<<"Did you read my fancy message correctly?!?!"<<endl;
					break;
			}
		}while(!exit_menu);
	
		
		ofstream in;
		in.open("chores.txt");
		
		if(in.is_open())
   {     
			for(choresIT=choresGalore.begin();choresIT!=choresGalore.end();choresIT++)
    
            {
                  in<<*choresIT<<endl;
             
            }

            in.close();               

	}

   else

            cout << "Error trying to open the file or file does not exist";


		return 0;
    }
    
   
