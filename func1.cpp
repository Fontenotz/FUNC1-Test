#include<iostream.h>
#include<time.h>
#include<stdlib.h>

// Here comes a really boring function, if that is possible
void gray();                  // Notice: no inputs, no outputs

// Here comes a fairly exciting function
void blue(int a, int b);      // Notice: two integer inputs, no outputs

// Here comes a really exciting function
bool orange(char letter); // Notice: 1 character input, 1 boolean output
                             

int main()
{
	srand(time(0));

	gray();                          // a function CALL

 	blue(24,12);                     // a function CALL

	bool result=orange('t');     // a function CALL
    if (result)
		cout<<"You may enter the Haunted Mansion"<<endl;
	else
		cout<<"You May NOT enter the Haunted Mansion"<<endl;

return 0;
}

void gray()
{
	cout<<"Welcome to The World of The Great Fontenotz"<<endl;
	cout<<"___________________________________________"<<endl;
}

void blue(int a, int b)
{
	if (a%b==0)
		cout<<b<<"  is a factor of  "<<a<<endl;
    else
		cout<<b<<"  is NOT a factor of  "<<a<<endl;
}

bool orange(char letter)
{
	if (letter<='m')
		return false;
		else
		  return true;
}



