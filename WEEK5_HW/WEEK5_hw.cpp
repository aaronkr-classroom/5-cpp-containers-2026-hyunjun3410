// 5 - 1

#include <algorithm>
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

struct Rotation {
	string before;
	string after;
};
bool compareRotations(const Rotation& a, const Rotation& b) {
	return a.after < b.after;
}

int main(void) {
	
	vector<Rotation> all_rotations;
	string line;

	cout << "문장을 입력하세요 >>" << endl;

	while (getline(cin, line) && !line.empty()) {
		vector<string> words;
		stringstream ss(line);
		string word;		
	

	while (ss >> word) {
		word.push_back(word);
	}

	return 0;
}
