#include using namespace std;

int main() {

int pin;

int balance = 20000;
int amount;
string number;
int load;

cout << "Welcome to JazzCash" << endl;
cout << "Enter your PIN: ";
cin >> pin;

if (pin == 1234)
{
    cout << "----------------------\n";
    cout << " **Login successful!** " << endl;
    cout << "----------------------\n";
    cout << "1. Check Balance" << endl;
    cout << "2. Send Money" << endl;
    cout << "3. Mobile Load" << endl;
    cout << "4. Exit" << endl;

    int option;
    cout << "Enter Your Choice: ";
    cin >> option;

    if (option == 1){
        cout << "Your balance is: " << balance << endl;
    }else if (option == 2){
        cout << "Enter mobile number: ";
        cin >> number;

        if (number == "03012345670"){
            cout << "Enter amount: ";
            cin >> amount;

            if (amount <= 0){
                cout << "Invalid amount";
            }else if (amount <= balance) {
                cout << "Transaction Successful\n";
                 balance = balance - amount;
                cout << "Your remaining balance is: " << balance << endl;
            }else {
                cout << "Insufficient balance";
            }
        } else{
            cout << "Invalid number";
        }
    }else if (option == 3){
        cout << "Enter number: ";
        cin >> number;

        if (number == "03012345670"){
            cout << "Enter load amount: ";
            cin >> load;

            if (load <= 0){
                cout << "Invalid amount!";
            }else if (load % 100 == 0){
                if (load <= balance){
                    balance = balance - load;

                    cout << "Load of Rs. " << load << " is successful!" << endl;

                    cout << "Your remaining balance is: " << balance << endl;
                }else{
                    cout << "Insufficient balance";
                }
            }else{
                cout << "Invalid amount!";
                cout << "\nPlease enter an amount that is a multiple of 100.";
            }
        }else{
            cout << "Invalid number";
        }
    }else if (option == 4){
        cout << "Thank you for using JazzCash!";
    }else{
        cout << "Invalid option!";
    }
}else{
    cout << "Incorrect PIN!";
}

return 0;
}