#include<bits/stdc++.h>
using namespace std;

void concatStrings(string s1, string s2) {
    cout << "Concatenated: " << s1 + s2 << endl;
}

void reverseString(string s) {
    reverse(s.begin(), s.end());
    cout << "Reversed: " << s << endl;
}

void deleteVowels(string s) {
    string result = "";
    for (char c : s)
        if (string("AEIOUaeiou").find(c) == string::npos) result += c;
    cout << "Without vowels: " << result << endl;
}

void sortStrings(string arr[], int n) {
    sort(arr, arr+n);
    cout << "Sorted strings:\n";
    for (int i=0;i<n;i++) cout << arr[i] << endl;
}

void toLowercase(string s) {
    for (char &c : s) c = tolower(c);
    cout << "Lowercase: " << s << endl;
}

int main() {
    concatStrings("Hello ", "World");
    reverseString("Programming");
    deleteVowels("Programming");
    string words[] = {"banana", "apple", "cherry"};
    sortStrings(words, 3);
    toLowercase("HeLLo C++");
}


