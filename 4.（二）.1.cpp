#include <iostream>
using namespace std;
int indexOf(const char* s1, const char* s2) {
    int l1 = 0;
    int l2 = 0;
    while (s1[l1] != '\0') {
        l1++;
    }
    while (s2[l2] != '\0') {
        l2++;
    }
    for (int i = 0; i <= l2 - l1; i++) {
        int j;
        for (j = 0; j < l1; j++) {
            if (s2[i + j] != s1[j]) {
                break;
            }
        }

        if (j == l1) {
            return i;
        }
    }

    return -1;
}

int main() {
    const int m = 100;
    char *s1=new char[m];
    char *s2=new char[m];
    cout << "Enter the first string: ";
    cin.getline(s1, m);
    cout << "Enter the second string: ";
    cin.getline(s2, m);
    int v = indexOf(s1, s2);
    std::cout << "indexOf(s1,s2)is: " << v << std::endl;
    return 0;
    delete(s1,s2);
}
