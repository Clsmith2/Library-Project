#ifndef BOOK_H
#define BOOK_H
#include<string>
#include "Media.h"
class Book : public Media {
    public:
        Book(const std::string& title, const std::string& call_number, const std::string& subjects,
         const std::string& notes, const std::string& author, const std::string& description,
         const std::string& publisher, const std::string& city, const std::string& year,
         const std::string& series);
        bool contains_other(const std::string& ss) const;
        void display() const;
    private: 
        std::string author;
        std::string description;
        std::string publisher;
        std::string city;
        std::string year;
        std::string series;
};
#endif