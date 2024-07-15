#include <iostream>
#include <string>
#include <sstream>
#include <vector>

class StringCalculator {
public:
    int add(const std::string& numbers) {
        if (numbers.empty()) {
            return 0;
        }
        
        std::vector<int> numList = splitAndConvert(numbers);
        int sum = 0;
        for (int num : numList) {
            sum += num;
        }
        
        return sum;
    }

private:
    std::vector<int> splitAndConvert(const std::string& numbers) {
        std::vector<int> result;
        std::stringstream ss(numbers);
        std::string item;
        
        while (std::getline(ss, item, ',')) {
            result.push_back(std::stoi(item));
        }
        
        return result;
    }
};
