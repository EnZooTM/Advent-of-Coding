#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
using namespace std;


int arr[200];
int a = 0;
int target = 2020;

// File string to int
void inff()   {
    ifstream file("day1AOC.txt");
    if (file.is_open())   {
        string line;
        
        while(getline(file, line))   {
            arr[a] = (stoi(line));
            a++;
        }
    }
    file.close();
}


int main()   {
    inff();
    
    // Day One Part One
    int result1;
    int cor01, cor02;
    for(int i = 0; i < a; i++)   {
        for(int j = i+1; j < a; j++)   {
            if(arr[i] + arr[j] == target)   {
            	cor01=arr[i];
            	cor02=arr[j];
                result1 = arr[i] * arr[j];
            }
        }
    }
    
    
    // Day One Part Two
	int result2;
	int cor11, cor12, cor13;
    for(int k = 0; k <= a-2; k++)   {
        for(int l = k+1; l <= a-1; l++)   {
            for(int m = l+1; m <= a; m++)   {
                if(arr[k] + arr[l] + arr[m] == target)   {
                	cor11=arr[k];
                	cor12=arr[l];
                	cor13=arr[m];
                    result2 = arr[k] * arr[l] * arr[m];
                }
            }
        }
    }
    
    cout<< "Result 1: "<< result1<< "\n";
    cout<< "Correct numbers: "<< cor01<< ", "<< cor02<< "\n\n";
    
    cout<< "Result 2: " << result2<< "\n";
    cout<< "Correct numbers: "<< cor11<< ", "<< cor12<< ", "<< cor13;
    return 0;
}
