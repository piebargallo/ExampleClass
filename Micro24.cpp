// Example of the class keyword
// Exhibits polymorphism/virtual functions.

#include <iostream>
#include <string>
using namespace std;

// Def class dog
class dog {
	
	// Constructor
	public:
   		dog() {
      		
			_legs = 4;
        	_bark = true;
   
   }

	// Def function
   void setDogSize(string dogSize) {
     
	  _dogSize = dogSize;
   
   }
   
   // Def virtual function
   virtual void setEars(string type) {
      
	  _earType = type;
   
   }

	// Def private variables
	private:
   		string _dogSize, _earType;
   		int _legs;
   		bool _bark;

}; // End class dog


// Def class derived dog
class breed : public dog {

	// Def constructor
	public:
   		breed( string color, string size) {
     
	  		_color = color;
      		setDogSize(size);
   
   }

	// Def getter
   string getColor() {
      
	  return _color;
   
   }

   // virtual function redefined
   void setEars(string length, string type) {
      
	  _earLength = length;
      _earType = type;
   
   }

	// Def var
	protected:
   string _color, _earLength, _earType;

}; // End derived class


// Driver code
int main() {
   
   dog mongrel;
   breed labrador("yellow", "large");
   mongrel.setEars("pointy");
   labrador.setEars("long", "floppy");
   cout << "Cody is a " << labrador.getColor() << " labrador" << endl;
   
   return 0;

} // End driver