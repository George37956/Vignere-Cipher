/*
Name: George Ashraf Farhan Wahba
ID: 20210103
program number #3 Vignere Cipher
*/

#include<iostream>
#include<string>
using namespace std;
void encrypt();
void decrypt();
int main()
{
	int userChoice = 0;
	cout << "Hi, this program is for encrypting and decrypting string with Vignere Cipher\n";
	//get form the user what he want to do
	while (userChoice != 3)
	{
		cout << "please, enter the number of your choice?\n1-encrypt a message\n2-decrypt a message\n3-end the program\n>>";
		cin >> userChoice;
		if (userChoice == 3)
		{
			printf("Goodbye, See you again :)");
			break;
		}
		if (userChoice == 2)
		{

			decrypt();
		}
		if (userChoice == 1)
		{

			encrypt();
		}
	}

	return 0;
}
void encrypt()
{
	//get the message and encrypt it
	string message, keyword = "HWONE";
	int i = 0, j = 0, k;
	cout << "please, enter the message you want to encrypt\n>>";
	cin.ignore();
	getline(cin, message);
	for (int i = 0; i < size(message); i++)  //switching all the chars to uppercase
	{
		message[i] = toupper(message[i]);
	}
	cout << "the encrypted message is >> ";
	for (int i = 0; i < size(message); i++)  //encrypting the message
	{
		if (isdigit(message[i]))
		{
			cout << message[i];
		}
		else if (isspace(message[i]))
		{
			cout << message[i];
		}
		else
		{
			k = (int(message[i]) + int(keyword[j])) % 26;
			cout << char((k + 65));
		}
		j++;
		if (j == 5)
		{
			j = 0;
		}
	}
	cout << '\n';
}
void decrypt()
{
	//decrypting the message
	string message, keyword = "HWONE";
	int i = 0, j = 0, k;
	cout << "please, enter the message you want to decrypt\n>>";
	cin.ignore();
	getline(cin, message);
	for (int i = 0; i < size(message); i++)  //switching all the chars to uppercase
	{
		message[i] = toupper(message[i]);
	}
	cout << "the decrypted message is >> ";
	for (int i = 0; i < size(message); i++)  //encryptyning the message
	{
		if (isdigit(message[i]))
		{
			cout << message[i];
		}
		else if (isspace(message[i]))
		{
			cout << message[i];
		}
		else
		{
			k = int(message[i]) - 65;
			for (int i = 65; i <= 90; i++)
			{
				if ((i + keyword[j]) % 26 == k)
				{
					k = i;
					break;
				}
			}
			cout << char(k);
		}
		j++;
		if (j == 5)
		{
			j = 0;
		}
	}
	cout << '\n';


}
