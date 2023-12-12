#include <iostream>
#include <cctype>

void count(const char s[], int counts[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        char c = std::tolower(s[i]);
        if (std::isalpha(c)) {
            int index = c - 'a';
            counts[index]++;
        }
    }
}
int main() {
    const int a = 26;
    int counts[a] = { 0 };
    char s1[100];
    std::cout << "enter s string";
    std::cin.getline(s1, 100);
    count(s1, counts);
    for (int i = 0; i < a; i++) {
        char letter = 'a' + i;
       if(counts[i]!=0) std::cout << letter << ": " << counts[i] << std::endl;
    }
    return 0;
}
