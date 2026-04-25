#include "CodeGenerator.h"
#include <string>
using namespace std;

string CodeGenerator::generate(const string& url) {

    string clean = url;

    // remove https://
    size_t pos = clean.find("://");
    if (pos != string::npos) {
        clean = clean.substr(pos + 3);
    }

    // get domain
    size_t slash = clean.find('/');
    string domain = clean.substr(0, slash);

    // remove www
    if (domain.find("www.") == 0) {
        domain = domain.substr(4);
    }

    // 🔥 short domain
    string shortDomain;

    if (domain.find("youtube") != string::npos)
        shortDomain = "yt";
    else if (domain.find("facebook") != string::npos)
        shortDomain = "fb";
    else if (domain.find("google") != string::npos)
        shortDomain = "go";
    else
        shortDomain = domain.substr(0, 2);

    // 🔥 ultra short ID
    size_t hash = 0;
    for (char c : url) {
        hash = hash * 31 + c;
    }

    string id = to_string(hash);
    id = id.substr(0, 3);

    return shortDomain + "/" + id;
}