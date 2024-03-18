#ifndef FILM_H
#define FILM_H
#include "Media.h"
#include <string>
class Film : public Media {
    public:
        Film(const std::string& title, const std::string& call_number, const std::string& subjects,
         const std::string& notes, const std::string& director, const std::string& year);
        bool contains_other(const std::string& ss) const;
        void display() const;
    private:
        std::string director;
        std::string year;
};
#endif