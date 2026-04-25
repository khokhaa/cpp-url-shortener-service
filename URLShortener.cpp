#include "URLShortener.h"

URLShortener::URLShortener() {
    storage.load();
}

string URLShortener::shortenURL(const string& url) {

    if (!validator.isValid(url)) {
        return "Invalid URL";
    }

    string existingCode = storage.getCode(url);
    if (existingCode != "") {
        return "https://my.ly/" + existingCode;
    }

    string code = generator.generate(url);

    storage.save(code, url);

    return "https://my.ly/" + code;
}

string URLShortener::resolveURL(const string& input) {

    string prefix = "https://my.ly/";
    string code = input;

    if (code.find(prefix) == 0) {
        code = code.substr(prefix.length());
    }

    return storage.find(code);
}