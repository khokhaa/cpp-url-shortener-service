#ifndef STORAGE_H
#define STORAGE_H

#include <string>
#include <unordered_map>
using namespace std;

class Storage {
private:
    unordered_map<string, string> codeToUrl;
    unordered_map<string, string> urlToCode;

public:
    void load();
    void save(const string& code, const string& url);

    string find(const string& code);

    // 🔥 دي أهم سطر
    string getCode(const string& url);
};

#endif