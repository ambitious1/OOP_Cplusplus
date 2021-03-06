/*
Travis D.
CS 391
Object Oriented Programming-C++
Huffman Encoding
*/


#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <conio.h> 

using namespace std;

typedef struct tree_node {/*defines the block of code for the structure of a node in a tree*/
   struct tree_node *left, *right;
   int freq;
   char c;
} 
*node;/*end of definition of node_t*/

/*Makes initial format for the code pertaining to each character*/
struct tree_node pool[256] = {{0}};
node qqq[255], *q = qqq - 1;
int n_nodes = 0, qend = 1;
char *code[128] = {0}, buf[1024];

//creates a new node for each character
node new_node(int freq, char c, node a, node b){
   node n = pool + n_nodes++;
   if (freq) /*This assigns a character to a specific probability(frequency)*/
      n->c = c, n->freq = freq;
   else {
      n->left = a, n->right = b;
      n->freq = a->freq + b->freq;/*This adds the frequency of the left and right node*/
   }
   return n;
}
/* Checks how often a char is used 
then gives it an appropriate value  */

void qinsert(node n){
   int j, i = qend++;
   while ((j = i / 2)) {
   if (q[j]->freq <= n->freq) break;
   q[i] = q[j], i = j;
   }
   q[i] = n;
}

node qremove(){
   int i, l;
   node n = q[i = 1]; 
   if (qend < 2) 
      return 0;
   qend--;
   while ((l = i * 2) < qend) {
      if (l + 1 < qend && q[l + 1]->freq < q[l]->freq) l++;
      q[i] = q[l], i = l;
   }
   q[i] = q[qend];
   return n;
}
/* Scans to see how often the char is used and gives it 
the proper 1's and 0's value for the string*/

void build_code(node n, char *s, int len){
   static char *out = buf;
   if (n->c) {
      s[len] = 0;
      strcpy(out, s);
      code[n->c] = out;
      out += len + 1;
      return;
   }
s[len] = '0'; build_code(n->left,  s, len + 1);
s[len] = '1'; build_code(n->right, s, len + 1);
}

/*starts the process of creating a tree for the string to figure 
out what character recieves what */
void init(char *s){
   int i, freq[128] = {0};
   char c[16];
   while (*s) 
         freq[(int)*s++]++;/*This sets the value of char equal to an int and 
         every time it increases it goes to the value of the next char */
   for (i = 0; i < 128; i++)
      if (freq[i]) 
         qinsert(new_node(freq[i], i, 0, 0));
   while (qend > 2)
         qinsert(new_node(0, 0, qremove(), qremove()));
   build_code(q[1], c, 0);
}

int option(){
    
    int selection;
    
    selection = getche();/*this displays the users input and 
    automatically processes the user's input without 
    having to press the enter key*/
    
    switch (selection)
    {
           case '1':
           case '2': break;
           default: cout<<"\n\nInvalid Input!! Please Try Again\n\n";
           }
    return selection;
}

//encodes the string by each character
class EncodeFunction{
public:
void Encode(char*,char*);
};/*End of class declaration*/

void EncodeFunction::Encode(char *s, char *out){
      while (*s) {
      strcpy(out, code[*s]);
      out += strlen(code[*s++]);
   }                                          
}

class DecodeFunction{
//outputs the value of the encoding
public:
void Decode(char *, node);
};/*End of class declaration*/

void DecodeFunction::Decode(char *s, node t){
     node n = t;
   while (*s) {
      if (*s++ == '0') 
         n = n->left;
      else n = n->right;
      if (n->c) 
         putchar(n->c), n = t;
   }
 putchar('\n');
   if (t != n) 
      printf("garbage input\n");
}        

int main(void){
   int i,selection=0;
   char* enc;
   string p;
    
   const char *str = "This is a test"; 
   char buf[1024];
   cout<<setw(50)<<"Huffman Encode & Decode\n";
   cout<<setw(50)<<"~~~~~~~~~~~~~~~~~~~~~~~\n";
   
   cout<<setw(56)<<"Choose one of the following options:\n";
   cout<<setw(69)<<"------------------------------------------------------------\n\n";
   
   cout<<setw(67)<<"|**************************|*****************************|\n";
   cout<<setw(67)<<"|1.    Encode Input        |2.       Exit Program        |\n";
   cout<<setw(67)<<"|**************************|*****************************|\n";
   
   cout<<"\n\nEnter your Option, Please: ";
   
   EncodeFunction object;/*class object for Encoding Function*/
   DecodeFunction object2;/*class object for Decoding Function*/
   
   do
{
   selection = option();
   switch (selection)
   {
          case '1':
          cout<<"\n\nInput a character string: "; 
             getline(cin,p);
             enc = (char*)p.c_str();
             init(enc);
             for(i = 0; i < 128 ; i++)/*This is a loop to associate each character\
             with it's perspective code and it prints it similar to a stack*/
                 if(code[i])
                     printf("  %c : %s\n", i, code[i]);
             object.Encode(enc,buf);/*Calls the encoding fucntion to manipulate\
             the string entered from the user*/
             cout<<"\nEncoded value: "<<buf<<endl<<endl;
             cout<<"\nDecoded value: ";
             object2.Decode(buf,q[1]);
             cout<<"\nSelect 1 to add the previous encoded string or select 2 to quit: ";
             cout<<"\n\n";
             break;
             
          case '2': break;       
          }          
   }while(selection!='2');
   
   system("PAUSE<NUL");/*Won't display the "press any key" prompt*/
}
