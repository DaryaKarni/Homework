#include <iostream>
using namespace std;

int main()
{
	/*int size;
	cout << " Enter your string: " << endl;
	char* str = new char[size];
	for (int i=0; i,< size; i++) */

	char str[300];
	cout << "Enter your string: " << endl;
	cin.getline(str, 300);
	cout << str << endl;

	for (int i = 0; str[i] != '\0'; i++) {
	   char* word_start = str + i;
	   char* word_end = str + i;
	   while (*word_end != ' ' || *word_end != '\0') {
		   word_end++;
		   i++;
	   }
	   bool t = true;
	   for (int j = 0; j < word_end - word_start;j++) {
		   for ( int k =j+1; k < word_end - word_start;k++)
			   if (word_start[j] == word_start[k]) {
				   t = false;
			   }
	   }
	   if (t == true) {
		   *word_end = '\0';
		   cout << word_start << endl;
		   break;
	   }
	   while (str[i] == ' ') {

	   }


		
	}
}