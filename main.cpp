
//7.	Write a program to find the largest and smallest element in an integer array?

#include<iostream>
using namespace std;

int main()
{
	int num[5] = { 25, 10, 56, 43, 7 };
  int variable = 0;
  int variable_2=0;
 
  variable = num[0];
  for(int i=1; i<5; i++)
    {
      if ( num[i] < variable ){
           variable = num[i];
            }    
    }
      cout<<"the smaller number is: "<<variable<<endl;    	

  variable_2 = num[0];
  for(int i=1; i<5; i++)
    {
      if ( num[i] > variable_2 ){
           variable_2 = num[i];
            }    
    }
      cout<<"the largest number is: "    <<variable_2<<endl;    	 
	return 0;
}
