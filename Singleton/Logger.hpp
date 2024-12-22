#ifndef Logger_hpp
#define Logger_hpp

#include<string>
#include<mutex>

using namespace std;

class Logger{
        static int ctr;
        static Logger* Loggerinstance;
        static mutex mtx;
        Logger();
    public:

        static Logger* getinstance();
        void Log(string msg);

};

#endif