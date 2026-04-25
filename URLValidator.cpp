#include "URLValidator.h"

bool URLValidator::isValid(const string& url) {
    if (url.empty()) return false;

    if (url.find("http://") == 0 || url.find("https://") == 0) {
        return true;
    }

    return false;
}