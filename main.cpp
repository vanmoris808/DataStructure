/* 
 * File:   main.cpp
 * Author: ahmeddiallo
 *
 * Created on September 8, 2015, 11:42 PM
 */

#include <iostream>

#include<string>

using namespace std;

/*
 * 
 */

void intersection(int [], int [], int, int);

const int SIZE = 3;

int main() 
{
    
    int a1[SIZE], a2[SIZE];
    int i, j;
    
    srand(time(0));
   
    for(int a=0; a<SIZE; a++)
    {
        int x=rand()%10;
        a1[x] = x;
        int y=rand()%10;
        a2[y] = y;
        
        cout<<"first array: ";
        cout<<a1[x]<<endl;
    
        
        cout<<"second array: ";
        cout<<a2[y]<<endl; 
        intersection(a1, a2, x, y);
    }
    
    return 0;
}
    void intersection(int a1[], int a2[], int i, int j)
    {
        
        for (int c = 0; c < SIZE; c++)
        {
            for(int b = 0; b < SIZE; b++)
            {
                if (a1[i] == a2[j])
                {
                    cout<<a1[i];
                    cout<<a2[j];
                
                }
                
            }
        }
    }


