	// Add your code here
    Difference(const vector<int>& e){
        this->elements = e;
    }

    void computeDifference(){
        vector<int> difference;

        for(int i=0; i<elements.size()-1; i++){
            for(int j=i+1; j<elements.size(); j++){
                difference.push_back(abs(elements[i] - elements[j]));
            }
        }

        maximumDifference = difference[0];
        for(int i=1; i<difference.size(); i++){
            if(maximumDifference < difference[i]){
                maximumDifference = difference[i];
            }
        }
    }
