// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdint>

using namespace std;



int num();
int strColor();
int pointerExample();
int pointerExample2();
int arrayExample();
int integerExample();
int conditionalProgram();
int advanceLoop();
int floatExample();
int exceptionHandling();
int qualifierExample();
int lifeUp();
int bitWiseOperationExample();
int memoryLeakExample();
int structureExample();
int enumExample();
int strongType();
int another_api_call();
string api_call();

struct User {
    const int uId;
    const char* name;
    const char* emailId;
    int course_count;
};

enum MsOffice: uint8_t
{
    BOLD = 2,
    ITALICS,
    UNDERLINE
};

int main()
{
    //strColor();
    //num();
    //pointerExample();
    //pointerExample2();
    //arrayExample();
    //integerExample();
    //conditionalProgram();
    //advanceLoop();
    //floatExample();
    //exceptionHandling();
    //qualifierExample();
    //bitWiseOperationExample();
    //memoryLeakExample();
    //structureExample();
    //enumExample();
    strongType();
    
}


// cpp is strongly typed
int strongType() {
    auto response1 = api_call();
    auto response2 = another_api_call();
    cout << "API CALL VALUE: " << response1 << endl;

    if (typeid(response1) == typeid(string))
    {
        puts("response1 type of both ID matches");
    }

    if (typeid(response2) == typeid(int)) {
        puts("response2 type of both ID matches\n");
    }
    
    return 0;
}

string api_call() {
    return "got some api call";
}
int another_api_call() {
    return 5;
}


int enumExample() {
    int myAttribute = UNDERLINE;
    
    cout << myAttribute << endl;

    return 0;
}

int structureExample() {
    User mickey = { 001,"Micky","micky@cartoon",2 };
    User donald = { 002,"Donald","donald@cartoon",2 };

    User *d = &donald;

    cout << d->emailId << endl;
    d->course_count = 4;
    d->emailId = "don@toon.com";

    cout << d->course_count << endl;
    cout << d->emailId << endl;

    return 0;
}



// memoryLeakExample in CPP
int memoryLeakExample() {

    int* myp;
    
     try{
        myp = new int[100000];
        cout << "Memory space allocation\n";
    }
    catch (...){
        cout << "Failed Memory space allocation\n";
    }

    //delete [] myp;

    return 0;
}


// bitWiseOperationExample 
// Important Go indepth and do at least 10 examples
int bitWiseOperationExample() {
    unsigned int x = 7;
    unsigned int y = 9;

    unsigned int z = x & y;

    cout << "Value of z is: " << z << endl;

    return 0;
}


// Qualifier  Example
int qualifierExample() {
    // two type of modifier
    // 1. modification Qualifiers(const, volatile, mutable) 2. Life Duration Qualifiers(static,register,extern)

    int life = 3;
    cout << "You starting gamelife is: " << life << endl;
    
    life = lifeUp();
    printf("Your updated fie is: %d\n", life);

    life = lifeUp();
    printf("Your updated fie is: %d\n", life);

    return 0;
}
int lifeUp() {
    //int life = 3;
    static int life = 3;
    return life += 1;
}


// Exceptional Handling 
int exceptionHandling() {

    int call_api = 2;
    try
    {
        cout << "trying to use api value \n";
        throw call_api;
        cout << "after_api execution";
    }
    catch (int x)
    {
        cout << "integer exception is handled\n";
    }

    cout << "keep on moving with rest of code\n";

    return 0;
}

// Float in CPP
int floatExample() {

    float my_fp = 20.2;
    float my_fp2 = 20.2+20.2;

    if (my_fp == 20.2)
    {
        puts("myfp");
    }
    else if (my_fp2 == 40.4) {
        puts("myfp2");
    }
    else
    {
        puts("else");
    }
    return 0;
}

// AdvanceLoop in CPP
int advanceLoop() {

    char my_string[] = "shyam";
    char my_name[] = { 's','h','y','a','m',0 };

    printf("My name is: %s\n", my_string);
    printf("My name is: %s\n", my_name);

    for (int i = 0; my_name[i] != 0; i++) {
        cout << "second loop Character is: " << my_name[i] << endl;
    }

    for (char i : my_string) {
        if (i == 0) break;
        cout << "first loop Character is: " << i << endl;
    }

    // work same as above but will not include 0
    for (char* cp = my_name; *cp != 0; cp++)
    {
        cout << "using pointer: " << *cp << endl;
    }

    return 0;
}


// Conditional programming in CPP
int conditionalProgram() {
    int rating = 6;

    if (rating == 6) {
        puts("6 star rating\n");
    }
    else {
        puts("not 6 star rating\n");
    }

    //ternary operation
    printf("your rating feedback is: %s\n", rating == 6 ? "true block" : "false block");

    // switch
    switch (rating)
    {
    case 1:
        puts("\nswitch 1 star rating");
        break;
    case 3:
        puts("\nswitch 3 star rating");
        break;
    case 6:
        puts("\nswitch 6 star rating");
        break;
    default:
        break;
    }

    // for loop
    int my_arr[] = { 0,1 };
    /*for (int i = 0; i < 2; i++)
    {
        cout << my_arr[i] << " number" << endl;
    }*/

    for (int i : my_arr)
    {
        cout << i << endl;
    }

    return 0;
}


// integer in CPP
int integerExample() {
    // 1 byte = 8bits
    // main problem with these type is these size changes depending on the system on which we are running
    printf("Size of this int type: %ld bits\n", sizeof(int) * 8);
    printf("Size of this char type: %ld bits\n", sizeof(char) * 8);
    printf("Size of this short int type: %ld bits\n", sizeof(short) * 8);
    printf("Size of this long int type: %ld bits\n", sizeof(long) * 8);
    printf("Size of this long long int type: %ld bits\n", sizeof(long long) * 8);

    // to solve above mention problem we have library <cstdint>
    printf("Size of this int16 type: %ld bits\n", sizeof(uint16_t) * 8);
    printf("Size of this int32 type: %ld bits\n", sizeof(uint32_t) * 8);
    printf("Size of this int64 type: %ld bits\n", sizeof(uint64_t) * 8);

    int fun = 0x16;
    printf("Value of fun: %d \n", fun);

    return 0;
}


// Array in CPP
int arrayExample() {
    int integer_array1[4] = { 1,11,22,333 };
    int another_array[4];
    another_array[0] = 9;
    another_array[1] = 19;

    cout << integer_array1[0] << endl;
    cout << integer_array1[3] << endl;
    cout << another_array[3] << endl; // deafualt value is 0 or some random value

    *another_array = 29; //change 0 position value
    cout << another_array[0] << endl;

    int* ap = another_array;
    ap++;
    cout << another_array[1] << endl;
    *ap = 209;
    cout << another_array[1] << endl;

    return 0;
}

// pointers Example
int pointerExample2() {
    int score = 200;
    int* myp = &score;

    printf("Value of score: %d\n", score);
    printf("Value of myp: %p\n", myp);

    int& another_score = score;
    another_score = 800;
    printf("Value of score: %d\n", score);
    printf("Value of myp: %p\n", myp);

    return 0;
}

// Basic of pointer
int pointerExample() {
    int card = 40;
    int my_card = card;
    int* myp;
    myp = &card;
    my_card = *myp; // pointer deref

    printf("Value of card: %d\n", my_card);
    printf("Value of myp: %p\n", myp);
    return 0;
}

// String in CPP
int strColor() {
    string my_color;
    cout << "Enter your color: \n";
    getline(cin, my_color);
    cout << "Hey " << my_color << " is my fav." << endl;
    return 0;
}


// Basic  Hello World
int num() {
    int number;
    cin >> number;
    printf("Your ID is %d \n", number + 3);
    cout << "Hello World!\n";
    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
