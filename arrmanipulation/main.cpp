/*Goal: Practice array manipulation in C++. 
 **The user will input 10 integers. 
 **Put them into an array. Then print the array in the order the numbers were
 **entered. Then print in reverse order. Then sort the array in ascending order 
 **and print it. 
 */

#include "main.hpp"


int main()
{
    int userInput[10]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //Enter the numbers into an array called userInput
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &userInput[i]);
    }
    //print the array
    std::cout << "\nThe array\n";
    for (int i = 0; i < 10; i++)
    {
        std::cout << userInput[i] << " ";
    }
    //print the array in reverse order
    std::cout << "\n\nThe array in reverse order\n";
    for (int i = 9; i >= 0; i--)
    {
        std::cout << userInput[i] << " ";
    }
    //sorting the array
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (userInput[j] > userInput[j + 1])
            {
                int temp;
                temp = userInput[j];
                userInput[j] = userInput[j + 1];
                userInput[j + 1] = temp;
            }
        }
    }
    std::cout << "\n\nThe array sorted\n";
    for (int i = 0; i < 10; i++)
    {
        std::cout << userInput[i] << " ";
    }
    return 0;
}