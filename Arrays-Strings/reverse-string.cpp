#include <iostream>
#include <string>
using namespace std;

void reverseString(string& s)
{
    int left = 0;
    int right = s.length() - 1;

    while (left < right)
    {
        swap(s[left], s[right]);
        left++;
        right--;
    }
}

int main()
{
    // Test Case 1
    string s1 = "hello";
    reverseString(s1);
    cout << "Test Case 1: " << s1 << endl;

    // Test Case 2 - edge case
    string s2 = "a";
    reverseString(s2);
    cout << "Test Case 2: " << s2 << endl;

    return 0;
}