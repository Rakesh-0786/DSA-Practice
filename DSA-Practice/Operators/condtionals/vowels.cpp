// write a program in which you take a char  input  from user and  then check it vowels or consonants.

#include<bits/stdc++.h>

using namespace std;

int main(){

    char character;
     
     cout<<"Enter a character";
     cin>>character;

     switch(character){
        case 'a':
        cout<<"vowel"<<endl;
        break;

        case 'e':
        cout<<"vowel"<<endl;
        break;


        case 'i':
        cout<<"vowel"<<endl;
        break;


        case 'o':
        cout<<"vowel"<<endl;
        break;

        case 'u':
        cout<<"vowel"<<endl;
        break;

        default:
        cout<<"consonant";


        
     }
return 0;
}