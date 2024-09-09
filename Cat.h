//Define a class Cat with the following attributes:
// name
// age (whole number)
// isSleepy (true or false)

// Create a main functino in another file
// import your lass definition
// create two Cat objects

// Access the first cat's name and set it to "Samward"

	void speak2() {
    cout << "meoww." << endl;
  }

class Cat {
  public:
  // attributes (what describes what these objects are?)
      string name;
      int age;
      bool isSleepy;
      
      // methods (what can objects of this class do?)
      	// define a method speak() that will print
        // a message from the cat
      // modify: when calling speak, print the name of the cat
      	// Ex: speak for "Samward" ==> "Samward says: meow."
      void speak() {
        cout << name << " says: meow." << endl;
      }
      
};