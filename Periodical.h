#ifndef PERIODICAL_H
#define PERIODICAL_H
#include "Media.h"
#include <string>
class Periodical : public Media {
    public:
        Periodical(const std::string& title, const std::string& call_number, const std::string& subjects,
               const std::string& notes, const std::string& author, const std::string& description,
               const std::string& publisher, const std::string& publishing_history,
               const std::string& series, const std::string& related_titles,
               const std::string& other_forms_of_title, const std::string& govt_doc_number);
        bool contains_other(const std::string& ss) const;
        void display() const;
    private:
        std::string author; 
        std::string description;
        std::string publisher;
        std::string publishing_history;
        std::string series;
        std::string related_titles;
        std::string other_forms_of_title;
        std::string govt_doc_number;
};
#endif