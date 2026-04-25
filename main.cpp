#include <iostream>
#include "URLShortener.h"

using namespace std;

int main() {
    URLShortener shortener;
    int choice;

    while (true) {
        cout << "\n1. Shorten URL\n2. Resolve URL\n3. Exit\n";
        cin >> choice;

        if (choice == 1) {
            string url;
            cout << "Enter URL: ";
            cin >> url;

            string code = shortener.shortenURL(url);
            cout << "Short URL: " << code << endl;

        } else if (choice == 2) {
            string code;
            cout << "Enter short code: ";
            cin >> code;

            string url = shortener.resolveURL(code);
            cout << "Original URL: " << url << endl;

        } else {
            break;
        }
    }

    return 0;
}