
//7.	Write a program to find the largest and smallest element in an integer array?

#include<iostream>
using namespace std;

int main()
{
	int num[5] = { 25, 10, 56, 43, 7 };
  int variable = 0;
  int contador=0;
  
  for(int i=0; i<5; i++)
    {
      if ( num[i] < num[i+1] ){
           variable = num[i];
      }
      
    }
        if( variable > num[5-1] ){
          variable = num[5-1];
        }
      cout<<"the smaller number is: "<<variable<<endl;
       	
	return 0;
}
