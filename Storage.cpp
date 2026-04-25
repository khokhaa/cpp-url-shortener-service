#include "Storage.h"
#include <fstream>
#include <sstream>

void Storage::load() {
    ifstream file("data.txt");
    string line;

    while (getline(file, line)) {
        stringstream ss(line);
        string code, url;

        getline(ss, code, '|');
        getline(ss, url);

        codeToUrl[code] = url;
        urlToCode[url] = code;
    }
}

void Storage::save(const string& code, const string& url) {

    codeToUrl[code] = url;
    urlToCode[url] = code;

    ofstream file("data.txt", ios::app);
    file << code << "|" << url << endl;
}

string Storage::find(const string& code) {

    if (codeToUrl.find(code) != codeToUrl.end()) {
        return codeToUrl[code];
    }

    return "NOT_FOUND";
}

string Storage::getCode(const string& url) {

    if (urlToCode.find(url) != urlToCode.end()) {
        return urlToCode[url];
    }

    return "";
}