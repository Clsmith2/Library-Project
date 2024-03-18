#ifndef VIDEO_H
#define VIDEO_H
#include "Media.h"
#include <string>
class Video : public Media {
    public:
        Video(const std::string& title, const std::string& call_number, const std::string& subjects,
          const std::string& notes, const std::string& description, const std::string& distributor,
          const std::string& series, const std::string& label);
        bool contains_other(const std::string& ss) const;
        void display() const;
    private:
        std::string description;
        std::string distributor;
        std::string series;
        std::string label;
};
#endif