//#ifndef TABLE_H
//#define TABLE_H

#include<iostream>
#include<fstream>
#include<string>
using namespace std;


void optimization(const char *s)
{
 int flag=0,flagmul=0;
 ifstream myFile;
 ofstream optFile;
 //optFile.open("1305115_final.txt");
 optFile.open("1305115_final.asm");



 myFile.open(s);
//myFile.open("1305115_code.asm");
 string line1="";
 string line2="";
	 if (myFile.is_open()) 
	{
		 while (!myFile.eof()) 
		 {
			getline(myFile,line1);
			
			cout<<line1<<" "<<line1.length()<<endl;
			
			
			
			if(flag==0){
			optFile<<line1<<endl;
			}
			
			else flag=0;
			
			line2=line1;
		}
				
	}

 myFile.close();

return ;
}


//#endif

