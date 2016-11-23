class D : public A, B, C
{

	int val;
	public:
		//Initially val is 1
		 D()
		 {
		 	val=1;
		 }


		 //Implement this function
		 void update_val(int new_val)
		 {
             int temp = new_val;
             
             while(val < new_val){
                 if(temp % 2 == 0){
                     A::func(val);
                     
                     temp /= 2;
                 }
                 
                 if(temp % 3 == 0){
                     B::func(val);
                     
                     temp /= 3;
                 }
                 
                 if(temp % 5 == 0){
                     C::func(val);
                     
                     temp /= 5;
                 }
             }
		 }
		 //For Checking Purpose
		 void check(int); //Do not delete this line.
};
