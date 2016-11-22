class Person{
public: string name;
        int age;
        virtual void getdata() {};
        virtual void putdata() {};
};

class Professor : public Person{
    private: int publications;
        int this_id;
    
    public: static int cur_id;
    void getdata(){
        cin >> name >> age >> publications;
        this_id = cur_id;
        cur_id++;
    }
    void putdata(){
        cout << name << " " << age << " " << publications << " " << this_id << endl;
    }
};

class Student : public Person{
    private: int marks[6];
        int this_id;
    
    public: static int cur_id;
    void getdata(){
        cin >> name >> age >> marks[0] >> marks[1] >> marks[2]
            >> marks[3] >> marks[4] >> marks[5];
        this_id = cur_id;
        cur_id++;
    }
    void putdata(){
        int total = 0;
        
        cout << name << " " << age << " ";
        
        for(int i=0; i<6; i++){
            total += marks[i];
        }
        
        cout << total << " " << this_id << endl;
    }
};

int Professor::cur_id = 1;
int Student::cur_id = 1;
