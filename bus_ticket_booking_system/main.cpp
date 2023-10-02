#include <iostream>
#include <string>
#include <cctype>
#include "myFunctions.h"

using namespace std;

int main() {
  // prompt the user to choose an option
  int user_choice = 0;
  
  while (true) {
    cout << "1- Add subscribers to the system"
	 << "\n2- Query on subscription"
	 << "\n3- Ticket prices for guests"
	 << "\n4- Close!" << endl;

    cin >> user_choice;

    // check input is one of the four options
    if (user_choice >= 1 && user_choice <= 4)
      break;
    else
      // if not repromt the user to enter a valid number
      cerr << "Invalid option, try again ... " << endl;
  }

  // add subscribers to the system
  const int maxSubs = 100;
  int subs_num = 0, IDs[maxSubs];
  string name, subs[maxSubs];
  
  switch (user_choice) {
  case 1:
    while (true) {
      // get number of subscribers
      cout << "How many subscribers would you like to add? ";
      cin >> subs_num;

      // no. of subs is not more than 100 new member
      if (subs_num > 0 && subs_num <= 100)
	break;
      else
	cerr << "Invalid input, no. of subscribers must be in range of [1, 100], try again ..." << endl;
    }

    for (int i = 0; i < subs_num; ++i) {
      while (true) {
	// get name from the user
	cin.ignore();
        getline(cin, name);
	
	// check if name is valid
	if (isValidName(name)) {
	  // check if name is registered
	  if (!isReg(name, subs, maxSubs)) {
	    // add name to the system
	    subs[i] = name;
	    giveID(i, IDs);
	    cout << "user was added successfully on system! with id: " << IDs[i] << endl;
	    break;
	  } else {
	    cout << "User already exists on system!" << endl;
	    break;
	  }
	} else {
 	  cerr << "Invalid name, try again ... " << endl;
	}
      }
    }
    break;
  case 2:
    // query on subscription
    string name;    // name to be entered
    int id;         // id to be entered
    
    while (true) {
      // get the name of the user
      cout << "Enter full name: ";
      cin.ignore();
      getline(cin, name);

      int nameIndex = 0;
      if (isValidName(name)) {
	if (isReg(name, subs, maxSubs, nameIndex)) {
	  cout << "Enter your ID: ";
	  cin >> id;

	  // check the entered id
	  for (int i = 3; i > 0; --i) {
	    if (checkUserID(IDs, nameIndex, id))
	      cout << "Access granted" << endl;
	    else {
	      cerr << "Id is Wrong, terminating ..." << endl;
	      break;
	    }
	  }
	  
	} else {
	  int second_choice = 0;
	  
	  while (true) {
	    // if name isn't on system
	    cout << "User is NOT subscribing !"
		 << "\nChoose a ticket to travel as a guest:"
		 << "\n1- Second class ticket: 50 L.E"
		 << "\n2- First class ticket: 100 L.E"
		 << "\n3- VIP special ticket: 150 L.E"
		 << "Or choose 0 to add him to system" << endl;

	    if (second_choice >= 0 && second_choice <= 3)
	      break;
	    else
	      cerr << "Invalid input, try again ... " << endl;
	  }
	  switch (second_choice) {
	  case 1:
	  case 2:
	  case 3:
	    cout << "Successful operation" << endl;
	    break;
	  case 0:
	    // add the user to the system
	    addUserToSystem(name, subs, IDs, maxSubs);
	    cout << "User was successfully added to the system!" << endl;
	    break;
	  default:
	    break;
	  }
	}
      }
      break;
    case 3:
      break;
    case 4:
      break;
    default:
      break;
    }
  }
  return 0;
}
