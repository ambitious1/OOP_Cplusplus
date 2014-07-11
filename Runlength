/*
Travis D.
CS 357
Object Oriented Programming
Run Length Encoding
*/


#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>


using namespace std;
/*Binary Values of the numbers 0-15*/
string zero= "0000";
string one= "0001";
string two= "0010";
string three= "0011";
string four= "0100";
string five= "0101";
string six= "0110";
string seven= "0111";
string eight= "1000";
string nine= "1001";
string ten= "1010";
string eleven= "1011";
string twelve= "1100";
string thirteen= "1101";
string fourteen= "1110";
string fifteen= "1111";


int char_to_integer(char c)/*function used to convert a char into an to an integer*/
{
int ia = c - '0';
return ia;
}

const string dollar= "10110101";/*constant value for the dollar sign since all char will incorporate this*/
const string prefix= "1111";/*arbitrary constant prefix since all char will have this*/

class HalfByte
{
public:
    HalfByte(string str){ var = str; }/*1 parameter constructor, 
    automatically takes the user's input into the function*/
    string Encode()
{
   // cout << "here" << endl;	/*debugg statement to see if function is being called*/
	vector<int> numbers;/*use a dynamic array (vector) to input the encoded 
    value of the string since a person's input can have a variable length*/
	
	for(int i = 0; i < var.size(); i++)/*This counts how many times a char appears*/
	{
		numbers.push_back(char_to_integer(var[i]));/*Adds a new element to the vector where it can be further converted*/
	}
   
    string var2 = "";/*initialize the frst element of the string variable that  is inputed */
    
    var2 += dollar;/*this automatically adds the doolar sign*/

    var2 += prefix;/*Then after it adds the prefix*/

    /*This converts the amount of times a number appears into its
     respective string value wich then can be converted into it's binary form*/     
         if(var.size()==0)
    	   var2 += zero;
    	else if(var.size() == 1)
    	   var2 += one;
    
	else if(var.size() == 2)
    	   var2 += two;
    	else if(var.size() == 3)
    	   var2 += three;
    	else if(var.size() == 4)
    	   var2 += four;
    	else if(var.size() == 5)
    	   var2 += five;
    	else if(var.size() == 6)
    	   var2 += six;
    	else if(var.size() == 7)
    	   var2 += seven;
    	else if(var.size() == 8)
    
	   var2 += eight;
    	else if(var.size() == 9)
    	   var2 += nine;
    	else if(var.size() == 10)
    	   var2 += ten;
    	else if(var.size() == 11)
    	   var2 += eleven;
    	else if(var.size() == 12)
    	   var2 += twelve;
    	else if(var.size() == 13)
    	   var2 += thirteen;
    	else if(var.size() == 14)
    	   var2 += fourteen;
    	else if(var.size() == 15)
    	   var2 += fifteen;
    
    /*this converts the each digit to is respective string value which then
     can be converted into it's binary form*/

    for(int i = 0; i < numbers.size(); i++)
    {
    
	if(numbers[i] == 0)
    	   var2 += zero;
    	else if(numbers[i] == 1)
    	   var2 += one;
    	else if(numbers[i] == 2)
    	   var2 += two;
    	else if(numbers[i] == 3)
    	   var2 += three;
    	else if(numbers[i] == 4)
    	   var2 += four;
    	else if(numbers[i] == 5)
    	   var2 += five;
    	else if(numbers[i] == 6)
    	   var2 += six;
    	else if(numbers[i] == 7)
    	   var2 += seven;
    	else if(numbers[i] == 8)
    	   var2 += eight;
    	else if(numbers[i] == 9)
    	   var2 += nine;
    	   
    }

	return var2;
}
    
private:
    string var;
};

int main()
{   

string input;
cout<<"Please enter a string of integers in which you want to be half-byte length \n\nencoded: \n\n";
    cout<<"\n";
    cin>>input;
    
    HalfByte object1(input);
    cout<<"\n\n"<<object1.Encode()<<"\n\n";
    
    system("pause");

}
