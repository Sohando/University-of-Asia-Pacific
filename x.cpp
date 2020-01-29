#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
// 
typedef vector <int> vi;
typedef pair <int, int> ii;
// 
vector <string> vs;

void fun(int idx, string s) {
	if (idx > 6) return;
	if (idx == 6) {
		// cout << s << endl;
		vs.push_back(s);
		return;
	}

	fun(idx + 1, s + 'A');
	fun(idx + 1, s + 'C');
	fun(idx + 1, s + 'G');
	fun(idx + 1, s + 'T');

}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// freopen("mouse_prom.in", "r", stdin);
	fun(0, "");
	string line;
	cout << "@relation " << "human\n"; 
	for (auto s : vs) {
		cout << "@attribute " << s << " numeric\n"; 
	}
	map <string, int> mp;
	cout << "@data\n";
	ifstream myfile("human_nonprom.in");
	if (myfile.is_open()) {
		while ( getline (myfile,line) ) {
			// cout << line << '\n';
			mp.clear();
			for (int i = 0; i < line.size(); i += 6) {
				string str = line.substr(i, 6);
				// cout << str << endl;
				mp[str]++;
			}
			for (int i = 0; i < vs.size(); ++i) {
				cout << mp[vs[i]] << ",";
			}
			cout << 0 << '\n';
		}
		myfile.close();
	}
	else cout << "Unable to open file"; 

	myfile.open("human_prom.in");
	if (myfile.is_open()) {
		while ( getline (myfile,line) ) {
			// cout << line << '\n';
			mp.clear();
			for (int i = 0; i < line.size(); i += 6) {
				string str = line.substr(i, 6);
				// cout << str << endl;
				mp[str]++;
			}
			for (int i = 0; i < vs.size(); ++i) {
				cout << mp[vs[i]] << ",";
			}
			cout << 1 << '\n';
		}
		myfile.close();
	}
	else cout << "Unable to open file"; 
	return 0;
}