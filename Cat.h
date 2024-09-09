// Construction V. Methods V. Funciton

// Construction - has the exact same name as the class

// Define a class Cat with the following attributes:
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
      
      // Define a function birthday()
      	// which will increase the cat's age by one
      void birthday() {
        age++; // I was initially trying to do a for loop... Take the question LITERALLY !!
      }
      
      // Define a constructor for the Cat class
      	// it has input parameters (not console input)
        // name of the cat
        // ag of the cat
      // this funciton should set the name and age of any new
      	// Cat object
        // and also set isSleepy to true (not a parameter)
      // lastly, this should print a confirmation message
      // **Add a default value for name and age
      Cat(string inName = "Namey", int inAge = 3) {
        name = inName;
        age = inAge;
        isSleepy = true;
        cout << "yay! We made a cat named " << name << endl;
      }
      
      class exam {
        exam(int score = 0) {
          
        }
};