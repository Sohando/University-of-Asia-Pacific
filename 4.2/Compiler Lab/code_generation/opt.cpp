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
            auto tokenizer = [&](string line) {
                vector <string> tokens;
                stringstream check1(line);
                string intermediate; 
                while(getline(check1, intermediate, ' ')) {
                    tokens.push_back(intermediate); 
                } 
                return tokens;
            };
            vector<string> line1_tokens = tokenizer(line1);
            vector<string> line2_tokens = tokenizer(line2);
			/*
             *
             */
            auto print = [&](vector<string> tokens) {
                for (int i = 0; i < (int) tokens.size(); ++i) {
                    cout << tokens[i] << " ";
                }
                cout << endl;
            };
            if (!line1_tokens.empty() and !line2_tokens.empty()) {
                if (line1_tokens[0] == "MOV" and line2_tokens[0] == "MOV") {
                    // cout << "Optimeze this " << line1 << " and 2 " << line2 << endl;
                    string op1(line1_tokens[1], 0, (int)line1_tokens[1].size() - 1);
                    string op2 = line1_tokens[2];
                    string op3(line2_tokens[1], 0, (int)line2_tokens[1].size() - 1);
                    string op4 = line2_tokens[2];
                    // cout << op1 << " " << op4 << " and " << op2 << " " << op3 << endl;
                    // print(line1_tokens);
                    // print(line2_tokens);
                    if (op1 == op4 and op2 == op3) {
                        flag = 1;
                    }
                }
                if (line1_tokens[0] == "MOV" and line1_tokens[2] == "1") {
                    // print(line1_tokens);
                    getline(myFile, line2);
                    flagmul = 2;
                    // cout << line1 << " " << line2 << endl;
                    vector<string> line2_tokens = tokenizer(line2);
                    if (line2_tokens[0] == "MUL") {
                        // cout << "multiplication by 1" << endl;
                        // flag = 1;
                        flagmul = 1;
                    } else if (line2_tokens[0] == "DIV") {
                        // flag = 1;
                        // cout << "Division by 1" << endl;
                        flagmul = 1;
                    } else {
                    }
                }
            }
            /*
             *
             * */

            if (flagmul == 1) {
                 // optFile<<line2<<endl;            
                 flagmul = 0;
            } else if (flagmul == 2) {
                optFile << line1 << endl;
                optFile << line2 << endl;
                flagmul = 0;
            } else {
                if (!flag) {
    			    optFile<<line1<<endl;
                } else {
                    flag = 0;
                }
                line2 = line1;
            }

		}				
	}
    myFile.close();
    return;
}
int main() {
    optimization("16201134_code.asm");
    return 0;
}
