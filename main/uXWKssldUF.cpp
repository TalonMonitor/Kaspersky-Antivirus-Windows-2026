#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
class Utility{
public:
    static int sum(const std::vector<int>& numbers){
        return std::accumulate(numbers.begin(), numbers.end(), 0);
    }
    static double average(const std::vector<int>& numbers){
        return static_cast<double>(sum(numbers)) / numbers.size();
    }
    static std::vector<int> sortAscending(std::vector<int> numbers){
        std::sort(numbers.begin(), numbers.end());
        return numbers;
    }
    static std::vector<int> sortDescending(std::vector<int> numbers){
        std::sort(numbers.rbegin(), numbers.rend());
        return numbers;
    }
    static int maxElement(const std::vector<int>& numbers){
        return *std::max_element(numbers.begin(), numbers.end());
    }
    static int minElement(const std::vector<int>& numbers){
        return *std::min_element(numbers.begin(), numbers.end());
    }
};
int main(){
    std::vector<int> data = {5, 2, 9, 1, 5, 6};
    std::cout << "Sum: " << Utility::sum(data) << std::endl;
    std::cout << "Average: " << Utility::average(data) << std::endl;
    std::vector<int> sortedAsc = Utility::sortAscending(data);
    std::cout << "Sorted Ascending: ";
    for(const auto& num : sortedAsc) std::cout << num << ' ';
    std::cout << std::endl;
    std::vector<int> sortedDesc = Utility::sortDescending(data);
    std::cout << "Sorted Descending: ";
    for(const auto& num : sortedDesc) std::cout << num << ' ';
    std::cout << std::endl;
    std::cout << "Max Element: " << Utility::maxElement(data) << std::endl;
    std::cout << "Min Element: " << Utility::minElement(data) << std::endl;
    return 0;
}
