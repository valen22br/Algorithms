
/************************************************************************************************************************
File Name: recursive_algos.cpp
Name: Luis Gustavo Grubert Valensuela Z#:23351882 lvalensuela2015@fau.edu
Course: Data Struct/Algorithm (COP3530-003)
Professor: Dr. Lofton Bullard
Due Date:04/10/2017             Due Time: 11:30PM
Total Points: 100
Assignment Number Module 10 - Programming Assingment
Last Changed: 04/10/2017

Description:
In this assignment recursive and nonrecursive functions will be created
The program has a loop that prompt the user for a input. Dependind of the input, the program can:
1 - Check is a string is a palindrome (Non Recursive)
2 - Check is a string is a palindrome (Recursive)
3 - Replace a string
4 - Print a string in reverse order (Recursive)
5 - Print a string in reverse order (Non Recursive)
-1 - exit the program
/************************************************************************************************************************/

#include <iostream>
#include <string>
#include <istream>
#include <cctype>
#include <stack>

using namespace std;

//functions prototypes
string replace_all(const string & original_string, const string & old_substring, const string &	new_substring);
void swap(char& v1, char& v2);//Interchanges the values of v1 and v2.
string reverse(const string& s);//Returns a copy of s but with characters in reverse order.
string remove_punct(const string& s, const string& punct);//Returns a copy of s with any occurrences of characters
														  //in the string punct removed
string make_lower(const string& s); //Returns a copy of s that has all uppercase
									//characters changed to lowercase, other characters unchanged.
bool palindromeNonRecursive(const string & s);
bool palindrome(const std::string & word);
string printReversel(string & s);
string printIterReverse(string & s);

int main() {
	int programOptions;
	string s1, s2, s3, s4;


	do
	{
		cout << endl << "Plese choose an option to continue:" << endl;
		cout << " 1 - Check is a string is a palindrome (Non Recursive)" << endl;
		cout << " 2 - Check is a string is a palindrome (Recursive)" << endl;
		cout << " 3 - Replace a string" << endl;
		cout << " 4 - Print a string in reverse order (Recursive)" << endl;
		cout << " 5 - Print a string in reverse order (Non Recursive)" << endl;
		cout << "-1 - exit the program" << endl;
		cin >> programOptions;
		if (!cin.fail())
		{
			if (programOptions == 1)
			{
				programOptions = 0;
				cout << "Enter with a string for palindrome test" << endl;
				getline(cin, s4); //skip \n character
				getline(cin, s1);
				if (palindromeNonRecursive(s1))
				{
					cout << "The word " << s1 << " is a palindrome word" << endl;
				}
				else
				{
					cout << "The word " << s1 << " is not a palindrome word" << endl;
				}
			}
			if (programOptions == 2)
			{
				programOptions = 0;
				cout << "Enter with a string for palindrome test" << endl;
				getline(cin, s4); //skip \n character
				getline(cin, s1);
				if (palindrome(s1))
				{
					cout << "The word " << s1 << " is a palindrome word" << endl;
				}
				else
				{
					cout << "The word " << s1 << " is not a palindrome word" << endl;
				}
			}
			if (programOptions == 3)
			{
				programOptions = 0;
				cout << "Enter with 3 strings (original string, old substring, new substring";
				cout << "separeted by spaces between them : " << endl;
				cin >> s1 >> s2 >> s3;
				cout << "String s => " << replace_all(s1, s2, s3) << endl;

			}
			if (programOptions == 4)
			{
				programOptions = 0;
				cout << "Enter with a string to print it in reverse" << endl;
				getline(cin, s4); //skip \n character
				getline(cin, s1);
				printReversel(s1);

			}
			if (programOptions == 5)
			{
				programOptions = 0;
				cout << "Enter with a string to print it in reverse" << endl;
				getline(cin, s4); //skip \n character
				getline(cin, s1);
				cout << printIterReverse(s1);

			}
			if (programOptions != -1 && programOptions != 0)
			{
				cout << "Wrong options was entered, exiting the program" << endl;
				programOptions = -1;
			}
		}

		else
		{
			cout << "Wrong options was entered, exiting the program" << endl;
			programOptions = -1;
		}


	} while (programOptions != -1);
	return 0;
}

//*************************************************************************************
//Name: replace_all(const string & original_string, const string & old_substring, const string & new_substring)
//Precondition: original_string, old_substring and new_substring have been defined
//Postcondition: Returns a string where old_substring was replaced by new_substring
//				 case old_substring is found on the original string
//Description:  Returns a string where old_substring was replaced by new_substring
//				 case old_substring is found on the original string
//*************************************************************************************
string replace_all(const string & original_string, const string & old_substring, const string & new_substring) {
	string s = original_string;
	int pos;

	pos = original_string.find(old_substring);
	//cout << "Position of string " << old_substring << ": " << pos << endl;
	s.replace(pos, old_substring.length(), new_substring);
	while (pos != string::npos)
	{
		pos = s.find(old_substring);
		//cout << "Position of string " << old_substring << ": " << pos << endl;
		if (pos != string::npos)
			s.replace(pos, old_substring.length(), new_substring);
	}
	return s;
}

//*************************************************************************************
//Name: swap(char& v1, char& v2)
//Precondition: none
//Postcondition: Interchanges the values of v1 and v2.
//Description:  Interchanges the values of v1 and v2.
//*************************************************************************************
void swap(char& v1, char& v2) {
	char temp = v1;
	v1 = v2;
	v2 = temp;
}

//*************************************************************************************
//Name: reverse(const string& s)
//Precondition: string s has been defined
//Postcondition: Returns a copy of s but with characters in reverse order.
//Description:  Returns a copy of s but with characters in reverse order.
//*************************************************************************************
string reverse(const string& s) {
	int start = 0;
	int end = s.length();
	string temp(s);

	while (start < end) {
		end--;
		swap(temp[start], temp[end]);
		start++;
	}
	return temp;
}

//*************************************************************************************
//Name: make_lower(const string& s)
//Precondition: string s has been defined
//Postcondition: Returns a copy of s but in lowercase.
//Description:  Returns a copy of s but in lowercase.
//*************************************************************************************
string make_lower(const string& s)
{
	string temp(s);
	for (int i = 0; i < s.length(); i++)
		temp[i] = tolower(s[i]);
	return temp;
}

//*************************************************************************************
//Name: remove_punct(const string& s, const string& punct)
//Precondition: none
//Postcondition: Returns a copy of s with any occurrences of characters
//				 in the string punct removed
//Description:  Returns a copy of s with any occurrences of characters
//				in the string punct removed
//*************************************************************************************
string remove_punct(const string& s, const string& punct) {
	string no_punct; //initialized to empty string
	int s_length = s.length();
	int punct_length = punct.length();


	for (int i = 0; i < s_length; i++) {
		string a_char = s.substr(i, 1);
		int location = punct.find(a_char, 0);
		if (location < 0 || location >= punct_length)
			no_punct = no_punct + a_char; //a_char not in punct, so keep it

	}
	return no_punct;
}


//*************************************************************************************
//Name: palindromeNonRecursive(const string & s)
//Precondition: string s have been defined
//Postcondition: Returns true or false if the string s is a palindrome word (non recursively)
//Description:   Returns true or false if the string s is a palindrome word (non recursively)
//*************************************************************************************
bool palindromeNonRecursive(const string & s) {
	string punct(",;:.?!'\" "); //includes a blank
	string str(s);
	str = make_lower(str);
	string lower_str = remove_punct(str, punct);
	return (lower_str == reverse(lower_str));
}

//*************************************************************************************
//Name: palindrome(const std::string & word)
//Precondition: string s have been defined
//Postcondition: Returns true or false if the string s is a palindrome word (recursively)
//Description:   Returns true or false if the string s is a palindrome word (recursively)
//*************************************************************************************
bool palindrome(const std::string & word) {
	string::const_iterator fwd = word.begin();
	string::const_iterator rev = word.end();
	if (rev - fwd <= 1) return true;
	if (*fwd++ != *--rev) return false;
	return palindrome(string(fwd, rev));
}

//*************************************************************************************
//Name: printReversel(string & s)
//Precondition: string s have been defined
//Postcondition: Prints the string in reverse order, recursively
//Description:   Prints the string in reverse order, recursively
//*************************************************************************************
string printReversel(string & s)
{
	int len = s.length();
	string r = s.substr(--len, 1);
	cout << r;
	if (len < 1)
		return "";
	return printReversel(s.substr(0,len--));
}

//*************************************************************************************
//Name: printIterReverse(string & s)
//Precondition: string s have been defined
//Postcondition: Prints the string in reverse order, non recursively
//Description:   Prints the string in reverse order, non recursively
//*************************************************************************************
string printIterReverse(string & s)
{
	reverse(s.begin(), s.end());
	return s;
}

