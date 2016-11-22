/* Define the exception here */

class BadLengthException : public exception{
    private: int except;
    public: BadLengthException(int n){
            except = n;
        }
        string what(){
            stringstream temp;
            temp << except;
            
            return temp.str();
        }
};
