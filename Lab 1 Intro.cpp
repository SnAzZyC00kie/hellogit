#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(void)
{
  vector<char> v; // An empty vector accepting characters
  vector<int>v1= {100,56,90,32,6}; // A vector containing integers
  string str1 = "keep"; // A string containing a set of characters
  string str2 = str1 + "going"; //A string containing another string plus a set of characters
  
  // Manipulating Vectors to push and pop data
  v.push_back('H'); // Adding a new chracter, 'H' at the back of the v
  v1.pop_back(); // Removing an integer from the back of v1
  v.push_back('i');
  v1.pop_back();
  
  // Adding the integer '22' to v1 4 times
  for(int i=0;i<4;i++)
     {
       v1.push_back(22); 
     }
   
  // Printing the integers in the vector to the screen  
  for(unsigned i=0;i<v1.size();i++)
     {
     cout << v1[i] << "\t"; 
     }
    cout << endl;
    
    // Printing the contents of str1 and str2
     cout << "str1 = " << str1 << endl;
     cout << "The 3rd character is " << str1[2] << "\n";
     cout << "str2 has " << str2.size() << " characters" << endl;
     
     // Comparing the contents of a strings
     
     if(str1 == "keep")
       {
         //Assigning more content to a string 
         str2+= ",Sir";
         cout << str2 << endl;
       }
       
      if(str2 != "going")
        {
          cout << "take a breath" << endl;
        }
        
        return 0;
}
