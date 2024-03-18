#include "Media.h"
#include<iostream>
#include<string>
using std::cout;

Media::Media(const std::string& title, const std::string& call_number, const std::string& subjects, const std::string& notes)
    : title(title), call_number(call_number), subjects(subjects), notes(notes) {}

    
bool Media::contains_title(const std::string& ss) const{
    if (title.find(ss) !=std::string::npos) {
        return true;
    } else {
        return false;
    }
}

bool Media::contains_cn(const std::string& ss) const{
    if (call_number.find(ss) !=std::string::npos) {
        return true;
    } else {
        return false;
    }
}
bool Media::contains_subjects(const std::string& ss) const{
    if (subjects.find(ss) !=std::string::npos) {
        return true;
    } else {
        return false;
    }
}
