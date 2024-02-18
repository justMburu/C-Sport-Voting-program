#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    int F = 0;
    int R = 0;
    int A = 0;
    char input;

    cout << "Please input your favorite sport: F: Football, R: Rugby, A: Athletics" << endl;
    cin >> input;

    while (input != 'Q'){


        if (input == 'F'){
            F++;
        } else if (input == 'R'){
            R++;
        } else if (input == 'A'){
            A++;
        }  else if (input != 'Q' || input != 'F' || input != 'R' || input != 'A') {
            cout << "Wrong input. Please enter the right letter." << endl;
        } else {
            cout << "Voting has been stopped.";
        }

        cout << "Please input your favorite sport: F(Football), R(Rugby), A(Athletics)" << endl;
        cin >> input;
    }

    cout << endl;
    cout << "The score for the sports are: " << endl;
    cout << "Football: " << F << endl;
    cout << "Rugby: " << R << endl;
    cout << "Athletics: " << A << endl;
    cout << endl;

    if (F > R && F > A){
        cout << "The most voted sport is: Football" << " with a score of " << F << endl;
    } else if (R > F && R > A) {
        cout << "The most voted sport is: Rugby" << " with a score of " << R << endl;
    } else if (A > F && A > R) {
        cout << "The most voted sport is: Athletics" << " with a score of " << A << endl;
    } else if (R == F && R == A && A == F && A == R && F == A && F ==R){
        cout << "It's a tie." << " with the scores being: " << "Football " << F << " Rugby " << R << " Athletics " << A << endl;
    } else if (F == R){
        cout << "It's a tie between: " << "Football: " << F << " and " << "Rugby: " << R << endl;
    } else if (F == A){
        cout << "It's a tie between: " << "Football: " << F << " and " << "Athletics: " << A << endl;
    } else if (R == F){
        cout << "It's a tie between: " << "Rugby: " << R << " and " << "Football: " << F << endl;
    } else if (R == A){
        cout << "It's a tie between: " << "Rugby: " << R << " and " << "Athletics: " << A << endl;
    } else if (A == F){
        cout << "It's a tie between: " << "Athletics: " << A << " and " << "Football: " << F << endl;
    } else if (A == R){
        cout << "It's a tie between: " << "Athletics: " << A << " and " << "Rugby: " << R << endl;
    }
    /*} else if (R == F || R == T || R == S) {
        cout << "The most voted sport is: Rugby";
    } else if (R > F && R > T && R > S) {
        cout << "The most voted sport is: Rugby";
    } else if (R > F && R > T && R > S) {
        cout << "The most voted sport is: Rugby";
    } else if (R > F && R > T && R > S) {
        cout << "The most voted sport is: Rugby";
    }*/

    return 0;
}
