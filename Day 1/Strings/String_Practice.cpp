#include <iostream>
#include "String_Practice.h"
using namespace std;

void CountVowels(string word) {
    // Your code here
   int a,e,i,o,u;
   for (int j = 0; j <=word.length(); j++){
       if(word[j] == 'a'){
           a++;
       }
       else if(word[i] == 'e'){
           e++;
       }
       else if(word[i] == 'i'){
           i++;
       }
       else if(word[i] == 'o'){
           o++;
       }
       else if(word[i] == 'u'){
           u++;
       }
   }
   cout << "A:" << a << endl << "E:" << e << endl << "I:" << i << endl << "O:" << o << endl << "U:" << u << endl;

}

string Shout(string word) {
    // Your code here
    for( int i = 0; i<word.length();i++){
        word[i] = toupper(word[i])
    }
    return word;
}

string RemovePunctuation(string word) {
    string str = "";
    // Your code here

    return str;
}
