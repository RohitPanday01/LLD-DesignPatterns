#include"Logger.hpp"
#include <iostream>
#include<thread>

using namespace std;

void user1(){
    Logger* logger1 = Logger::getinstance();
    logger1->Log("this message is from user1");

}

void user2(){
    Logger* Logger2 = Logger::getinstance();
    Logger2->Log("this is from user 2 ");
}
int main(){
    thread t1(user1);
    thread t2(user2);

    t1.join();
    t2.join();

    
    return  0;
}