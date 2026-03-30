#include <iostream>
// write your code here......
#include <map>

using namespace std;

int main() {

    char str[100] = { 0 };
    cin.getline(str, sizeof(str));

    // write your code here......
    map<char, int> cnt;
    for (int i = 0; str[i] != '\0'; ++i) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            cnt[str[i]]++;
        }
    }

    for (map<char, int>::iterator it = cnt.begin(); it != cnt.end(); ++it) {
        cout << it->first << ":" << it->second << endl;
    }
    

    return 0;
}
