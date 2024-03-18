#ifndef LIBRARY_H
#define LIBRARY_H
#include <string>
#include <vector>
#include <string>
#include "Media.h"
class Library {
    public:
        Library();
        ~Library();
        std::vector<Media*> fetch_all_with_title(const std::string&) const;
        std::vector<Media*> fetch_all_with_callnumber(const std::string&) const;
        std::vector<Media*> fetch_all_with_subjects(const std::string&) const;
        std::vector<Media*> fetch_all_with_other(const std::string&) const;
    private:
        std::vector<Media*> card_catalog;
};
#endif