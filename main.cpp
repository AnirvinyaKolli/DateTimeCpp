/*
Sai Anirvinya Kolli 
Software Design 
3/20/26 
Date time 
*/

#include <iostream>
#include <ctime>

int main(){

    /*
    Practice with time zones:

    1. If it is 10AM in London. What time is it in Tokyo? What is the UTC offset?
        UTC Offset: +9 
        7PM

    2. What is the UTC offset for Mountain Daylight Time?
        -6
    */

    // //Current time formatted
    std::time_t now = std::time(nullptr); 
    std::cout << "Current Time: " << std::ctime(&now) << "\n"; 

    std::tm* utc_time = std::gmtime(&now); 

    //Time with offset
    int offset;
    std::cout << "Enter offset: "<< std::endl; 
    std::cin >> offset;  
    now += offset*3600; 
    std::tm* pacificTime = std::gmtime(&now);
    std::cout<<"Offset time: " << std::asctime(pacificTime); 


    // Calculate time to answer question
    std::time_t priorAnswer = std::time(nullptr); 
    std::cout << "Enter a response: "; 
    std::string answer; 
    std::cin >> answer;      
    std::time_t afterAnswer = std::time(nullptr); 

    long difference = afterAnswer-priorAnswer; 
    std::cout << "Took " << difference << " seconds.";


}