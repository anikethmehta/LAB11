#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cerr << "Usage: " << argv[0] << " <filename> " << endl;
        return 1;
    }

    const char* filename = argv[1];
    ifstream file(filename);

    if (!file) {
        cerr << "Error: Unable to open file '" << filename << "'" << endl;
        return 1;
    }

    string line;
    while (getline(file, line)) {
        for (char& c : line) {
            c = toupper(c);
        }
        cout << line << endl;
    }

    file.close();

    return 0;
}
