class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
  		Student (string firstName, string lastName, int identification, vector<int>& scores)
            : Person(firstName, lastName, identification){
            this->testScores = scores;
        }
  
  		char calculate(){
            int total = 0;
            
            for(int i=0; i<testScores.size(); i++){
                total += testScores[i];
            }
            
            int average = total / testScores.size();
            
            char grade;
            
            if((average >= 90) && (average <= 100)){
                grade = 'O';
            }
            
            if((average >= 80) && (average < 90)){
                grade = 'E';
            }
            
            if((average >= 70) && (average < 80)){
                grade = 'A';
            }
            
            if((average >= 55) && (average < 70)){
                grade = 'P';
            }
            
            if((average >= 40) && (average < 55)){
                grade = 'D';
            }
            
            else if(average < 40){
                grade = 'T';
            }
            
            return grade;
        }
};
