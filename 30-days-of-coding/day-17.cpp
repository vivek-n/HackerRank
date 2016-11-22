//Write your code here
class myException : public exception {
    const char* what() const throw() {
        return "n and p should be non-negative";
    }
};

class Calculator {
public: Calculator() {

        }
        int power(int base, int power) throw(myException) {
            if ((base < 0) || (power < 0)) {
                throw myException();
            }

            return int(pow(base, power));
        }
};
