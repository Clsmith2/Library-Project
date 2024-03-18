#include<iostream>
#include "Video.h"
#include <iomanip>
using std::cout;
Video::Video(const std::string& title, const std::string& call_number, const std::string& subjects,
             const std::string& notes, const std::string& description, const std::string& distributor,
             const std::string& series, const std::string& label)
    : Media(title, call_number, subjects, notes), // Initialize the base class (Media)
      description(description),
      distributor(distributor),
      series(series),
      label(label) {}


bool Video::contains_other(const std::string& ss) const{
  //Check if patron search mathches something in Desc Notes and Distributor
    if (description.find(ss) !=std::string::npos || notes.find(ss) !=std::string::npos
        ||distributor.find(ss) !=std::string::npos)
    {
        return true;
    } else {
        return false;
    }
}

void Video::display() const{
  cout << "==========================\n";
  cout << "========== VIDEO =========\n";
  cout << "==========================\n";
  cout << std::setw(22) << std::left << "call_number:" << call_number << '\n'; 
  cout << std::setw(22) << std::left << "title:" << title << '\n'; 
  cout << std::setw(22) << std::left << "subjects:" << subjects << '\n'; 
  cout << std::setw(22) << std::left << "description:" << description << '\n'; 
  cout << std::setw(22) << std::left << "distributor:" << distributor << '\n';  
  cout << std::setw(22) << std::left << "notes:" << notes << '\n'; 
  cout << std::setw(22) << std::left << "series:" << series << '\n';
  cout << std::setw(22) << std::left << "label:" << label << '\n';  
}
