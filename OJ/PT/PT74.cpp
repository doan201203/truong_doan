#include <iostream>

using namespace std;
string LongestWord(string sen) {

  int n=0;
  string abc,maxing;
  for(int i=0;i<sen.length();i++)
  {
        if(sen[i]!=39&&(sen[i]<'a'||sen[i]>'z')&&(sen[i]<'A'||sen[i]>'Z'))
      {
          if(abc.length()>maxing.length())
            maxing=abc;
          abc.clear();
          continue;
      }
        abc+=sen[i];
  }
  if(maxing.length() < abc.length())maxing=abc;
  return maxing;

}
int main()
{
   cin.ignore();
   string s;
   while(getline(cin,s)){
       string lf=LongestWord(s);
       int dem=0;
       for(char x:lf){
           dem++;
       }
       cout<<dem<<endl;
   }
   
   return 0;
}
