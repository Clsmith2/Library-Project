#include<iostream>
#include "Film.h"
#include <iomanip>
using std::cout;
Film::Film(const std::string& title, const std::string& call_number, const std::string& subjects,
           const std::string& notes, const std::string& director, const std::string& year)
    : Media(title, call_number, subjects, notes), // Initialize the base class (Media)
      director(director),
      year(year) {}


bool Film::contains_other(const std::string& ss) const{
  //Check if patrons search matches Notes Director or Year
    if (notes.find(ss) !=std::string::npos || director.find(ss) !=std::string::npos
        ||year.find(ss) !=std::string::npos)
    {
        return true;
    } else {
        return false;
    }
}

void Film::display() const{
  cout << "==========================\n";
  cout << "========== FILM ==========\n";
  cout << "==========================\n";
  cout << std::setw(22) << std::left << "call_number:" << call_number << '\n'; 
  cout << std::setw(22) << std::left << "title:" << title << '\n'; 
  cout << std::setw(22) << std::left << "subjects:" << subjects << '\n'; 
  cout << std::setw(22) << std::left << "director:" << director << '\n'; 
  cout << std::setw(22) << std::left << "notes:" << notes << '\n'; 
  cout << std::setw(22) << std::left << "year:" << year << '\n'; 
}