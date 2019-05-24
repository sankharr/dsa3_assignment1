#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int wildCardsCounter(string str1){
    
    int len;

    len = str1.size();
    cout << len << "\n";
}

int main(){
    
    int textLineCount = 0;    
    
    ifstream infile("texts.txt");           //reading line from text file
    string textLine;

    while (getline(infile,textLine)){

        textLineCount++;
        cout << textLine << "\n";

        ifstream infile("patterns.txt");        //reading the corresponding pattern line
        string patternLine;
        int patternLineCount = 0;

        while (getline(infile,patternLine)){

            patternLineCount++;

            if(patternLineCount == textLineCount){
                cout << patternLine << "\n";
                wildCardsCounter(patternLine);
            }
        }

        cout << "\n\n";
        
    }
    
    
    return 0;

}

