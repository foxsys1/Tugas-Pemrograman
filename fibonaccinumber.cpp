#include <iostream>
#include <vector>
using namespace std;
// ini buatan muhammad arifudin yazid ata
int main() {
    int digits;
    int sums = 0;
    cout << "How many digits do you want: ";
    cin >> digits;
    if (digits > 0)
    {
        vector<int> angga = {1,0};
        cout << "0 ";
        for (int i = 2; i <= digits; i++)
    {   
        angga.push_back(angga[i - 2] + angga[i - 1]);
        cout << angga[i] << " ";
        sums += angga[i];
    }
    cout << "\n" << "The sums of " << digits << " of fibonacci numbers are " << sums;
    }
    else {
        cout << "Only positive integers";
    }
}
