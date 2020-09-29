#include<bits/stdc++.h>
#include<fstream>
#include<string>
using namespace std;
void optimization(const char *s) {        
    int flag=0,flagmul=0;
    ifstream myFile;
    ofstream optFile;
    //optFile.open("1305115_final.txt");
    optFile.open("16201134_final.asm");

    myFile.open(s); 
    // myFile.open("16201134_code.asm");
    string line1="";
    string line2="";
	if (myFile.is_open()) {        
        while (!myFile.eof()) {
			getline(myFile, line1);			
			// cout<<line1 << " " << line1.length()<<endl;							
            cout << line1 << " is" << endl;
			if(flag==0) {
    			optFile<<line1<<endl;
			}			
			else flag=0;			
			line2=line1;
		}				
	}
    myFile.close();
    return;
}

