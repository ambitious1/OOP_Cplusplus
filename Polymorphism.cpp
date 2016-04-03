/*
Travis D.
CS 391
Object Oriented Programming-C++
Polymorphism
*/


#include <cstdlib>
#include <iostream>
#include <iomanip>


using namespace std;

class geometricobject { //baseclass
public:
virtual void geo(){
cout <<"Just a geometric object" << endl;} 
};

class rectangle : public geometricobject { //derived class
public: 
virtual void geo( ) {
        
        float rarea=0,rper=0;
        
        cout << "I'm a rectangle." << endl;
        cout <<"Enter the length: ";
        while (!(cin>>rside1)){
        cin.clear();
        cin.ignore(10000,'\n');
                                                            
        cout << "Please, follow instructions please: " << flush;
        cout<< "\a";
        }
        
        cout<<"Enter the width: ";
        while (!(cin>>rside2)){
        cin.clear();
        cin.ignore(10000,'\n');
                                                                // <return> or <enter>.
        cout << "Hey, follow instructions please: " << flush;
        cout<< "\a";
        }
        
        rarea = rside1*rside2;
        rper = 2*(rside1+rside2);
          
        cout<<"The area of this rectangle is: "<<rarea<<".\n";
        cout<<"The perimeter of this rectangle is : "<<rper<<".\n";
        } 
        private:
        float rside1,rside2;
};

class circle : public geometricobject { // derived class
public: 
virtual void geo( ) {
        
        float pi=0;
        pi = 22.0/7.0;
        cout << "I'm a circle." << endl;
        cout <<"Select 1 if this circle has a diameter or 2 if it has a radius: ";

        int choice;
        cin>>choice;

        switch(choice){
        case 1: 
             do{
             cout<<"\nEnter the length of the diameter: \n";
             if(!(cin>>diam)){
             cout<<"Please enter a valid input.";              
             }
             cin.clear();
             cin.ignore(10000,'\n');
             }
             while(diam<0);
             
             circ = pi*diam;
             area = (pi/2)*(diam*diam);
             cout<<"The cricumference of this circle is: "<<circ<<".\n";
             cout<<"The area of this circle is: "<<area<<".\n";
             break;                 
        
        case 2:
             do{
             cout<<"\nEnter the length radius: ";
             if(!(cin>>rad)){
             cout<<"\nPlease enter a valid input.";         
             }
             cin.clear();
             cin.ignore(10000,'\n');         
             }
             while(rad<0);
             
             circ = pi*2*rad;
             area = pi*(rad*rad);
             cout <<"The circumference of this circle is: "<<circ<<".\n";
             cout <<"The area of this circle is: "<<area<<".\n";
             break;           
        
        default: "Invalid Input\n";
            }
        } 

private:

float rad,diam,pi,circ,area;
};

class triangle : public geometricobject {
      public:
      
      virtual void geo(){
      float tarea,tperimeter;
      cout<<"This is a triangle.";
      do{              
      cout<<"Please enter the length of all 3 sides: ";
      if(!(cin>>tside1>>tside2>>tside3)){
      cout<<"Please enter a valid input.";}                                   
      cin.clear();
      cin.ignore(10000,'\n');
      }                                   
      while ((tside1,tside2,tside3)<0);
      
      tperimeter = tside1+tside2+tside3;
      tarea = (tside1*tside2*tside3)/2;
      cout <<"The perimeter of this triangle: "<<tperimeter<<".\n";
      cout <<"The area of this triangle: "<<tarea<<".\n";                                                                      
      }           
      private:        
      
      float tside1,tside2,tside3;        
};

class cube: public geometricobject {
      
      public:
      
      float cperimeter, carea;
             
      virtual void geo(){
      
      cout <<"This is a cube.\n";
      do{
      cout <<"Please enter length of sides: ";
      if(!(cin>>cside)){
      cout<<"Please enter a valid input.";}
      cin.clear();
      cin.ignore(10000,'\n');                  
      }
      while (cside<0);
      
      cperimeter = cside*12;
      carea = cside*cside*cside;
      cout<<"The perimeter of cube: "<<cperimeter<<".\n";
      cout<<"The area of this cube: "<<carea<<".\n";
      }
      
      private:
      
      float cside;
      };
  
class sphere : public circle{ // derived class

public: 
virtual void geo( ) {
        
        float pi=0;
        pi = 22.0/7.0;
        cout << "I'm a sphere." << endl;
        cout <<"Select 1 if this sphere has a diameter or 2 if it has a radius: ";

        int choice2;
        cin>>choice2;
        switch(choice2){
        case 1: 
             do{
             cout<<"\nEnter the length of the diameter: \n";
             if(!(cin>>sdiam)){
             cout<<"Please enter a valid input.";              
             }
             cin.clear();
             cin.ignore(10000,'\n');
             }
             while(sdiam<0);
             
             scirc = pi*sdiam;
             svolume = (4.0/3.0)*pi*((sdiam/2)*(sdiam/2)*(sdiam/2));
             cout<<"The cricumference of this circle is: "<<scirc<<".\n";
             cout<<"The volume of this sphere is: "<<svolume<<".\n";
             break;                 
        
        case 2:
             do{
             cout<<"\nEnter the length radius: ";
             if(!(cin>>srad)){
             cout<<"\nPlease enter a valid input.";         
             }
             cin.clear();
             cin.ignore(10000,'\n');         
             }
             while(srad<0);
             
             scirc = pi*2*srad;
             svolume = (4.0/3.0)*pi*(srad*srad*srad);
             cout <<"The circumference of this sphere is: "<<scirc<<".\n";
             cout <<"The volume of this sphere is: "<<svolume<<".\n";
             break;           
        
        default: "Invalid Input\n";
            }
        } 

private:

float srad,sdiam,pi,scirc,svolume;
};
        
int main(void)
{ 
    geometricobject *ptr; //pointer to base class
    int whichone; 

    cout<<setw(65)<<"******** Polymorphism Assignment *********\n\n";

    do { 
     cout<<"Enter: 1 for geometricobject\n";
     cout<<"Enter: 2 for rectangle\n";
     cout<<"Enter: 3 for circle\n";
     cout<<"Enter: 4 for cube\n";
     cout<<"Enter: 5 for triangle\n";
     cout<<"Enter: 6 for sphere.\n\n";
     cout<<setw(75)<<"--------------------------------------------------------------------------------\n\n";
     cout<<"Please enter your option here:\t";
     if(!(cin>>whichone)){
     cout<<"Invalid Input. Please enter a number!";} 
     cin.clear();
     cin.ignore(10000,'\n');
     } 
while (whichone < 1 || whichone > 6);

switch (whichone) {  //set pointer depending on user choice
case 1: ptr = new geometricobject; break;
case 2: ptr = new rectangle; break;
case 3: ptr = new circle; break;
case 4: ptr = new cube; break;
case 5: ptr = new triangle; break;
case 6: ptr = new sphere; break; }

ptr -> geo( );  //run-time binding
delete ptr;  //don't leave junk hanging around

    system("PAUSE");
    return EXIT_SUCCESS;
}
