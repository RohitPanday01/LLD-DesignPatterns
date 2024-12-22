#include "Logger.hpp"
#include <iostream>

using namespace std;


int Logger::ctr = 0;
Logger* Logger:: Loggerinstance = nullptr;
mutex Logger::mtx;

Logger::Logger(){
    ctr++;
    cout<<"New Instance Created , No. od instance of class "<< ctr<<endl;
}

void Logger::Log (string msg){
    cout<<msg<<endl;

}

Logger* Logger::getinstance(){
   if(Loggerinstance == nullptr){
        mtx.lock();
        if(Loggerinstance == nullptr){
            Loggerinstance = new Logger();
        }
        mtx.unlock();
   }
    
    return Loggerinstance;
}



