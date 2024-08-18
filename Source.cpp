#include <iostream>
#include <string>
//Intro to IF conditions and the concept of indentation given to the conditional output statements vs the non conditional output
int main() {
if (7 >=5) {
	std::cout << "The above statement is true" << std::endl;
	std::cout << "The above statement is still true" << std::endl;
	}
std::cout << "This is not related to the if statement" << std::endl;
if (true) {
	std::cout << "This is the correct logic and math above" << std::endl;
	std::cout << "This statement will appear as well due to the validity of the if statement" << std::endl;
}
std::cout << "This statement will appear anyway, as it has nothing to do with the conditions stated above" << std::endl;


//This is just for more spacing
std::cout << std::endl << std::endl;




	return 0;

}