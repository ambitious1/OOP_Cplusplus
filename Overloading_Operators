/*
Travis D.
CS 391
Object Oriented Programming
Overloading Operators
*/

#include<iostream>
#include<cmath>

//ordered pair operator overloading
using namespace std;

class OrdPair{
public:
  OrdPair( float, float);
  bool operator==(const OrdPair& ) const; //function prototype
  void operator+(const OrdPair& );
  void operator*(const OrdPair& );
  void operator%(const OrdPair& );
  void operator-(const OrdPair& );
  void operator&(const OrdPair& );
  void operator|(const OrdPair& );
  void operator||(const OrdPair& );
    
private:
  float p1, p2, n1, n2, n3, n4, n5, n6;
}; //class ends


OrdPair::OrdPair( float f1 , float f2 ) {
    p1 = f1;  //p1 is -54
    p2 = f2;  //p2 is 3
  }

bool OrdPair::operator==(const OrdPair& s2) const {
  return (p1 == s2.p1 && p2 == s2.p2);
}
void OrdPair::operator*(const OrdPair& s2) {
  n1 = p1 * s2.p1;
  n2 = p2 * s2.p2;
  cout << "\n\n\tThe product ordered pair is: (" << n1 << "," << n2 << ")" << endl;
  return;
}

void OrdPair::operator+(const OrdPair& s2) {
     
    n1 = p1 + s2.p1;
    n2 = p2 + s2.p2;
    cout << "\n\nThe sum ordered pair is: (" << n1 << "," << n2 << ")" << endl; 
    return; }

void OrdPair::operator%(const OrdPair& s2){
       
       n2 = s2.p2 - p2;
       n1 = s2.p1 - p1;
       n3 = n2/n1;
      cout<<"\n\nThe slope of the ordered pairs is: "<<n3<<"."<<endl;
       return;
       }

void OrdPair::operator-(const OrdPair& s2){
     
     n1 = p1 - s2.p1;
     n2 = p2 - s2.p2;
     
     cout<<"\n\nThe difference of the following ordered pairs are:("<<n1<<","<<n2<<").\n"<<endl;    
     return;
     }
     
void OrdPair::operator&(const OrdPair& s2){
       n4=0;
     
       n2 = s2.p2 - p2;
       n1 = s2.p1 - p1;
       n3 = n2/n1;
       
       n4 = p2 - (n3*p1);
       
       cout<<"\nThe y-intercept of the order pairs is: "<<n4<<".\n"<<endl;

       cout<<"\nThe equation of the line is: ("<<n3<<"*"<<p1<<")"<<"+"<<n4<<".\n"; 
     return;
     }     
     
void OrdPair::operator|(const OrdPair& s2){
     
     cout<<"\n\nThe coordinates that we will use for further caluclations\n";
     cout<<"are the following: ("<<p1;
     
     cout<<","<<p2<<")"<<" and ("<<s2.p1<<","<<s2.p2<<")\n\n";
     
     return;
     }     
          
void OrdPair::operator||(const OrdPair& s2){
       n3=0;

       n2 = s2.p2 - p2;
       n1 = s2.p1 - p1;
       
       n5= n2*n2;
       n6= n1*n1;
       
       n3 = sqrt((n6)+(n5));
     
       cout<<"\n\nThe magnitude of the line is: "<< n3 <<endl<<endl;
       
     return;     
     }     
;
int main()
{ 
  
  float f1;
  float f2;
  float f3;
  float f4;


 cout<<"\t\t\n\n***** Operator Overloading using Ordered Pairs ****\n\n";


cout<<"\n\nPlease enter the x for the first ordered pair: ";

cin>>f1;

cout<<"\n\nPlease enter the y for the first ordered pair: ";

cin>>f2;

cout<<"\n\nPlease enter the x for the second ordered pair: ";

cin>>f3;

cout<<"\n\nPlease enter the y for the second ordered pair: ";

cin>>f4;


OrdPair s1(f1, f2), s2(f3,f4);
  //if(s1.operator==(s2))
   // or can use 

  
  s1|s2;
  
  cout<<"\n";
  
   if (s1 == s2) 
    cout << "The coordinates are equal." << endl;
  else 
    cout<< "The coordinates are not equal." << endl;
  // s1.operator+(s2);
   
   s1+s2;
   s2%s1;
   s1-s2;
   s1&s2;
   s1||s2;
   s1*s2;  // or could have used s1.operator*(s2);
   /*You can only write it in this form when it's in the main function*/
  
  system ("PAUSE");
  return 0;
}
