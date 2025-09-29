// COMSC-210 | Lab 15 | Quang Ngo
// IDE used: Visual Studio Code
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Movie {
    private:
        string screenWriter;
        int year;
        string title;

    public:
        void setScreenWriter(const string& s) {
            screenWriter = s;
        }
        void setYear(const string& y) {
            year = y;
        }
        void setTitle(const string& t) {
            title = t;
        }

        string getScreenWriter() const {
            return screenWriter;
        }
        int getYear() const {
            return year;
        }
        string getTitle() const {
            return title;
        }

        void print() const {
            cout << "Movie: " << screenWriter << end;
            cout << "    Year released: " << year << end;
            cout << "    Screenwriter: " << title << end;
        }
};

int main() {
    ifstream inputFile("input.txt");
    
    vector<Movie> movies;
    return 0;
}
