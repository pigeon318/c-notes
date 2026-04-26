#include <iostream>

int main(){
    
    double num1;
    double num2;
    int op = 0;
    double awnser;

    std::cout << "Calculator\n";
    
while (op != 5) {
    std::cout << "enter first number: \n";
    std::cin >> num1;

    std::cout << "enter second number: \n";
    std::cin >> num2;

    std::cout << "enter operator: \n";
    std::cout << "1) +(addition)\n";
    std::cout << "2) -(subtraction)\n";
    std::cout << "3) *(multiplication)\n";
    std::cout << "4) /(division)\n";
    std::cout << "5) exit\n";
    std::cin >> op;
    
    if (op == 1){

        awnser = num1 + num2;
        std::cout << awnser << "\n";

    }

    else if (op == 2){

        awnser = num1 - num2;
        std::cout << awnser << "\n";

    }

    else if (op == 3){

        awnser = num1 * num2;
        std::cout << awnser << "\n";

    }

     else if (op == 4 && num2 == 0){

        std::cout << "Thats not a valid option!";

    }

    else if (op == 4){

        awnser = num1 / num2;
        std::cout << awnser << "\n";

    }

    else if (op == 5){
        std::cout << "Exiting now";
    }

    else{
        std::cout << "Thats not a number 1 - 5!" << "\n";
    }



}
    

    


}