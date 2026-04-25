#ifndef URLSHORTENER_H
#define URLSHORTENER_H

#include <string>
#include "URLValidator.h"
#include "CodeGenerator.h"
#include "Storage.h"

using namespace std;

class URLShortener {
private:
    URLValidator validator;
    CodeGenerator generator;
    Storage storage;

public:
    URLShortener();
    string shortenURL(const string& longURL);
    string resolveURL(const string& shortCode);
};

#endif