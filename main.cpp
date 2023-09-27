#include <iostream>

using namespace std;

int main()
{
    //messages
    string message_one = "Write a number: ";
    string message_two = "The number written is: ";
    string initial_message = "=== NUMBER PROGRAM ===";

    cout << initial_message << endl;

    bool validator = true;
    while (validator == true) {
        double userNumber;

        //getting information of the user
        cout << message_one;
        cin >> userNumber;
        cout << message_two << userNumber << endl;
    };

    return 0;
}
