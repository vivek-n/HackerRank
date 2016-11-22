//Write your code here
class Calculator : public AdvancedArithmetic {
private: vector<int> vi;
         int sum;
public: Calculator() {
    sum = 1;
}
        int divisorSum(int n) {
            for (int i = 2; i <= n / 2; i++) {
                if (n % i == 0) {
                    vi.push_back(i);
                }
            }

            for (int i = 0; i < vi.size(); i++) {
                sum += vi[i];
            }

            if (n > 1) {
                sum += n;
            }

            return sum;
        }
};
