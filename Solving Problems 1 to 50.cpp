#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void printName(string name)                                     //Problem #1
{
	cout << name << endl;
}

//-------------------------------------------------------------------------------------------------------

string ReadName()                                              //Problem #2
{
	string name;
	cout << "What is your name? " << endl;
	cin >> name;
	return name;
}

void printName2(string name)                                    
{
	cout << "My name is " << name << endl;
}

//-------------------------------------------------------------------------------------------------------

enum enNumberType { odd = 1, even = 2 };                        //Problem #3

int ReadNumForType()                                               
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	return num;
}

enNumberType checkNum(int num)                                             
{
	if (num % 2 == 0)
		return enNumberType::even;
	else
		return enNumberType::odd;
}

void printNumForType(enNumberType numType)                                         
{
	if (numType == enNumberType::even)
		cout << "The number is even." << endl;
	else
		cout << "The number is odd." << endl;
}

//-------------------------------------------------------------------------------------------------------

struct stInfo                                                 //Problem #4
{
	string name;
	int age;
	bool hasDriverLicense;
};

enum enLicenseType { Hired1 = 1, Rejected1 = 2 };

stInfo readPerson()
{
	stInfo Info;
	cout << "Enter name: ";
	getline(cin, Info.name);
	cout << "Enter age: ";
	cin >> Info.age;
	cout << "Does the person have a driver's license? (1 for yes, 0 for no): ";
	cin >> Info.hasDriverLicense;

	return Info;
}

enLicenseType checkPerson(stInfo Info)
{
	if (Info.age >= 21 && Info.hasDriverLicense)
		return enLicenseType::Hired1;
	else
		return enLicenseType::Rejected1;
}

void printPerson(enLicenseType Info)
{
	if (Info == enLicenseType::Hired1)
		cout << "The person is hired." << endl;
	else
		cout << "The person is rejected." << endl;
}

//-------------------------------------------------------------------------------------------------------

struct stInfo2                                                 //Problem #5
{
	string name;
	int age;
	bool hasDriverLicense;
	bool hasRecommendation;
};

enum enLicenseType2 { Hired2 = 1, Rejected2 = 2 };

stInfo2 readPerson2()
{
	stInfo2 Info;
	cout << "Enter name: ";
	getline(cin, Info.name);
	cout << "Enter age: ";
	cin >> Info.age;
	cout << "Does the person have a driver's license? (1 for yes, 0 for no): ";
	cin >> Info.hasDriverLicense;
	cout << "Does the person have a recommendation? (1 for yes, 0 for no): ";
	cin >> Info.hasRecommendation;

	return Info;
}

enLicenseType2 checkPerson2(stInfo2 Info)
{
	if (Info.age >= 21 && Info.hasDriverLicense || Info.hasRecommendation)
		return enLicenseType2::Hired2;
	else
		return enLicenseType2::Rejected2;
}

void printPerson2(enLicenseType2 Info)
{
	if (Info == enLicenseType2::Hired2)
		cout << "The person is hired." << endl;
	else
		cout << "The person is rejected." << endl;
}

//-------------------------------------------------------------------------------------------------------

struct stFullName                                            //Problem #6
{
	string firstName;
	string lastName;
};

stFullName readFullName()                               
{
	stFullName name;

	cout << "What is your first name? " << endl;
	cin >> name.firstName;
	cout << "What is your last name? " << endl;
	cin >> name.lastName;

	return name;
}

void printFullName(stFullName name)                                    
{
	cout << "My full name is " << name.firstName << " " << name.lastName << endl;
}

//-------------------------------------------------------------------------------------------------------

int readNumberForHalfNumber()                                          //Problem #7
{
	int num;

	cout << "Enter a number: " << endl;
	cin >> num;
	
	return num;
}

float getHalfNumber(int num)
{
	return (float) num / 2.0;
}

void printHalfNumber(int num)
{
	cout << "The half of " << num << " is " << getHalfNumber(num) << endl;
}

//-------------------------------------------------------------------------------------------------------

enum enMarkType { pass = 1, fail = 2 };                      //Problem #8

int readMark()
{
	int mark;
	cout << "Enter the mark: " << endl;
	cin >> mark;
	return mark;
}

enMarkType checkMark(int mark)
{
	if (mark >= 50)
		return enMarkType::pass;
	else
		return enMarkType::fail;
}

void printMarkType(int mark)
{
	if (checkMark(mark) == enMarkType::pass)
		cout << "Pass" << endl;
	else
		cout << "Fail" << endl;
}

//-------------------------------------------------------------------------------------------------------

struct stSum3Numbers                                        //Problem #9
{
	int num1;
	int num2;
	int num3;
};

stSum3Numbers read3NumbersForSum()
{
	stSum3Numbers numbers;
	cout << "Enter first number: ";
	cin >> numbers.num1;
	cout << "Enter second number: ";
	cin >> numbers.num2;
	cout << "Enter third number: ";
	cin >> numbers.num3;
	return numbers;
}

int claculateSumFor3Numbers(stSum3Numbers numbers)
{
	return numbers.num1 + numbers.num2 + numbers.num3;
}

void printSumFor3Numbers(stSum3Numbers numbers)
{
	cout << "The sum of the three numbers is: " << claculateSumFor3Numbers(numbers) << endl;
}

//-------------------------------------------------------------------------------------------------------

struct stAvg3numbers                                        //Problem #10
{
	int num1;
	int num2;
	int num3;
};

stAvg3numbers read3NumbersForAvg()
{
	stAvg3numbers numbers;
	cout << "Enter first number: ";
	cin >> numbers.num1;
	cout << "Enter second number: ";
	cin >> numbers.num2;
	cout << "Enter third number: ";
	cin >> numbers.num3;
	return numbers;
}

float claculateAvgFor3Numbers(stAvg3numbers numbers)
{
	return float(numbers.num1 + numbers.num2 + numbers.num3) / 3.0;
}

void printAvgFor3Numbers(stAvg3numbers numbers)
{
	cout << "The average of the three numbers is: " << claculateAvgFor3Numbers(numbers) << endl;
}

//-------------------------------------------------------------------------------------------------------

struct stAvg3Marks                                        //Problem #11
{
	int mark1;
	int mark2;
	int mark3;
	int avg;
};

stAvg3Marks read3marks()
{
	stAvg3Marks marks;
	cout << "Enter first mark: ";
	cin >> marks.mark1;
	cout << "Enter second mark: ";
	cin >> marks.mark2;
	cout << "Enter third mark: ";
	cin >> marks.mark3;
	return marks;
}

float claculateAvgFor3Marks(stAvg3Marks marks)
{
	marks.avg = (marks.mark1 + marks.mark2 + marks.mark3) / 3;
	return float(marks.avg);
}

void checkAvgFor3Marks(stAvg3Marks marks)
{
	if (marks.avg >= 50)
		cout << "Pass" << endl;
	else
		cout << "Fail" << endl;
}

void printAvgFor3Marks(stAvg3Marks marks)
{
	cout << "The average of the three marks is: " << claculateAvgFor3Marks(marks) << endl;
	cout << "The result is: ";
	checkAvgFor3Marks(marks);
}

//-------------------------------------------------------------------------------------------------------

struct stMaxNumbers                                        //Problem #12
{
	int num1;
	int num2;
};

stMaxNumbers read2NumbersForMax()
{
	stMaxNumbers numbers;

	cout << "Enter first number: ";
	cin >> numbers.num1;
	cout << "Enter second number: ";
	cin >> numbers.num2;

	return numbers;
}

int checkMaxFor2Numbers(stMaxNumbers numbers)
{
	if (numbers.num1 > numbers.num2)
		return numbers.num1;
	else
		return numbers.num2;
}

void printMaxFor2Numbers(stMaxNumbers numbers)
{
	cout << "The maximum number is: " << checkMaxFor2Numbers(numbers) << endl;
}

//-------------------------------------------------------------------------------------------------------

struct stMax3Numbers                                        //Problem #13
{
	int num1;
	int num2;
	int num3;
};

stMax3Numbers read3NumbersForMax()
{
	stMax3Numbers numbers;

	cout << "Enter first number: ";
	cin >> numbers.num1;
	cout << "Enter second number: ";
	cin >> numbers.num2;
	cout << "Enter third number: ";
	cin >> numbers.num3;

	return numbers;
}

int checkMaxOf3Numbers(stMax3Numbers numbers)
{
	if (numbers.num1 > numbers.num2 && numbers.num1 > numbers.num3)
		return numbers.num1;
	else if (numbers.num2 > numbers.num3)
		return numbers.num2;
	else
		return numbers.num3;
}

void printMaxFor3Numbers(stMax3Numbers numbers)
{
	cout << "The maximum of the three numbers is: " << checkMaxOf3Numbers(numbers) << endl;
}

//-------------------------------------------------------------------------------------------------------


struct stSwapNumbers                                        //Problem #14
{
	int num1;
	int num2;
	int swap;
};

stSwapNumbers read2NumbersForSwapping()
{
	stSwapNumbers numbers;

	cout << "Enter first number: ";
	cin >> numbers.num1;
	cout << "Enter second number: ";
	cin >> numbers.num2;

	return numbers;
}

stSwapNumbers printNumbersBeforeSwapping(stSwapNumbers numbers)
{
	cout << "Before swapping: num1 = " << numbers.num1 << ", num2 = " << numbers.num2 << endl;
	return numbers;
}

stSwapNumbers swapNumbers(stSwapNumbers numbers)
{
	numbers.swap = numbers.num1;
	numbers.num1 = numbers.num2;
	numbers.num2 = numbers.swap;

	return numbers;
}

void printNumbersAfterSwapping(stSwapNumbers numbers)
{
	cout << "After swapping: num1 = " << swapNumbers(numbers).num1 << ", num2 = " << swapNumbers(numbers).num2 << endl;
}

//-------------------------------------------------------------------------------------------------------

struct stCircleArea1                                        //Problem #15
{
	int A;
	int B;
};

stCircleArea1 readArea1()
{
	stCircleArea1 Area1;

	cout << "Enter the number1 of the circle: ";
	cin >> Area1.A;
	cout << "Enter the number2 of the circle: ";
	cin >> Area1.B;

	return Area1;
}

int calculateAreaFor1(stCircleArea1 Area1)
{
	return Area1.A * Area1.B;
}

void printAreaFor1(stCircleArea1 Area1)
{
	cout << "The area of the circle is: " << calculateAreaFor1(Area1) << endl;
}

//-------------------------------------------------------------------------------------------------------

struct stCircleArea2                                        //Problem #16
{
	int A;
	int B;
};

stCircleArea2 readArea2()
{
	stCircleArea2 Area2;

	cout << "Enter the number1 of the circle: ";
	cin >> Area2.A;
	cout << "Enter the number2 of the circle: ";
	cin >> Area2.B;

	return Area2;
}

float calculateAreaFor2(stCircleArea2 Area2)
{
	return Area2.A * sqrt(pow(Area2.B, 2) - pow(Area2.A, 2));
}

void printAreaFor2(stCircleArea2 Area2)
{
	cout << "The area of the circle is: " << calculateAreaFor2(Area2) << endl;
}

//-------------------------------------------------------------------------------------------------------

struct stCircleArea3                                        //Problem #17
{
	int A;
	int B;
};

stCircleArea3 readArea3()
{
	stCircleArea3 Area3;

	cout << "Enter the number1 of the circle: ";
	cin >> Area3.A;
	cout << "Enter the number2 of the circle: ";
	cin >> Area3.B;

	return Area3;
}

float calculateAreaFor3(stCircleArea3 Area3)
{
	return 0.5 * Area3.A * Area3.B;
}

void printAreaFor3(stCircleArea3 Area3)
{
	cout << "The area of the circle is: " << calculateAreaFor3(Area3) << endl;
}

//-------------------------------------------------------------------------------------------------------

struct stCircleArea4                                        //Problem #18
{
	int A;
};

stCircleArea4 readArea4()
{
	stCircleArea4 Area4;

	cout << "Enter the number of the circle: ";
	cin >> Area4.A;

	return Area4;
}

float calculateAreaFor4(stCircleArea4 Area4)
{
	const float pi = 3.14159;
	return pi * pow(Area4.A, 2);
}

void printAreaFor4(stCircleArea4 Area4)
{
	cout << "The area of the circle is: " << ceil(calculateAreaFor4(Area4)) << endl;
}

//-------------------------------------------------------------------------------------------------------

struct stCircleArea5                                        //Problem #19
{
	int A;
};

stCircleArea5 readArea5()
{
	stCircleArea5 Area5;

	cout << "Enter the number of the circle: ";
	cin >> Area5.A;

	return Area5;
}

float calculateAreaFor5(stCircleArea5 Area5)
{
	const float pi = 3.14159;
	return (pi * pow(Area5.A, 2)) / 4;
}

void printAreaFor5(stCircleArea5 Area5)
{
	cout << "The area of the circle is: " << calculateAreaFor5(Area5) << endl;
}

//-------------------------------------------------------------------------------------------------------

struct stCircleArea6                                        //Problem #20
{
	int A;
};

stCircleArea6 readArea6()
{
	stCircleArea6 Area6;

	cout << "Enter the number of the circle: ";
	cin >> Area6.A;

	return Area6;
}

float calculateAreaFor6(stCircleArea6 Area6)
{
	const float pi = 3.14159;
	return pi * (pow(Area6.A / 2, 2));
}

void printAreaFor6(stCircleArea6 Area6)
{
	cout << "The area of the circle is: " << calculateAreaFor6(Area6) << endl;
}

//-------------------------------------------------------------------------------------------------------

struct stCircleArea7                                        //Problem #21
{
	int A;
};

stCircleArea7 readArea7()
{
	stCircleArea7 Area7;

	cout << "Enter the number of the circle: ";
	cin >> Area7.A;

	return Area7;
}

float calculateAreaFor7(stCircleArea7 Area7)
{
	const float pi = 3.14159;
	return pow(Area7.A, 2) / (4 * pi);
}

void printAreaFor7(stCircleArea7 Area7)
{
	cout << "The area of the circle is: " << calculateAreaFor7(Area7) << endl;
}

//-------------------------------------------------------------------------------------------------------

struct stCircleArea8                                        //Problem #22
{
	int A;
	int B;
};

stCircleArea8 readArea8()
{
	stCircleArea8 Area8;

	cout << "Enter the number1 of the circle: ";
	cin >> Area8.A;
	cout << "Enter the number2 of the circle: ";
	cin >> Area8.B;

	return Area8;
}

float calculateAreaFor8(stCircleArea8 Area8)
{
	const float pi = 3.14159;
	float area = pi * (pow(Area8.B, 2) / 4) * ((2 * Area8.A - Area8.B) / (2 * Area8.A + Area8.B));
	return area;
}

void printAreaFor8(stCircleArea8 Area8)
{
	cout << "The area of the circle is: " << calculateAreaFor8(Area8) << endl;
}

//-------------------------------------------------------------------------------------------------------

struct stCircleArea9                                        //Problem #23
{
	int A;
	int B;
	int C;
};

stCircleArea9 readArea9()
{
	stCircleArea9 Area9;

	cout << "Enter the number1 of the circle: ";
	cin >> Area9.A;
	cout << "Enter the number2 of the circle: ";
	cin >> Area9.B;
	cout << "Enter the number3 of the circle: ";
	cin >> Area9.C;


	return Area9;
}

float calculateAreaFor9(stCircleArea9 Area9)
{
	const float pi = 3.14159;
	const float p = (Area9.A + Area9.B + Area9.C) / 2.0;
	float area = pi * pow(Area9.A * Area9.B * Area9.C / (4 * sqrt(p * (p - Area9.A) * (p - Area9.B) * (p - Area9.C))), 2);
	return area;
}

void printAreaFor9(stCircleArea9 Area9)
{
	cout << "The area of the circle is: " << calculateAreaFor9(Area9) << endl;
}

//-------------------------------------------------------------------------------------------------------

enum enValidationType { valid = 1, invalid = 2 };                      //Problem #24

int readAge()
{
	int Age;

	cout << "Enter your age: ";
	cin >> Age;

	return Age;
}

enValidationType checkAge(int Age)
{
	if (Age >= 18 && Age <= 45)
		return enValidationType::valid;
	else
		return enValidationType::invalid;
}

void printAge(enValidationType Age)
{
	if (Age == enValidationType::valid)
		cout << "Valid age." << endl;
	else
		cout << "Invalid age." << endl;

}

//-------------------------------------------------------------------------------------------------------

enum enValidationType2 { valid2 = 1, invalid2 = 2 };                      //Problem #25

int readAgeForValidation()
{
	int Age;

	cout << "Enter your age: ";
	cin >> Age;

	return Age;
}

enValidationType2 checkAgeForValidation(int Age)
{
	if (Age >= 18 && Age <= 45)
		return enValidationType2::valid2;
	else
		return enValidationType2::invalid2;
}

void printAgeValidation(enValidationType2 Age)
{
	if(Age == enValidationType2::valid2)
		cout << "Valid age." << endl;
	else
	{
		while (Age == enValidationType2::invalid2)
		{
			cout << "Invalid age. Please enter a valid age between 18 and 45: ";
			Age = checkAgeForValidation(readAgeForValidation());
		}
	}   cout << "Valid age." << endl;
}

//-------------------------------------------------------------------------------------------------------

int readNumberForLoop()                                      //Problem #26
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	return num;
}

void printNumbersForLoop(int num)
{
	for (int i = 1; i <= num; i++)
	{
		cout << i << endl;
	}
}

void printNumbersWhile(int num)
{
	int i = 1;
	while (i <= num)
	{
		cout << i << endl;
		i++;
	}
}

void printNumbersDoWhile(int num)
{
	int i = 1;
	do
	{
		cout << i << endl;
		i++;
	} while (i <= num);
}

//-------------------------------------------------------------------------------------------------------

int readNumberForLoop2()                                      //Problem #27
{
	int num2;
	cout << "Enter a number: ";
	cin >> num2;
	return num2;
}

void printNumbersForLoop2(int num2)
{
	for (int i = num2; i >= 1; i--)
	{
		cout << i << endl;
	}
}

void printNumbersWhile2(int num2)
{
	int i = num2;
	while (i >= 1)
	{
		cout << i << endl;
		i--;
	}
}

void printNumbersDoWhile2(int num2)
{
	int i = num2;
	do
	{
		cout << i << endl;
		i--;
	} while (i >= 1);
}

//-------------------------------------------------------------------------------------------------------

int readNumberForSumOdd()                                      //Problem #28
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	return num;
}

int calculateSumOddForLoop(int num)
{
	int sum = 0;
	for (int i = 1; i <= num; i++)
	{
		if (i % 2 != 0)
		{
			sum += i;
		}
	}
	return sum;
}

int calculateSumOddWhileLoop(int num)
{
	int sum = 0;
	int i = 1;
	while (i <= num)
	{
		if (i % 2 != 0)
		{
			sum += i;
		}
		i++;
	}
	return sum;
}

int calculateSumOddDoWhileLoop(int num)
{
	int sum = 0;
	int i = 1;
	do
	{
		if (i % 2 != 0)
		{
			sum += i;
		}
		i++;
	} while (i <= num);
	return sum;
}

void printSumOdd(int num)
{
	cout << "The sum of odd numbers from 1 to " << num << " is: " << calculateSumOddWhileLoop(num) << endl;
}

//-------------------------------------------------------------------------------------------------------

int readNumberForSumEven2()                                      //Problem #29
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	return num;
}

int calculateSumEvenForLoop2(int num)
{
	int sum = 0;
	for (int i = 1; i <= num; i++)
	{
		if (i % 2 == 0)
		{
			sum += i;
		}
	}
	return sum;
}

int calculateSumEvenWhileLoop2(int num)
{
	int sum = 0;
	int i = 1;
	while (i <= num)
	{
		if (i % 2 == 0)
		{
			sum += i;
		}
		i++;
	}
	return sum;
}

int calculateSumEvenDoWhileLoop2(int num)
{
	int sum = 0;
	int i = 1;
	do
	{
		if (i % 2 == 0)
		{
			sum += i;
		}
		i++;
	} while (i <= num);
	return sum;
}

void printSumEven2(int num)
{
	cout << "The sum of even numbers from 1 to " << num << " is: " << calculateSumEvenWhileLoop2(num) << endl;
}

//-------------------------------------------------------------------------------------------------------

int readNumberForFact()                                      //Problem #30
{
	int num;
	
	cout << "Enter a positive number: ";
	cin >> num;

	while (num <= 0)
		{
			cout << "Invalid input. Please enter a positive number." << endl;
			cin >> num;
		}
	return num;
}
	
int calculateFactForLoop(int num)
{
	int fact = 1;
	for (int i = 1; i <= num; i++)
	{
		fact *= i;
	}
	return fact;
}

int calculateFactWhileLoop(int num)
{
	int fact = 1;
	int i = 1;
	while (i <= num)
	{
		fact *= i;
		i++;
	}
	return fact;
}

int calculateFactDoWhileLoop(int num)
{
	int fact = 1;
	int i = 1;

	do
	{
		fact *= i;
		i++;
	} while (i <= num);
	return fact;
}

void printFact(int num)
{
	cout << "The factorial of " << num << " is: " << calculateFactDoWhileLoop(num) << endl;
}

//-------------------------------------------------------------------------------------------------------

int readNumberForPwr()                                                //Problem #31
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	return num;
}

void printPwr(int num)
{
	cout << "The power 2 & 3 & 4 of " << num << " is: " << pow(num, 2) << " and " << pow(num, 3) << " and " << pow(num, 4) << endl;
}

//-------------------------------------------------------------------------------------------------------

struct stCalcPwr                                                //Problem #32
{
	int num;
	int pwr;
};

stCalcPwr readNumberForPwr2()
{
	stCalcPwr calc;

	cout << "Enter a number: ";
	cin >> calc.num;
	cout << "Enter the power: ";
	cin >> calc.pwr;

	return calc;
}

void printPwr2(stCalcPwr calc)
{
	cout << "The power of " << calc.num << " is: " << pow(calc.num, calc.pwr) << endl;
}

//-------------------------------------------------------------------------------------------------------

int readNumberForGrade()                                                //Problem #33
{
	int Grade;
	cout << "Enter a Grade: ";
	cin >> Grade;

	while (Grade < 0 || Grade > 100)
	{
		cout << "Invalid input. Please enter a Grade between 0 and 100." << endl;
		cin >> Grade;
	}

	return Grade;
}

char checkGrade(int Grade)
{
	if (Grade >= 90)
		return 'A';
	else if (Grade >= 80)
		return 'B';
	else if (Grade >= 70)
		return 'C';
	else if (Grade >= 60)
		return 'D';
	else
		return 'F';	
}

void printGrade(int Grade)
{
	cout << "The Grade is: " << checkGrade(Grade) << endl;
}

//-------------------------------------------------------------------------------------------------------

int readTotalSales()                                                //Problem #34
{
	int totalSales;
	cout << "Enter the total sales: ";
	cin >> totalSales;

	while (totalSales < 0)
	{
		cout << "Invalid input. Please enter a positive number." << endl;
		cin >> totalSales;
	}
	return totalSales;
}

int checkCommission(int totalSales)
{
	if (totalSales >= 1000000)
		return totalSales * 0.01;
	else if (totalSales >= 500000)
		return totalSales * 0.02;
	else if (totalSales >= 100000)
		return totalSales * 0.03;
	else if (totalSales >= 50000)
		return totalSales * 0.05;
	else
		return totalSales;
}

void printCommission(int totalSales)
{
	cout << "The commission is: " << checkCommission(totalSales) << endl;
}

//-------------------------------------------------------------------------------------------------------

struct stCalcTotalPennies                                                //Problem #35
{
	int totalPennies, dollars, quarters, dimes, nickels, pennies;
};

stCalcTotalPennies readTotalPennies()
{
	stCalcTotalPennies calc;

	cout << "Enter the pennies: ";
	cin >> calc.pennies;
	cout << "Enter the nickels: ";
	cin >> calc.nickels;
	cout << "Enter the dimes: ";
	cin >> calc.dimes;
	cout << "Enter the quarters: ";
	cin >> calc.quarters;
	cout << "Enter the dollars: ";
	cin >> calc.dollars;

	return calc;
}

int calculateTotalPennies(stCalcTotalPennies& calc)
{
	calc.totalPennies = calc.pennies + (calc.nickels * 5) + (calc.dimes * 10) + (calc.quarters * 25) + (calc.dollars * 100);
	return calc.totalPennies;
	
}

void printTotalPennies(stCalcTotalPennies calc)
{
	cout << "The total pennies is: " << calculateTotalPennies(calc) << endl;
	cout << "The total dollars is: " << float(calc.totalPennies) / 100 << endl;
}

//-------------------------------------------------------------------------------------------------------

struct stSimpleCalculator                                                //Problem #36
{
	int num1, num2;
	char operation;
};

stSimpleCalculator readSimpleCalculator()
{
	stSimpleCalculator calc;

	cout << "Enter the first number: ";
	cin >> calc.num1;
	cout << "Enter the second number: ";
	cin >> calc.num2;
	cout << "Enter the operation (+, -, *, /): ";
	cin >> calc.operation;

	return calc;
}

float calculateSimpleCalculator(stSimpleCalculator& calc)
{
	switch (calc.operation)
	{
	case '+':
		return calc.num1 + calc.num2;
		break;
	
	case '-':
		return calc.num1 - calc.num2;
		break;

	case '*':
		return calc.num1 * calc.num2;
		break;

	case '/':
		if (calc.num2 != 0)
			return (float) calc.num1 / calc.num2;
		else
		{
			cout << "Error: Division by zero. \a" << endl;
			return 0;
		}
	    break;

	default:
		cout << "Error: Invalid operation. \a" << endl;
		return 0;
		break;
	}

}

void printSimpleCalculator(stSimpleCalculator calc)
{
	cout << "The result of " << calc.num1 << " " << calc.operation << " " << calc.num2 << " is: " << calculateSimpleCalculator(calc) << endl;
}

//-------------------------------------------------------------------------------------------------------


int readNumberForSum99()                                                //Problem #37
{
	int num = 0;
	int count = 0;
	int sum = 0;
    
	while (num != -99) {
		cout << "Enter a number: " << count + 1 << ": ";
		sum += num;
		count++;
		cin >> num;
	}
	return sum;
}

void printSum99(int sum)
{
	cout << "The sum of the numbers is: " << sum << endl;
}

//-------------------------------------------------------------------------------------------------------

enum enPrimeType { prime = 1, notPrime = 2 };                      //Problem #38

int readNumberForPrime()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	while (num < 0)
	{
		cout << "Invalid input. Please enter a positive number." << endl;
		cin >> num;
	}
	return num;
}

enPrimeType checkPrime(int num)
{
	for (int i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)
			return enPrimeType::notPrime;
	}
	return enPrimeType::prime;
}

void printPrime(int num)
{
	if (checkPrime(num) == enPrimeType::prime)
		cout << "The number is prime." << endl;
	else
		cout << "The number is not prime." << endl;
}

//-------------------------------------------------------------------------------------------------------

struct stRemainderNumber                                                //Problem #39
{
	int TotalBill, CashPaid;
};

stRemainderNumber readRemainderNumber()
{
	stRemainderNumber calc;
	cout << "Enter the total bill: ";
	cin >> calc.TotalBill;
	cout << "Enter the cash paid: ";
	cin >> calc.CashPaid;

	return calc;
}

int calculateRemainderNumber(stRemainderNumber& calc)
{
	return calc.CashPaid - calc.TotalBill;
}

void printRemainderNumber(stRemainderNumber calc)
{
	cout << endl;
	cout << "The total bill is: " << calc.TotalBill << endl;
	cout << "The cash paid is: " << calc.CashPaid << endl;
	cout << "______________________________________________________________________" << endl;
	cout << "The remainder is: " << calculateRemainderNumber(calc) << endl;
}

//-------------------------------------------------------------------------------------------------------

struct stTaxCalculator                                                //Problem #40
{
	int num;
	float tax = 0.16;
	float services = 0.1;
};

stTaxCalculator readNumberForTax()                                               
{
	stTaxCalculator calc;
	cout << "Enter a number: ";
	cin >> calc.num;

	return calc;
}

float calculateTax(stTaxCalculator& calc)
{
	float total1 = calc.num + (calc.num * calc.services);
	float total2 = total1 + (total1 * calc.tax);
	return total2;
}

void printTax(stTaxCalculator calc)
{
	cout << "The total amount after tax and services is: " << calculateTax(calc) << endl;
}

//-------------------------------------------------------------------------------------------------------

struct stHoursToDaysAndWeeks                                                //Problem #41
{
	int hours;
	float days;
	float weeks;
};
stHoursToDaysAndWeeks readNumberOfHours()
{
	stHoursToDaysAndWeeks calc;
	cout << "Enter the number of hours worked: ";
	cin >> calc.hours;
	while (calc.hours < 0)
	{
		cout << "Invalid input. Please enter a positive number." << endl;
		cin >> calc.hours;
	}
	return calc;
}

float calcHoursToDaysAndWeeks(stHoursToDaysAndWeeks& calc)
{
	calc.days = calc.hours / 24.0;
	calc.weeks = calc.days / 7.0;
	return calc.weeks;
}

void printHoursToDaysAndWeeks(stHoursToDaysAndWeeks calc)
{
	cout << "The number of hours worked is: " << calc.hours << endl;
	cout << "The number of days worked is: " << calc.hours / 24.0 << " Days" << endl;
	cout << "The number of weeks worked is: " << calcHoursToDaysAndWeeks(calc)  << " Weeks" << endl;
}

//-------------------------------------------------------------------------------------------------------

struct stDurationToSeconds                                                //Problem #42
{
	int days;
	int hours;
	int minutes;
	int seconds;
};

stDurationToSeconds readDurationToSeconds()
{
	stDurationToSeconds calc;
	cout << "Enter the number of days: ";
	cin >> calc.days;
	cout << "Enter the number of hours: ";
	cin >> calc.hours;
	cout << "Enter the number of minutes: ";
	cin >> calc.minutes;
	cout << "Enter the number of seconds: ";
	cin >> calc.seconds;
	return calc;
}

double calcDurationToSeconds(stDurationToSeconds& calc)
{
	return (calc.days * 24 * 60 * 60) + (calc.hours * 60 * 60) + (calc.minutes * 60) + calc.seconds;
}

void printDurationToSeconds(stDurationToSeconds calc)
{
	cout << "The total duration in seconds is: " << calcDurationToSeconds(calc) << " Seconds" << endl;
}

//-------------------------------------------------------------------------------------------------------

struct stSecondsToDuration                                                //Problem #43
{
	int days;
	int hours;
	int minutes;
	int seconds;
};

int readSecondsToDuration()
{
	int seconds;
	cout << "Enter the number of seconds: ";
	cin >> seconds;
	while (seconds < 0)
	{
		cout << "Invalid input. Please enter a positive number." << endl;
		cin >> seconds;
	}
	return seconds;
}

stSecondsToDuration calcSecondsToDuration(int seconds)
{
	stSecondsToDuration calc;
	calc.days = seconds / (24 * 60 * 60);
	seconds %= (24 * 60 * 60);
	calc.hours = seconds / (60 * 60);
	seconds %= (60 * 60);
	calc.minutes = seconds / 60;
	calc.seconds = seconds % 60;
	return calc;
}

void printSecondsToDuration(stSecondsToDuration calc)
{
	cout << "The total duration is: " << calc.days << " Days, " << calc.hours << " Hours, " << calc.minutes << " Minutes, " << calc.seconds << " Seconds" << endl;
}

//-------------------------------------------------------------------------------------------------------

enum enDayOfWeek { Saturday = 1, Sunday = 2, Monday = 3, Tuesday = 4, Wednesday = 5, Thursday = 6, Friday = 7 };                  //Problem #44

int readDayOfWeek()
{
	int day;
	cout << "Enter a number between 1 and 7: ";
	cin >> day;
	while (day < 1 || day > 7)
	{
		cout << "Invalid input. Please enter a number between 1 and 7. \a" << endl;
		cin >> day;
	}
	return day;
}

void printDayOfWeek(int day)
{
	switch (day)
	{
	case enDayOfWeek::Saturday:
		cout << "Saturday \n";
		break;
	case enDayOfWeek::Sunday:
		cout << "Sunday \n";
		break;
	case enDayOfWeek::Monday:
		cout << "Monday \n";
		break;
	case enDayOfWeek::Tuesday:
		cout << "Tuesday \n";
		break;
	case enDayOfWeek::Wednesday:
		cout << "Wednesday \n";
		break;
	case enDayOfWeek::Thursday:
		cout << "Thursday \n";
		break;
	case enDayOfWeek::Friday:
		cout << "Friday" << endl;
		break;
	}
}

//-------------------------------------------------------------------------------------------------------

enum enMonth { January = 1, February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, September = 9, October = 10, November = 11, December = 12 };   //Problem #45

int readMonth()
{
	int month;
	cout << "Enter a number between 1 and 12: ";
	cin >> month;
	while (month < 1 || month > 12)
	{
		cout << "Invalid input. Please enter a number between 1 and 12. \a" << endl;
		cin >> month;
	}
	return month;
}

void printMonth(int month)
{
	switch (month)
	{
	case enMonth::January:
		cout << "January \n";
		break;
	case enMonth::February:
		cout << "February \n";
		break;
	case enMonth::March:
		cout << "March \n";
		break;
	case enMonth::April:
		cout << "April \n";
		break;
	case enMonth::May:
		cout << "May \n";
		break;
	case enMonth::June:
		cout << "June \n";
		break;
	case enMonth::July:
		cout << "July \n";
		break;
	case enMonth::August:
		cout << "August \n";
		break;
	case enMonth::September:
		cout << "September \n";
		break;
	case enMonth::October:
		cout << "October \n";
		break;
	case enMonth::November:
		cout << "November \n";
		break;
	case enMonth::December:
		cout << "December" << endl;
		break;
	}
}

//-------------------------------------------------------------------------------------------------------

void printAllLetters()                                                   //Problem #46              
{
	for (int i = 65; i <= 90; i++)
	{
		cout << char(i) << " ";
	}
	cout << endl;
}

//-------------------------------------------------------------------------------------------------------

struct stLoanInstalmentMonths                                            //Problem #47
{
	int loanAmount;
	int instalmentAmount;
	int months;
};

stLoanInstalmentMonths readLoanInstalmentMonths()
{
	stLoanInstalmentMonths calc;
	cout << "Enter the loan amount: ";
	cin >> calc.loanAmount;
	cout << "Enter the instalment amount: ";
	cin >> calc.instalmentAmount;
	return calc;
}

int calculateLoanInstalmentMonths(stLoanInstalmentMonths& calc)
{
	return calc.loanAmount / calc.instalmentAmount;
}

void printLoanInstalmentMonths(stLoanInstalmentMonths calc)
{
	cout << "The number of months to pay off the loan is: " << calculateLoanInstalmentMonths(calc) << " Months" << endl;
}

//-------------------------------------------------------------------------------------------------------

struct stMonthlyLoanInstalment                                            //Problem #48
{
	int loanAmount;
	int instalmentAmount;
	int months;
};

stMonthlyLoanInstalment readMonthlyLoanInstalment()
{
	stMonthlyLoanInstalment calc;
	cout << "Enter the loan amount: ";
	cin >> calc.loanAmount;
	cout << "Enter the number of months: ";
	cin >> calc.months;
	return calc;
}

int calculateMonthlyLoanInstalment(stMonthlyLoanInstalment& calc)
{
	return calc.loanAmount / calc.months;
}

void printMonthlyLoanInstalment(stMonthlyLoanInstalment calc)
{
	cout << "The monthly instalment amount is: " << calculateMonthlyLoanInstalment(calc) << " per month" << endl;	
}

//-------------------------------------------------------------------------------------------------------

struct stATMPin                                                 //Problem #49
{
	const int PIN = 1234;
	int Balance = 7500;
	int join;
};

stATMPin readATMPin()
{
	stATMPin calc;
	cout << "Enter your PIN: ";
	cin >> calc.join;
	while (calc.join != calc.PIN)
	{
		system("color 4F");
		cout << "Invalid PIN. Please try again. \a" << endl;
		cin >> calc.join;
	}
	return calc;
}

void printATMPin(stATMPin calc)
{
	system("color 2F");
	cout << "Your PIN is correct. Your balance is: " << calc.Balance << endl;
}

//-------------------------------------------------------------------------------------------------------

struct stATMPin3Times                                                 //Problem #50
{
	const int PIN = 1234;
	int Balance = 7500;
	int count = 3;
	int join;
};

stATMPin3Times readATMPin3Times()
{
	stATMPin3Times calc;
	int count = 0;
	cout << "Enter your PIN: ";
	cin >> calc.join;
	while (calc.join != calc.PIN)
	{
		cout << "Invalid PIN. Please try again. \a" << endl;
		cin >> calc.join;
		count++;
		if (count == calc.count)
		{
			system("color 4F");
			cout << "Your account is locked. \a" << endl;
			exit(0);
		}
	}
	return calc;
}

void printATMPin3Times(stATMPin3Times calc)
{
	system("color 2F");
	cout << "Your PIN is correct. Your balance is: " << calc.Balance << endl;
}

//-------------------------------------------------------------------------------------------------------
                                                     //Select only one to run:
int main()
{
	
	//printName("EHAB");                                                                                     // Problem #1
	//printName2(ReadName());                                                                                // Problem #2
	//printNumForType(checkNum(ReadNumForType()));                                                           // Problem #3
	//printPerson(checkPerson(readPerson()));                                                                // Problem #4
	//printPerson2(checkPerson2(readPerson2()));                                                             // Problem #5
	//printFullName(readFullName());                                                                         // Problem #6
	//printHalfNumber(readNumberForHalfNumber());                                                            // Problem #7
	//printMarkType(readMark());                                                                             // Problem #8
	//printSumFor3Numbers(read3NumbersForSum());                                                             // Problem #9
	//printAvgFor3Numbers(read3NumbersForAvg());                                                             // Problem #10
	//printAvgFor3Marks(read3marks());                                                                       // Problem #11
	//printMaxFor2Numbers(read2NumbersForMax());                                                             // Problem #12
	//printMaxFor3Numbers(read3NumbersForMax());                                                             // Problem #13
	//printNumbersAfterSwapping(printNumbersBeforeSwapping(read2NumbersForSwapping()));                      // Problem #14
	//printAreaFor1(readArea1());                                                                            // Problem #15
	//printAreaFor2(readArea2());                                                                            // Problem #16
	//printAreaFor3(readArea3());                                                                            // Problem #17
	//printAreaFor4(readArea4());                                                                            // Problem #18
	//printAreaFor5(readArea5());                                                                            // Problem #19
	//printAreaFor6(readArea6());                                                                            // Problem #20
	//printAreaFor7(readArea7());                                                                            // Problem #21
	//printAreaFor8(readArea8());                                                                            // Problem #22
	//printAreaFor9(readArea9());                                                                            // Problem #23
	//printAge(checkAge(readAge()));                                                                         // Problem #24
	//printAgeValidation(checkAgeForValidation(readAgeForValidation()));                                     // Problem #25
	//printNumbersForLoop(readNumberForLoop());                                                              // Problem #26
	//printNumbersWhile2(readNumberForLoop2());                                                              // Problem #27
	//printSumOdd(readNumberForSumOdd());                                                                    // Problem #28
	//printSumEven2(readNumberForSumEven2());                                                                // Problem #29
	//printFact(readNumberForFact());                                                                        // Problem #30
	//printPwr(readNumberForPwr());                                                                          // Problem #31
	//printPwr2(readNumberForPwr2());                                                                        // Problem #32
	//printGrade(readNumberForGrade());                                                                      // Problem #33
	//printCommission(readTotalSales());                                                                     // Problem #34
	//printTotalPennies(readTotalPennies());                                                                 // Problem #35
	//printSimpleCalculator(readSimpleCalculator());                                                         // Problem #36
	//printSum99(readNumberForSum99());                                                                      // Problem #37
	//printPrime(readNumberForPrime());                                                                      // Problem #38
	//printRemainderNumber(readRemainderNumber());                                                           // Problem #39
	//printTax(readNumberForTax());                                                                          // Problem #40
	//printHoursToDaysAndWeeks(readNumberOfHours());                                                         // Problem #41
	//printDurationToSeconds(readDurationToSeconds());                                                       // Problem #42
	//printSecondsToDuration(calcSecondsToDuration(readSecondsToDuration()));                                // Problem #43
	//printDayOfWeek(readDayOfWeek());                                                                       // Problem #44
	//printMonth(readMonth());                                                                               // Problem #45
	//printAllLetters();                                                                                     // Problem #46
	//printLoanInstalmentMonths(readLoanInstalmentMonths());                                                 // Problem #47
	//printMonthlyLoanInstalment(readMonthlyLoanInstalment());                                               // Problem #48
	//printATMPin(readATMPin());                                                                             // Problem #49
	//printATMPin3Times(readATMPin3Times());                                                                 // Problem #50
}





