#include<iostream>
#include "Book.h"
#include "Media.h"
#include <iomanip>
using std::cout;

Book::Book(const std::string& title, const std::string& call_number, const std::string& subjects, const std::string& notes, 
           const std::string& author, const std::string& description, const std::string& publisher,
           const std::string& city, const std::string& year, const std::string& series)
    : Media(title, call_number, subjects, notes), // Initialize the base class (Media)
      author(author),
      description(description),
      publisher(publisher),
      city(city),
      year(year),
      series(series) {}

bool Book::contains_other(const std::string& ss) const{
  // check if patron search matches Description Notes or Year
    if (description.find(ss) !=std::string::npos || notes.find(ss) !=std::string::npos
        ||year.find(ss) !=std::string::npos)
    {
        return true;
    } else {
        return false;
    }
}

void Book::display() const{
  cout << "==========================\n";
  cout << "========== BOOK ==========\n";
  cout << "==========================\n";
  cout << std::setw(22) << std::left << "call_number:" << call_number << '\n'; 
  cout << std::setw(22) << std::left << "title:" << title << '\n'; 
  cout << std::setw(22) << std::left << "subjects:" << subjects << '\n'; 
  cout << std::setw(22) << std::left << "author:" << author << '\n'; 
  cout << std::setw(22) << std::left << "description:" << description << '\n'; 
  cout << std::setw(22) << std::left << "publisher:" << publisher << '\n'; 
  cout << std::setw(22) << std::left << "city:" << city << '\n'; 
  cout << std::setw(22) << std::left << "year:" << year << '\n'; 
  cout << std::setw(22) << std::left << "series:" << series << '\n'; 
  cout << std::setw(22) << std::left << "notes:" << notes << '\n'; 
}