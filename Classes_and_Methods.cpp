/*
Travis D.
Cs 391
Object Oriented Programming
Classes and Methods
*/


#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>

using namespace std;

class Employee
{
      public:

      void GetInfo(){
      
      cout<<setw(50)<<"*** Employee Info ****\n\n";
      
      int myIDnum=0;
      
      /*This is initializing the random genrator function*/
      srand(time(NULL));
      /*This is assigning the myIDnum variable to a random number*/
      myIDnum = rand();
          
      cout << "\nEnter the Last Name: ";
      cin >> lname;
      
      cout << "\nEnter the First Name: ";
      cin >> fname;
      
      cout << "\nEnter the Middle Initial: ";
      cin>> MI;
      
      cout << "\nEnter the Department Initials: ";
      cin >> departinit;
      
      do{
      cout << "\nEnter the Class number: ";
      while(!(cin>>departnum)){
         cin.clear();
         cin.ignore(10000,'\n');
         cout<<"Please enter only integers: "<<flush;     
      }
      if (departnum > 0){
      
      cout << fname<<" "<<MI<<" "<<lname << " belongs to "<<departinit<<" "<< departnum <<".\n\n\n"<<endl;
           }   
      /*Error routine for entering a value outside the data type of departnum*/
      else 
         cout<<"Please enter positive values: ";
                                                  
      
      /*If it is a proper input then the program will show the departnum*/
                          
      }
      /*Once a proper value is entered it will leave 
      the loop and go on with the rest of the program*/
      while (departnum<=0);
      
      
      }
      protected:
                
      long int myIDnum;
      string lname, fname;
      char MI;
      int departnum;           
      string departinit;                               
      };

class SalariedEmployee: public Employee{
      
      public:
      
      void GetYearlySalary(){
           
           cout<<setw(50) <<"*******Salaried Employee Pay Rate Information******* \n\n";
           
           do{
           cout << "Enter Yearly Gross Pay, which is before tax deductions: \n";
           while (!(cin>>GrossPay)){
                 cin.clear();
                 cin.ignore(10000,'\n');
                 cout<<"Please enter the a decimal value for GrossPay: "<<flush;
                 cout<<"\a";
                 }
           if (GrossPay > 0)
           cout << "\nThis salaried employee yearly gross income was: "<<GrossPay<<".\n";
                 
           
           else 
           cout << "\nPlease enter a positive numerical value, try again: \n";
                   
           }
           while(GrossPay<=0);
           }  //end of Get Yearly Salary function   
      void PayFrequency(){
           
           do{
           cout << "\nEnter pay frequency according to weeks, so if you getting \npaid once = 1, twice = 2, quarterly = 4, monthly = 12, & weekly = 54: \n";
           while(!(cin>>payfreq)){
                cin.clear();
                cin.ignore(10000,'\n');
                cout<<"Please enter an integer for the pay frequency: "<<flush;
                cout<<"\a";                       
           }
                      
           if (payfreq>0)
           cout<< "This salaried employee gets paid every: "<< payfreq << " week(s).\n";               
                 
           
           else 
               cout<<"Please enter a positive interger value: "; 
           
           
           }
           while (payfreq<=0);

           }//end of Payfrequency function
           
           void PayPeriodPay(){
                
                float payforperiod = 0;
                
                payforperiod = GrossPay/payfreq;
                
           cout<< "\nThis salaried employee received $"<<payforperiod<<" for their given pay period.\n\n";
           return;
           }//end of PayPeriodPay function
                
       protected:
       
       float GrossPay, payforperiod;
       int payfreq;
      
      };
      
class HourlyEmployee: public Employee{
            
            public:
            
            void AnnuallyPay(){
            
            float pay = 0;
            
            cout<<setw(50)<<"*******Hourly Employee********\n";
            
            cout<< "\nEnter the hourly pay rate of this employee: ";
            while(!(cin>> myHourlyWage)){
                cin.clear();
                cin.ignore(10000,'\n');
                cout<<"Please enter an float for myHourlyWage: "<<flush;
                cout<<"\a";                       
           } 
            
            cout << "\nEnter the total amount of hours for this year worked by this employee: ";
             while(!(cin>> HoursWorked)){
                cin.clear();
                cin.ignore(10000,'\n');
                cout<<"Please enter an float for Hours Worked: "<<flush;
                cout<<"\a";                       
           } 
            
            pay = myHourlyWage * HoursWorked;
            
            cout << "\nThe total amount that this employee was paid for this year was $"<<pay<<".\n";
             
            return;                    
            }
            
            protected:
                      
            float myHourlyWage, HoursWorked, pay;
            
            };
            

int main(int argc, char *argv[])
{ 
    Employee object1;
    SalariedEmployee object2;
    HourlyEmployee object3;
    
    object1.GetInfo();
    object2.GetYearlySalary();
    object2.PayFrequency();
    object2.PayPeriodPay();
    object3.AnnuallyPay();
    
    cout << "\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}
