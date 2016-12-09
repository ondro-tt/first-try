#include <iostream>
using namespace std;
 int main(){
	
	int count = 0;
	char b;
		cin.get(b);
	while(b != '#'){
	
	cout << b;
	count++;
	cin.get(b);
	}	

 cout << "\n" << count << "all characters";
	return 0;

	
}
