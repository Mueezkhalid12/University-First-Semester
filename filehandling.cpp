#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    //variable for store the data of file 
    char arr[100];
    ofstream write("type casting.cpp");
    write<<"Rahat and Hameed are good friend. They live in durani hostel.";
    write.close();
    ifstream read("type casting.cpp");
    int i=0,vowel =0,word = 1, consonent=0;
    while(read.get(arr[i])){
        if(arr[i]=='\0'){
            break;
        }
        if(arr[i] == ' '){
            word++;
        }
        else{
                if((arr[i]=='a') || (arr[i]=='e') || (arr[i]=='i') || (arr[i]=='o') || (arr[i]=='u') || (arr[i]=='A') || (arr[i]=='E') || (arr[i]=='I') || (arr[i]=='O') || (arr[i]=='U')){
                    vowel++;
                }
                else{
                    consonent++;
                }
        }
        i++;
    }
    cout<<"The total consonent in the file is: "<<consonent<<endl;
    cout<<"The total vowel in the file is: "<<vowel<<endl;
    cout<<"The total word in the file is: "<<word<<endl;
    
    return 0;
}