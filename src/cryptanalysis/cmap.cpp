#include "cmap.h"


void cmap::mapping()
{
  string text;
  string temp;
  char tmp[50];
  while(fscanf(file,"%s*c",tmp)!=EOF)  
  {  
    temp=tmp;	    
    for(unsigned int i=0; i<str.length()&&temp.length(); i++)
    {
       char ch = str.at(i);
       int x = int(ch) - 97;
       text = temp.at(x);    
       file1<<text;
    }
    file1<<"\n";
 //cout<<temp<<endl;
  }

}


/*
int main()
{
    char str[50];
	
	cout<<"\n Enter the string to be encrypted : ";
	//getline(cin, str);
	cin>>str;
	cmap cm(str);
		
	return 0;	
}
*/
