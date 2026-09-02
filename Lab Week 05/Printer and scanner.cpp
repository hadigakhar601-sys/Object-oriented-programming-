#include <iostream>
using namespace std;

class Printer {
public:
    void print_document() {
        cout << "Printing document..." << endl;
    }
};

class Scanner {
public:
    void scan_document() {
        cout << "Scanning document..." << endl;
    }
};

class Photocopier : public Printer, public Scanner {
public:
    void photocopy() {
        cout << "Starting photocopy process..." << endl;
        scan_document();
        print_document();
        cout << "Photocopy completed." << endl;
    }
};

int main() {
    Photocopier pc;
    
    cout << "--- Using Individual Functions ---" << endl;
    pc.print_document();
    pc.scan_document();
    
    cout << "\n--- Using Photocopy Function ---" << endl;
    pc.photocopy();
    
    return 0;
}