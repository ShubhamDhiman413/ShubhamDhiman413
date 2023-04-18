#include<iostream> 
using namespace std;
int main(){
    int ccount =0;
    int word=1;
    int count =0;
    char s[]="How are you";
    //FOR COUNTING VOWELS
    for(int i=0;i<s[i]!='\0';i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            count++;
        }
    }
    //FOR COUNITNG CONSONENTS
    for(int i=0;i<s[i]!='\0';i++){
    if(s[i>=65&& s[i]<=90 || s[i]>=90&&s[i]<=120]){
      ccount++;
    }
    }
    //FOR COUNTING WORDS (MEANS JOINT WORDS AFTER SPACES)
    for(int i=0;i<s[i]!='\0';i++){
    if(s[i]==' '&& s[i-1]!=' '){      
        word++;
    }
    }
    cout<<count<<endl;
    cout<<ccount<<endl;
    cout<<word;
}