﻿#define _CRT_SECURE_NO_WARNINGS   
#include <string>
#include <time.h>
#include <iostream> 
 using namespace std;
 
    string getTime()
    {
        time_t timep;
        time (&timep);
        char tmp[64];
        strftime(tmp, sizeof(tmp), "%Y.%m.%d_%H.%M.%S",localtime(&timep) );
        return tmp;
    }
     
    int main(){
        string   time = getTime();
        cout << time << endl;
     
        return 0;
    }