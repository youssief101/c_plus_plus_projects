#include "myFunctions.h"
#include "globals.h"

// function that get the user input for the program
int getUserChoice() {
  int ret = 0;
  
  while (true) {
    cout << "1. Add subscribers to the system"
	 << "\n2. Query on subscribtion"
	 << "\n3. Ticket prices for guests"
	 << "\n4. Close!" << endl;
    
    cin >> ret;

    if (ret >= 1 && ret <= 4)
      return ret;
    else
      cerr << "Invalid Input, try again ..." << endl;
  }
}

int getUserChoice2() {
  int ret = 0;

  while (true) {
    cout << "User is NOT subscriber ?"
	 << "\nChoose a ticket to travel as a guest: "
	 << "\n1- Second class ticket: 50 L.E"
	 << "\n2- First class ticket: 100 L.E"
	 << "\n3- VIP special ticket: 150 L.E"
	 << "\nOr choose 0 to add him to the system" << endl;

    cin >> ret;

    if (ret >= 0 && ret <= 3)
      return ret;
    else
      cerr << "Invalid Input, try again ..." << endl;
  }
}

int getUserChoice3() {
  int ret = 0;

  while (true) {
    cout << "User is NOT subscribing!"
	 << "\nChoose a ticket to travel as a guest:"
	 << "\n5- Second class ticket: 50 L.E"
	 << "\n6- First class ticket: 100 L.E"
	 << "\n7- VIP special ticket: 150 L.E"
	 << "\nOr choose 0 to add him to the system" << endl;

    cin >> ret;
    
    if (ret >= 0 && ret <= 3)
      return ret;
    else
      cerr << "Invalid Input, try again ..." << endl;
  }
}

// function that get the number of new subscribers to the system
int getNumSubs() {
  int ret = 0;

  while (true) {
    cout << "How many subscribers would you like to add? ";
    cin >> ret;

    if (ret > 0 && ret <= MAX_USERS)
      return ret;
    else if (ret < 0)
      cerr << "input can't be a negative value!" << endl;
    else if (ret > MAX_USERS)
      cerr << "program can't hold more than " << MAX_USERS << " users!" << endl;
    else if (ret + actual_users_size > MAX_USERS)
      cerr << "The number of user exceeds the system capacity!" << endl;
  }
}

// function that checks a given name, and add it to the system
string getUserName() {
  string ret;
  while (true) {
    cout << "Enter subscriber full name: ";
    cin >> ws;
    getline(cin, ret);

    // check if a given subscriber name is valid
    if (isValidName(ret))
      return ret;
    else
      cerr << "a subscriber name, must be a valid full name! try again ..." << endl;
  }
  
}

// function checks if a given name is a valid full name
bool isValidName(string str) {
  int space_ctr = 0;
  for (auto c : str)
    if (isspace(c))
      ++space_ctr;

  return space_ctr >= 2;
}

// function checks if a given name exists in already in the system
bool isExistName(string str) {
  for (int i = 0; i < actual_users_size; ++i)
    if (subscribers_names[i] == str)
      return true;
  return false;
}

// an overloaded version of isExistName that has a reference to the idValue
bool isExistName(string str, int &refToactualId) {
  for (int i = 0; i < actual_users_size; ++i)
    if (subscribers_names[i] == str) {
      refToactualId = subscribers_id[i];
      return true;
    }
  return false;
}

// function that add name, and id to a new user to system
int addUserToSystem(string str) {
  int idRetValue = generateRandomID(); // add a random ID
  subscribers_names[actual_users_size] = str; 
  subscribers_id[actual_users_size] = idRetValue;

  // increment number of users
  ++actual_users_size;
  
  return idRetValue;
}

// function that add a random id to the user
int generateRandomID() {
  random_device rd;   // Initialize random device for seed
  mt19937 gen(rd());  // Mersenne Twister 19937 generator
  uniform_int_distribution<int> dist(1000, 9999);  // Adjust the range as needed

  return dist(gen);  // Generate and return a random 4-digit ID
}
