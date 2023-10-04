#include <iostream>
#include <string>
#include "myFunctions.h"
#include "globals.h"
using namespace std;

const int MAX_USERS = 100;
string subscribers_names[MAX_USERS];
int subscribers_id[MAX_USERS];
int actual_users_size = 0;

int main() {
  // main-menu
  bool program_runs = true;
  
  while (program_runs) {
    // get user choice
    int user_choice = getUserChoice();
    
    switch (user_choice) {
    case 1: {
      int subs_num = getNumSubs();
      
      for (int i = 0; i < subs_num; ++i) {
	string name = getUserName();
	if (isExistName(name))
	  cout << "name already exist on system!" << endl;
	else {
	  int idVal = addUserToSystem(name);
	  cout << "user was added successfully to the system, with ID: " << idVal << endl;
	}
      }
      
      break;
    }
    case 2: {
      string name = getUserName();
      int givenId = 0, actualId = 0;
      int trialsTolerance = 3;
      if (isExistName(name, actualId)) {
        while (trialsTolerance--) {
	  cout << "Enter the ID: ";
	  cin >> givenId;
	  if (actualId == givenId) {
	    cout << "Access granted!" << endl;
	    break;
	  }
	  else {
	    cout << "ID is Wrong!"
		 << "\nyou have other " << trialsTolerance << " trials to get the correct ID" << endl;
	  }
	}
      } else {
	int user_second_choice = getUserChoice2();
	// if user is not a subscriber
	switch (user_second_choice) {
	case 1:
	case 2:
	case 3:
	  cout << "Successful operation" << endl;
	  break;
	case 0: {
	  int idVal = addUserToSystem(name);
	  cout << "User was added successfully to system with ID: " << idVal << endl;
	  break;
	}
	}
      }
      break;
    }
    case 3: {
      int third_user_choice = getUserChoice3();
      cout << "User is NOT subscribing!"
	   << "\nChoose a ticket to travel as a guest:"
	   << "\n5- Second class ticket: 50 L.E"
	   << "\n6- First class ticket: 100 L.E"
	   << "\n7- VIP special ticket: 150 L.E"
	   << "\nOr choose 0 to add him to the system" << endl;

	switch (third_user_choice) {
	case 5:
	case 6:
	case 7:
	  cout << "Successful operation" << endl;
	  break;
	case 0: {
	  string name = getUserName();
	  if (isExistName(name))
	    cout << "name already exist on system!" << endl;
	  else {
	    int idVal = addUserToSystem(name);
	    cout << "user was added successfully to the system, with ID: " << idVal << endl;
	  }	  
	  break;
	}
	}
	break;
    }

    case 4:
      program_runs = false;
      break;
    }
  }
  return 0;
}
