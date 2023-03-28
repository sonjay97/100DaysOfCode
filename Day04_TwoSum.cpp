#include <iostream>
#include <vector>
using namespace std;

vector<int> nums;
vector<int> twoSum(vector<int>, int);

int main(){

    int input;
    int listSize;
    int target;

    cout << "How big is your list of numbers: \n";
    cin >> listSize;
    cout << "Enter your list of numbers: \n";

    for(int i = 0; i < listSize; i++){

        cin >> input;
        nums.push_back(input);

    }

    cout << "Enter a target number: \n";
    cin >> target;

    vector<int> numList = twoSum(nums, target);

    for(int i = 0; i < nums.size(); i++){

        cout << numList.at(i);

    }
    
}

vector<int> twoSum(vector<int> nums, int target) {
 
    for(int i = 0; i < nums.size(); i++){
        for(int j = i + 1; j < nums.size(); j++){

            if(nums[j] == target - nums[i]){

                return vector<int>(i, j);
            }

        }
    }

    return nums;
}