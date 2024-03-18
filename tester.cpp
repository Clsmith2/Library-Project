#include "Book.h"
#include "Periodical.h"
#include "Library.h"
#include "Film.h"
#include "Video.h"
#include <iostream>
using namespace std;
int main() {
    Library testLib;
    string searchString;
    vector<Media*> matching_media;
    int done = 0;
/*1) call_number
2) title
3) subject
4) other
5) exit
Enter keyphrase: */
    while (!done) { // Continue looping until done is true (1)
        cout << "1) call_number\n";
        cout << "2) title\n";
        cout << "3) subject\n";
        cout << "4) other\n";
        cout << "5) exit\n";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter keyphrase: \n";
                cin >> searchString;
                matching_media = testLib.fetch_all_with_callnumber(searchString);
                break;
            case 2:
                cout << "Enter keyphrase: \n";
                cin >> searchString;
                matching_media = testLib.fetch_all_with_title(searchString);
                break;
            case 3:
                cout << "Enter keyphrase: \n";
                cin >> searchString;
                matching_media = testLib.fetch_all_with_subjects(searchString);
                break;
            case 4:
                cout << "Enter keyphrase: \n";
                cin >> searchString;
                matching_media = testLib.fetch_all_with_other(searchString);
                break;
            case 5:
                done = 1;
                break;
            default:
                cout << "Oopsie daisy; Wrong option try again!\n";
                break;
        }
    }

    return 0;
}