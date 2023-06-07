//Import System Libraries
#include <iostream>
#include <string>
using namespace std;

//Main Method
int main() {
 
 //Initialize Variable 
 int selection, s, i, j; 
 string message, keyword, newKey, encrypted, decrypted; 
  
 //Ask the user of which option they want to pick
 cout << "Welcome to the Vigenere Cipher Program! \n"
  "Would you like to Encrypt or Decrypt? \n"
  "Press 1 to Encrypt or 2 to Decrypt.\n";
 cin >> selection;

//Determines if the user selection is valid
while(selection != 1 && selection != 2)
  {
    cout << "Please enter a valid selection.\n";
    cin >> selection;
  }

//Encryption is selected if 1
if (selection == 1)
{
  cout << "Option 1: Encryption was selected.\n Enter message wanted for encryption: ";
  cin >> message;
  
  //Capitalizes the entire message 
  for (i = 0; i < message.length(); i++)
    {
      message[i] = toupper(message[i]);
    }
    

  //User is asked to input the keyword
  cout << "\nPlease enter Keyword: ";
  cin >> keyword; 
  
  //Capitalizes the keyword 
  for (i = 0; i < keyword.length(); i++)
    {
      keyword[i] = toupper(keyword[i]);
    }
    

  //Encrypt the entire message
  for(i = 0; i < message.length(); ++i)
    {
      encrypted[i] = ((message[i] + keyword[i]) % 26) + 'A';
    }
    

  //Outputs the encrypted message 
  for (i = 0; i < message.length(); ++i)
  {
    cout << encrypted[i];
  }
}

//Decrpytion is selected if 2 
else if (selection == 2)
{
  cout << "Option 2: Decryption was selected.\n Enter message wanted for decryption: ";
  cin >> message;
  //For loop to capitalize all characters
  for (int i = 0; i < message.length(); i++)
  {
    message[i] = toupper(message[i]);
  }
    

  cout << "Please enter Keyword: ";
  cin >> keyword; 
  for (int i = 0; i < keyword.length(); i++)
  {
    keyword[i] = toupper(keyword[i]);
  }

  //Decrypts the message 
  for(i = 0; i < message.length(); ++i)
  {
    decrypted[i] = ((message[i] - keyword[i] + 26) % 26) + 'A';
  }
    

  //Outputs the original message 
  for (i = 0; i < message.length(); ++i)
  {
    cout << decrypted[i];
  }

return 0;  
} 
