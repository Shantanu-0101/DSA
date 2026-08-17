#include<bits/stdc++.h>
using namespace std;

void printName(string name) {
        cout << "Hey" << name;
    }

void sum(int num1 , int num2){
    int num3 = num1 + num2;
    cout << num3;
}


int main() {

	int x, y;
	cin >> x >> y;
	cout << "Value of X is: " << x << " and y: " << y;

	return 0;

	// // integer
	int x = 10;

	// // long int
	long y = 1000;

	// very long int
	long long x = 150000000000;

	//float & double
	float x = 5.7;
	double y = 5;
	cout << "the value of y is: " << y;

	// string
	string str;
	getline(cin, str);
	cout << str;
	return 0;

	// char
	char ch;
	cin >> ch;
	cout << "name is: " << ch;
	return 0;

    // If-else statement
    int age;
    cin >> age;
    if(age>=18) {
        cout << "You are an adult";
    }
    else{
        cout << "You are not an adult";
    }
    return 0;

    int marks;
    cin >> marks;
    if (marks < 25) {
        cout << "F";
    }
    else if(marks <= 44) {
        cout << "E";
    }
    else if(marks <= 49){
        cout << "D";
    }
    else if(marks <= 59){
        cout << "C";
    }
    else if(marks <= 79){
        cout << "B";
    }
    else if(marks <= 100){
        cout << "A";
    }
    return 0;

    int age;
    cin >> age;
    if (age < 18) {
        cout << "not eligible for job";
    }
    else if (age <=57) {
        cout << "eligible for job";
        if (age >=  55){
            cout << "retirement soon";
        }
    }
    else {
        cout << "retirement time";
        
    }
    return 0;
    
    // switch case
    int day;
    cin >> day;
    
    switch(day) {
        case 1:
            cout << "Monday";
            break;
        case 2: 
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Firday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default: 
            cout << "Invalid";
    }
    return 0;

    //Arrays
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    
    arr[3] += 10;
    cout << arr[3];
    return 0;
    
    //Strings
    string s = "Shantanu";
    int len  = s.size();
    s[len-1] = 'u';
    cout << s[len-1];
    return 0;
    
    // for loop
    int i;
    for(i = 1; i <=25; i = i+5){
        cout << "Shantanu " << i << endl;
    }
    cout << i << endl;
    
    //while loop
    int i = 1;
    while(i<=5) {
        cout << "Shantanu" << i << endl;
        i = i + 1;
    }
    return 0;
    
    //function
    string name;
    cin >> name;
    printName(name);
    
    int num1 , num2;
    cin >> num1 >> num2;
    sum(num1, num2);
    return 0;
    
    //inbuilt functions
    int num1, num2;
    cin >> num1 >> num2;
    int minimum = max(num1, num2);
    cout << minimum;
    return 0;


}