//Write MyBook class

class MyBook : public Book{
    private:
        int price;
    public:
        MyBook(string t,string a, int p)
        : Book(t, a){
            this->price = p;
        }
    
        void display(){
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Price: " << price << endl;
        }
};
