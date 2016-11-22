
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);

class Box{
    private: int l;
        int b;
        int h;
    
    public: Box(){
        l = 0;
        b = 0;
        h = 0;
    }
    
    Box(int l, int b, int h){
        this->l = l;
        this->b = b;
        this->h = h;
    }
    
    Box(Box &obj){        
        l = obj.l;
        b = obj.b;
        h = obj.h;
    }
    
    int getLength(){
        return l;
    }
    
    int getBreadth(){
        return b;
    }
    
    int getHeight(){
        return h;
    }
    
    long long CalculateVolume(){
        long long temp;
        
        temp = (long long)l * (long long)b * (long long)h;
        
        return temp;
    }
    
    bool operator<(Box &obj){
        if(l < obj.l){
            return true;
        }
        
        else if((b < obj.b) && (l == obj.l)){
            return true;
        }
        
        else if((h < obj.h) && (b == obj.b) && (l == obj.l)){
            return true;
        }
        
        else{
            return false;
        }
    }
};

ostream& operator<<(ostream& out, Box& B){
    out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();

    return out;
}

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

