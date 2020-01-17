#include<iostream>
using namespace std;

char before(char x){
	//Write your function definition here
	char M = x, y;
	if(M <= 'Z'){
		if(M >= 'A'){
			if(M == 'A'){
				y = M +25;
				return y;
			}else{
				y = M -1;
				return y;
			}
		}
	}else{
		cout << "0";
		return 0;
	}
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
