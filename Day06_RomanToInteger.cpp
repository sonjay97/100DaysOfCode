#include <iostream>
using namespace std;

int main() {

    string s = "IV";
        
        string nums[s.length()];
        int number;

        for(int i =0; i < s.length(); i++){

            nums[i] += s[i];

            cout << nums[i];

        }

        int arrayLength = sizeof(nums) / sizeof(string);
        
        for(int i = 0; i < arrayLength; i++){

            if(nums[i] == "I"){

                number += 1;
                cout << "a";

            }

            if(nums[i] == "V"){

                number += 5;
                

            }

            if(nums[i] == "X"){

                number += 10;
                
            }

            if(nums[i] == "L"){

                number += 50;
                
            }

            if(nums[i] == "C"){

                number += 100;
                
            }

            if(nums[i] == "D"){

                number += 500;
            }

            if(nums[i] == "M"){

                number += 1000;
            }

            if(nums[i] == "I" && nums[i + 1] == "V"){

                number += 4;
                i++;

            }

            if(nums[i] == "I" && nums[i + 1] == "X"){

                number += 9;
                i++;

            }

            if(nums[i] == "X" && nums[i + 1] == "L"){

                number += 40;
                i++;

            }

            if(nums[i] == "X" && nums[i + 1] == "C"){

                number += 90;
                i++;

            }

            if(nums[i] == "C" && nums[i + 1] == "D"){

                number += 400;
                i++;

            }

            if(nums[i] == "C" && nums[i + 1] == "M"){

                number += 900;
                i++;

            }

            else{

                cout << "hi";
            }

        }

        cout << number;

    }
