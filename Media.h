#ifndef MEDIA_H
#define MEDIA_H
#include<string>
class Media {
    public:
        Media(const std::string& title, const std::string& call_number, const std::string& subjects, const std::string& notes);
        bool contains_title(const std::string& ss) const;
        bool contains_cn(const std::string& ss) const;
        bool contains_subjects(const std::string& ss) const;
        //pure virtual functions
        virtual void display() const =0;
        virtual bool contains_other(const std::string& ss) const =0;
        virtual ~Media(){}
    protected:
        std::string call_number;
        std::string title;
        std::string subjects;
        std::string notes;
};
#endif
