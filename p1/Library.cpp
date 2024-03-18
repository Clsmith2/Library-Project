#include "Book.h"
#include "Periodical.h"
#include "Library.h"
#include "Film.h"
#include "Video.h"
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
Library::Library() {
    // Read data from text files and create objects for different media types

    // Read and create Book objects
    ifstream bookFile("book.txt");
    if (bookFile.is_open()) {
        string line;
        while (getline(bookFile, line)) {
            istringstream ss(line);
            string title, call_number, subjects, notes, author, description, publisher, city, year, series;
            getline(ss, call_number, '|');
            getline(ss, title, '|');
            getline(ss, subjects, '|');
            getline(ss, author, '|');
            getline(ss, description, '|');
            getline(ss, publisher, '|');
            getline(ss, city, '|');
            getline(ss, year, '|');
            getline(ss, series, '|');
            getline(ss, notes);

            card_catalog.push_back(new Book(title, call_number, subjects, notes, author, description, publisher, city, year, series));
        }
        bookFile.close();
    } else {
        cerr << "Error: Unable to open books.txt\n";
    }

    // Read and create Film objects
    ifstream filmFile("film.txt");
    if (filmFile.is_open()) {
        string line;
        while (getline(filmFile, line)) {
            istringstream ss(line);
            string title, call_number, subjects, notes, director, year;
            getline(ss, call_number, '|');
            getline(ss, title, '|');
            getline(ss, subjects, '|');
            getline(ss, director, '|');
            getline(ss, notes, '|');
            getline(ss, year);

            card_catalog.push_back(new Film(title, call_number, subjects, notes, director, year));
        }
        filmFile.close();
    } else {
        cerr << "Error: Unable to open films.txt\n";
    }

    // Read and create Video objects
    ifstream videoFile("video.txt");
    if (videoFile.is_open()) {
        string line;
        while (getline(videoFile, line)) {
            istringstream ss(line);
            string title, call_number, subjects, notes, description, distributor, series, label;
            getline(ss, call_number, '|');
            getline(ss, title, '|');
            getline(ss, subjects, '|');
            getline(ss, description, '|');
            getline(ss, distributor, '|');
            getline(ss, notes, '|');
            getline(ss, series, '|');
            getline(ss, label);

            card_catalog.push_back(new Video(title, call_number, subjects, notes, description, distributor, series, label));
        }
        videoFile.close();
    } else {
        cerr << "Error: Unable to open videos.txt\n";
    }

    // Read and create Periodical objects
    ifstream periodicalFile("periodical.txt");
    if (periodicalFile.is_open()) {
        string line;
        while (getline(periodicalFile, line)) {
            istringstream ss(line);
            string title, call_number, subjects, notes, author, description, publisher, publishing_history, series, related_titles, other_forms_of_title, govt_doc_number;
            getline(ss, call_number, '|');
            getline(ss, title, '|');
            getline(ss, subjects, '|');
            getline(ss, author, '|');
            getline(ss, description, '|');
            getline(ss, publisher, '|');
            getline(ss, publishing_history, '|');
            getline(ss, series, '|');
            getline(ss, notes, '|');
            getline(ss, related_titles, '|');
            getline(ss, other_forms_of_title, '|');
            getline(ss, govt_doc_number);

            card_catalog.push_back(new Periodical(title, call_number, subjects, notes, author, description, publisher, publishing_history, series, related_titles, other_forms_of_title, govt_doc_number));
        }
        periodicalFile.close();
    } else {
        cerr << "Error: Unable to open periodicals.txt\n";
    }
}

Library::~Library(){
    //iterate through card_catalog and delete all the media objects
    for(int i = 0; i < card_catalog.size(); i++){
        delete card_catalog[i];
    }
}
vector<Media*> Library::fetch_all_with_title(const string& title_to_find) const{
    //for loop through card_cat calling contains title on each object. 
    //If match then push back onto matching_media.
    vector<Media*> matching_media;
    for(int i = 0; i < card_catalog.size(); i++){
        if(card_catalog[i]->contains_title(title_to_find)){
            matching_media.push_back(card_catalog[i]);
            card_catalog[i]->display();
        }
    }
    return matching_media;
}

vector<Media*> Library::fetch_all_with_callnumber(const string& callnumber_to_find) const{
    vector<Media*> matching_media;
    for(int i = 0; i < card_catalog.size(); i++){
        if(card_catalog[i]->contains_cn(callnumber_to_find)){
            matching_media.push_back(card_catalog[i]);
            card_catalog[i]->display();
        }
    }
    return matching_media;
}

vector<Media*> Library::fetch_all_with_subjects(const string& subjects_to_find) const{
    vector<Media*> matching_media;
    for(int i = 0; i < card_catalog.size(); i++){
        if(card_catalog[i]->contains_subjects(subjects_to_find)){
            matching_media.push_back(card_catalog[i]);
            card_catalog[i]->display();
        }
    }
    return matching_media;
}

vector<Media*> Library::fetch_all_with_other(const string& other_to_find) const{
    vector<Media*> matching_media;
    for(int i = 0; i < card_catalog.size(); i++){
        if(card_catalog[i]->contains_other(other_to_find)){
            matching_media.push_back(card_catalog[i]);
            card_catalog[i]->display();
        }
    }
    return matching_media;
}
