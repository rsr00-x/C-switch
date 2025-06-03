#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter the Letter: ";
    cin>>c;
  switch(c)
    {
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
        case 'A':
        cout<<"vowel"<<endl;
        break;
        case 'E':
        cout<<"vowel"<<endl;
        break;
        case 'I':
        cout<<"vowel"<<endl;
        break;
        case 'O':
        cout<<"vowel"<<endl;
        break;
        case 'U':
        cout<<"vowel"<<endl;
        break;
        default:
            {
            if ((c>='a'&&c<='z' || c>='A'&&c<='Z'))
                cout<<"consonant"<<endl;
            else
                cout<<"Not a character"<<endl;
            break;
            }
    }
            return 0;
    }

