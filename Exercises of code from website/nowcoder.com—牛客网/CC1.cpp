#include <iostream>
using namespace std;

int main() {

    char str[100] = { 0 };
    cin.getline(str, sizeof(str));

    int len = 0;
    char* p = str;

    while (*p != '\0')
    {
        len++;
        p++;
    }
    printf("%d", len);
    return 0;
}