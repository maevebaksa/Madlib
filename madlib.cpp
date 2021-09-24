//Madlib C++ Edition - Written by Maeve Baksa - 09.21.2021


//#include <comments>
#include <iostream>
#include <string>
using namespace std;

int main() {

	//Define all of the strings. One might call this a web.	
	string FirstInput, SecondInput, ThirdInput, FourthInput, FifthInput, SixthInput;
	string SeventhInput, EighthInput, NinthInput, TenthInput;

	//Collect your data. The use of getl∑ine vs cin is becuase cin only takes the first word in the input
	//this is mitigated by using the getline. Source here:
	// https://stackoverflow.com/questions/4825483/code-for-getting-multiple-words-in-a-string-from-user

	
	cout << "Please input a noun: ";
	getline(cin, FirstInput);

	cout << "Please input an adjective: ";
	getline(cin, SecondInput);

	cout << "Please input a number: ";
	getline(cin, ThirdInput);

	cout << "Please input a noun: ";
	getline(cin, FourthInput);

	cout << "Please input a plural noun: ";
	getline(cin, FifthInput);

	cout << "Please input a name: ";
	getline(cin, SixthInput);

	cout << "Please input a noun: ";
	getline(cin, SeventhInput);

	cout << "Please input a adjective: ";
	getline(cin, EighthInput);

	cout << "Please input a teacher's name: ";
	getline(cin, NinthInput);

	cout << "Please input a verb: ";
	getline(cin, TenthInput);



	//I have found out that you can simply use << instead of a + when combining strings within a cout
	//that's how I've been doing it here, which seems to be working alright, however might
	//differ ever so slightly from the W3 schools example.
	//Further this is where all the story is combined into the final terminal output.

	cout << "It was a dark and stormy night, you run into a wild " << FirstInput << ". You don't know it yet, but this ";
	cout << "night will define you. It makes you feel very " << SecondInput << ". The sighting of such a rare " << FirstInput;
	cout << " is almost unheard of in a town with a population of " << ThirdInput << ". Where the " << FourthInput << " is green";
	cout << " and the " << FifthInput << " are pretty, or so they say. You decide to go and study this rare sighting you expereinced ";
	cout << " it gains you the presigeous title of Dr." << SixthInput << " the 3rd, with a B.S. in " << FirstInput;
	cout << " your groundbreaking research even wins you a Nobel Prize in " << SeventhInput << " and your parents are very"; 
	cout << " " << EighthInput << ". You don't know if you would have been able to do it without your help from your ";
	cout << "favorite teacher " << NinthInput << " who was always ready to " << TenthInput << ". You continue on to live a ";
	cout << "very happy life, all thanks to that " << FirstInput << ".\n";

	//Make the int function not explode.  
	return 0;
}
