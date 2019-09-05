#include <iostream>
//include the fstream library that allows us to interact with files
#include <fstream>
using namespace std;

int main () 
{
  	//create file handle and open file
  	ifstream myfile;
  	myfile.open("example.txt");
  	
  	//the below loop will read all things from the file, space deliminated
  	int val;
	//- myfile >> val will read one int from the file(because val is an int)
	//		- this is very similiar to how we would read input from the user
	//			- cin >> val - this would read a number from the user
	//		- if this was C the equivalen line would be:
	//			fscanf(myfile, "%d", &val);
	//		- if you wanted to only read one thing from the file you would just use:
	//			myfile >> val;
	//		  by itself without the loop
	//		- you could manually do that as many times as you would like
	//- it reads until it finds a whitespace or new line
	//- when you put that into a while loop, as below, it will read one item from teh file one at time until there is nothing else to read
  	while(myfile >> val)
  	{
  		cout << val << endl;
  	}

  	myfile.close(); 

	//to write to the file
	ofstream writeFile
	writeFile.open("example.txt");
	writeFile << "writing to the file\n";
	//- notice that the above line writes to the file and looks very similiar to how we write to the screen:
	//		- cout << "write to the screen\n"
	writeFile.close();
	//- if you write to a file you must be sure to call close() otherwise what you wrote to the file may not be saved!
	return 0; 
}