//https://projecteuler.net/problem=2

#include <iostream>

int main(){
    int sum = 0;
    int first = 1;
    int second = 2;
    int next = 0;

    while (next < 4000000){
        if (second % 2 == 0){
            sum += second;
        }
        next = first + second;
        first = second;
        second = next;
    }

    std::cout << "Result: " << sum;
}