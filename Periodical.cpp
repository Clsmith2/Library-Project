#include "Periodical.h"
#include <iostream>
#include <iomanip>
using std::cout;


// Constructor for the Periodical class
Periodical::Periodical(const std::string& title, const std::string& call_number, const std::string& subjects,
                       const std::string& notes, const std::string& author, const std::string& description,
                       const std::string& publisher, const std::string& publishing_history,
                       const std::string& series, const std::string& related_titles,
                       const std::string& other_forms_of_title, const std::string& govt_doc_number)
    : Media(title, call_number, subjects, notes), // Initialize the base class (Media)
      author(author),
      description(description),
      publisher(publisher),
      publishing_history(publishing_history),
      series(series),
      related_titles(related_titles),
      other_forms_of_title(other_forms_of_title),
      govt_doc_number(govt_doc_number) {}
    
bool Periodical::contains_other(const std::string& ss) const {
  //Desc Notes Series And related titles
    if (description.find(ss) !=std::string::npos || notes.find(ss) !=std::string::npos
        ||series.find(ss) !=std::string::npos || related_titles.find(ss) !=std::string::npos)
    {
        return true;
    } else {
        return false;
    }
}

void Periodical::display() const{
  cout << "==========================\n";
  cout << "======= PERIODICAL =======\n";
  cout << "==========================\n";
  cout << std::setw(22) << std::left << "call_number:" << call_number << '\n'; 
  cout << std::setw(22) << std::left << "title:" << title << '\n'; 
  cout << std::setw(22) << std::left << "subjects:" << subjects << '\n'; 
  cout << std::setw(22) << std::left << "author:" << author << '\n'; 
  cout << std::setw(22) << std::left << "description:" << description << '\n'; 
  cout << std::setw(22) << std::left << "publisher:" << publisher << '\n'; 
  cout << std::setw(22) << std::left << "publishing_history:" << publishing_history << '\n';
  cout << std::setw(22) << std::left << "series:" << series << '\n'; 
  cout << std::setw(22) << std::left << "notes:" << notes << '\n'; 
  cout << std::setw(22) << std::left << "related_titles:" << related_titles << '\n'; 
  cout << std::setw(22) << std::left << "other_forms_of_title:" << other_forms_of_title << '\n'; 
  cout << std::setw(22) << std::left << "govt_doc_number:" << govt_doc_number << '\n'; 
}
