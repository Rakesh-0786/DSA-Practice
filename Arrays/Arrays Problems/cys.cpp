#include <iostream>
#include <set>
using namespace std;

int main() {
    // Define a set named 'a' to store characters
    // set
    set<char> a={'e','r','a','e'};

    // Insert characters into the set
    // a.insert('G');
    // a.insert('F');
    // a.insert('G'); // 'G' is already in the set, so this insertion has no effect

    // Iterate over the elements in the set using a range-based for loop
    for (auto& str : a) {
        // Output each character followed by a space
        cout << str << ' ';
    }

    // Output a newline character to end the line
    cout << '\n';

    return 0;
}
