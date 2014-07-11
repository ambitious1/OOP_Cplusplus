/*
Travis D.
CS 391
Object Oriented Programming
Student Management System
*/


#include <iostream>
#include <string>
#include <fstream>


using namespace std;

class Student{//class declaration for Student

private: 
         string fname,mname,lname,grade,term;
         char streetaddress[50];
         char city[50];
         char state[50];
         double zip;
         float credits,termcredits,termGPA,OverallGPA,gradetonum,totalpoints,totalofcred,productofgradeandcredit;
         char major[50];
         int year;
              

public:                   //Define the class methods
  //First Function
   
    Student (){//constructor for the name function
          
          string name1,name2,name3;
                    
          ofstream outfile01;//declare the outfile object 
          

          outfile01.open("Name.txt");//calling the method from outfile object
          
          fname=name1;
          
          mname=name2;
          
          lname=name3;
         
         
          cin>>name1;
          
          cin>>name2;
          
          cin>>name3;
          
          outfile01<<name1<<" "<<name2<<" "<<name3;//This copies the user's
          //input for the name variables and puts it in the file for later use
          cout<<"The Student's full name is: "<<name1<<" "<<name2<<" "<<name3<<".\n"<<endl;
          

          outfile01.close();
          
          return;
          }

     void Major(){
         
         cout<<"\n\n\t\t\t************** Major *****************\n\n";
         
         cout<<"Enter the major of this Student: "<<endl;
         
         cin.getline(major, 50);
         cin.getline(major,50);
         
         cout<<"\n";         
                  
         return;         
         }

      //Second Function

     void Address(){
         
         cout<<"\n\n\t\t\t***********Student's Address Information**************"<<endl<<endl;
          
          cout<<"Enter the Student's Street Address: "<<endl; 
         cin.getline(streetaddress, 50);
         cin.getline(streetaddress,50);
         
         cout<<"\nEnter the name of the city they live in: "<<endl;
         cin.getline(city, 50);
                  
         cout<<"\n\nEnter the name of the state they live in: "<<endl;
         cin.getline(state, 50);
         
         cout<<"\n\nEnter the zip code of their residence: "<<endl;
         cin>>zip;
          
         cout<<"\n\nThe student's address is: "<<streetaddress<<", "<<city<<", "<<state<<" "<< zip <<endl; 
         return;
         }

//Third Function: Beginning

void MatchingLetterGradestoCredits(){//first step in obtaining the GPA
     
     ifstream infile1;
     ofstream outfile1;


     string grades;
     float gradetonum=0;
     
     
     infile1.open("grades.txt");
     
     outfile1.open("MatchingLetterGradetoNumValue.txt");
     
     if (!infile1){
  cerr << "could not open infile1=> grades\n";
  perror("");
  system("PAUSE");
  exit(1); }
              
     
     
     while (infile1>>grades){
           
           cout<<"\n\t\t********Letter Grade to Numerical Value Conversion********\n\n";
           
           if (grades=="A+"){
              gradetonum = 4.0;//associates a value with each letter grade
              }
              if (grades=="A"){
              gradetonum = 3.9;
              }
              if (grades=="A-"){
              gradetonum = 3.7;
              }    
              if (grades=="B+"){
              gradetonum = 3.5;
              }               
              if (grades=="B"){
              gradetonum = 3.3;
              }          
              if (grades=="B-"){
              gradetonum = 3.0;
              }    
              if (grades=="C+"){
              gradetonum = 2.7;
              }    
              if (grades=="C"){
              gradetonum = 2.5;
              }    
              if (grades=="C-"){
              gradetonum = 2.3;
              }    
              if (grades=="D+"){
              gradetonum = 2.0;
              }    
              if (grades=="D"){
              gradetonum = 1.6;
              }    
              if (grades=="D-"){
              gradetonum = 1.3;
              }    
              if (grades=="F"){
              gradetonum = 0.0;
              }          
                      
                       
              cout<<"\n\nThese are the numerical values of the letter grades: ";
              
              cout<<gradetonum<<endl;
              
              outfile1<<gradetonum<<endl;//This should print out the num. value of each
              //letter grade so it can be used in the process of converting it
              //into the GPA.   
                       
                       }           //end of while loop
           infile1.close();
          
           outfile1.close();


           return;
           }//end of Matching letter grade to it's value function
     
    
     //Third Function: (Part 2)
     void Matchinggradesandcredits(){//Second step in finding the GPA
        
          cout<<"\n\n\t\t*********Matching Grades to Credits it's Worth*********\n\n";
         
          cout<<"\n\nThis is the product of the grades and credits the class is worth: \n\n";
          cout<<"Please wait approximately 30 seconds until it finishes loading the program.....\n\n";

          ifstream infile2, infile3;
          ofstream outfile2;
          
          infile2.open("credits.txt");
          infile3.open("MatchingLetterGradetoNumValue.txt");
          outfile2.open("gradeandcredit.txt");
          
          
          
           if (!infile2){
  cerr << "could not open infile2=> credits\n";
  perror("");
  system("PAUSE");
  exit(1); }
           
            if (!infile3){
  cerr << "could not open infile3=> MatchingLetterGradetoNumValue\n";
  perror("");
  system("PAUSE");
  exit(1); }
                  
          
          float productofgradeandcredit=0;
         
          while (infile2>>credits && infile3>>gradetonum){
           
           int i= 100;//counter is used to increment this function each time down the list of numbers.
           //100 is just like a maximum size control variable. 
           while(i>=0){
           
                          productofgradeandcredit=gradetonum*credits;
                          i++;
            }   outfile2<<productofgradeandcredit<<endl;
            cout<<productofgradeandcredit<<endl; 
           }
                
         
         
          
          
          //This prints out the product num value of 
          //the grades and the credits each class is worth. This is another step
          //taken twoards getting the GPA.     
               
               infile2.close();
               infile3.close();
               outfile2.close();
                
          
          return;
          }

          //Third Function: Part 3
          void sumofproduct(){//Third Step in finding the GPA
               
               cout<<"\n\n\t\t***********Sum of Points*********\n\n";
               
               ifstream infile4;
               ofstream outfile3;
               
               infile4.open("gradeandcredit.txt");
              
               outfile3.open("sumofpoints.txt");
               
               
               if (!infile4){
  cerr << "could not open infile4=> gradeandcredit\n";
  perror("");
  system("PAUSE");
  exit(1); }
               
               float totalpoints=0.0;
               float productofgradeandcredit;
               
               
               while (infile4>>productofgradeandcredit){
                     totalpoints+=productofgradeandcredit;
                     
                     }
              
               
               cout<<"\n\nThis is the total amount of points that have been accumulated:\n\n";
   
               cout<<totalpoints;
               
               outfile3<<totalpoints;
   
                      infile4.close();
                      outfile3.close();
   
               return;
               }
               
               //Third Function: Part 4
          void sumofcredits(){//Fourth Step in finding the GPA

               cout<<"\n\n\t\t**********Sum of Credits***********\n\n";

               ifstream infile2;
               ofstream outfile4;
               
               infile2.open("credits.txt");
               outfile4.open("sumofcredits.txt");
               
               if (!infile2){
  cerr << "could not open infile2=> credit\n";
  perror("");
  system("PAUSE");
  exit(1); }
               
               
               float totalofcred=0;
               
               while(infile2>>credits){
                       totalofcred+=credits;
                       }
               
               cout<<"\n\nThe the sum of the credits that this student is currently enrolled for is: \n\n";

               cout<<totalofcred;
               
               outfile4<<totalofcred;
               
               
               
               infile2.close();
               outfile4.close();
               
               return;
               }

               //Third Function: Part 5
          float ComputeOverallGPA(){//Last step in finding the GPA
                              
                cout<<"\n\n\t\t*********Computing Overall GPA***********\n\n";                
                
                ifstream infile5, infile6;
                ofstream outfile5;
                
                infile5.open("sumofpoints.txt");
                infile6.open("sumofcredits.txt");
                outfile5.open("AverageGPA.txt");
                
                if (!infile5){
  cerr << "could not open infile5=> sumofpoints\n";
  perror("");
  system("PAUSE");
  exit(1); }
            
                if (!infile6){
  cerr << "could not open infile6=> sumofcredits\n";
  perror("");
  system("PAUSE");
  exit(1); }
            
                
                float OverallGPA = 0;
                
                while (infile5>>totalpoints && infile6>>totalofcred){
                      
                      OverallGPA=totalpoints/totalofcred;
                      }
                
                cout<<"\n\nThis is the average or the computed GPA:\n\n";
                
                cout<<OverallGPA;
                
                outfile5<<OverallGPA;
                
                return OverallGPA;
                }     

                //Fourth Function
         void TermCredits(){
              //This will give me the total of credits a student took in a single semester based on the
              //name of the term and the amount of credits they took in that term.
             cout<<"\n\n\t\t\t***************** Term Credits ****************\n\n";
             
              ifstream infile7, infile8,infile9;
               ofstream outfile6;
               
               infile7.open("Name.txt");
               infile8.open("Term.txt");
               infile9.open("credits.txt");
               outfile6.open("TermCredits.txt");
               
               if (!infile7){
  cerr << "could not open infile7=> Name\n";
  perror("");
  system("PAUSE");
  exit(1); }
            
               if (!infile8){
  cerr << "could not open infile8=> Term\n";
  perror("");
  system("PAUSE");
  exit(1); }
               
               if (!infile9){
  cerr << "could not open infile9=> credits\n";
  perror("");
  system("PAUSE");
  exit(1); }
               
               float termcredits=0;
               
               string name1, name2, name3;
               string term;
              
              
              while(infile9>>credits && infile8>>termcredits){
                      
                      
                    while (term=="Fall" && credits>0 && fname==name1 && mname==name2 && lname==name3){
                            termcredits+=credits;
                            }
                            
                   outfile6<<termcredits;

                   cout<<"This is the total number of credits "<<name1<<" "<<name2<<" "<<name3<<"received in the Fall Semester.";                      
                            }
                      
               infile9.close();
               infile7.close();
               infile8.close();
               outfile6.close();
               
              return;
              }       

               //Sixth Function
               void Probation(){
               //This function will should determine whether a student is on the academic probation list
               //based on the student's OverallGPA.
                    cout<<"\n\n\t\t***********Academic Probation***********\n\n";    
                                  
                    ifstream infile13;
                    ofstream outfile8;
                    
                    infile13.open("AverageGPA.txt");
                    outfile8.open("Probation.txt");
                   
                    if (!infile13){
  cerr << "could not open infile13=> AverageGPA\n";
  perror("");
  system("PAUSE");
  exit(1); }
                    
                    while (infile13>>OverallGPA){
                          
                          if (OverallGPA>=2.00){
                          cout<<"\n\nThis student is not on Academic Probation.\n";                      
                          outfile8<<"\n\nThis student is not on Academic Probation.\n";                      
                          }
                          
                          else if(OverallGPA<2.00) {
                          cout<<"\n\nThis student is on Academic Probation.\n";                      
                          outfile8<<"\n\nThis student is on Academic Probation.\n";
                          }
                                
                          }
                    
                    infile13.close();
                    outfile8.close();
                    
                    return;
                    }

void GradeLevel(){
     
     cout<<"\n\n\t\t**********Grade Level************\n\n";
     //This calculates the student;s grade level based on the amount of credits they obtained.
     
     ifstream infile14;
     ofstream outfile9;
     
     infile14.open("sumofcredits.txt");
     outfile9.open("GradeLevel.txt");
     
     while (infile14>>totalofcred){
           
           if (totalofcred<24){
                 
                 cout<<"\n\nThis student is a Freshman.\n\n";
                 }
                 else if (24<=totalofcred<48){
                    cout<<"\n\nThis student is a Sophmore.\n\n";
                    
                    {if(48<=totalofcred<72){
                      cout<<"\n\nThis student is a Junior.\n\n";                       
                    
                      {if (72<=totalofcred<96){
                          cout<<"\n\nThis student is a Senior.\n\n";
                    
                          {if (96<=totalofcred==120){
                                cout<<"\n\nThis student has reached the credit requirement for Graduating.\n\n";
                                                 }//seventh outermost loop          
                                           }//sixth outermost loop
                                           }//fifth outermost loop
                                           }//Fourth outermost loop
                                      
                                        }//third outermost loop  
                            
                                       }//second outermost loop
                            
                                       }//outermost loop               
                 
           
           }//end of while loop
     
     infile14.close();
     outfile9.close();
     
     }//end of GradeLevel fucntion

     void ExpectedGraduationYear(){
          
          cout<<"\n\n\t\t************** Expected Graduation Year**************\n\n";
          
          cout<<"Please enter the expected Graduation Year of the student: ";
          cin>>year;
          cout<<"\n\n";
          return;
          }




};//end of class declaration


int main()
{
    float CalculateGPA;
    
    string name1, name2, name3;
    
    cout<<"\t\t\Student Management System\t\t\n\n\n";
    
    cout<<"Please enter the Full name of the Student and please separate by pressing enter after each one: \n\n";
        
    Student object;
//the default constructor was called where it ask for the student's name
 
    object.Address();
    object.Major();
    object.MatchingLetterGradestoCredits();
    object.Matchinggradesandcredits();
    object.sumofproduct();
    object.sumofcredits();
    
    CalculateGPA =  object.ComputeOverallGPA();
    
    object.TermCredits();
    object.GradeLevel();  
    object.Probation();
    object.ExpectedGraduationYear();
    
     cout<<"\n\nThis student currently has a "<<CalculateGPA<<" grade point average.\n";
    cout<<"\n\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
