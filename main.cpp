//
//  main.cpp
//  Enumerated data types
//
//  Created by Noah Hobbs on 11/7/19.
//  ndhobbs@dmacc.edu
//  Copyright © 2019 Noah Hobbs. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;
enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };
void dayOfTheWeek(Day today);

int main()
{
    const int MAX_DAY = 6, MIN_DAY = 0; //making sure they are entering a valid day
    int today = 0; //given a default value of 0
       
    while (today != -1 && today >= MIN_DAY && today <= MAX_DAY) //loop that continues asking until sent value is entered
    {
        cout << "What day is it? (0-6) " << endl;
        cin >> today;
        if (today == -1)
        {
            // I included this so the program will not run if the sent value is entered
            break;
        }
        else if (today >MAX_DAY || today < MIN_DAY)
        {
            break; //this makes sure it is actually a day
        }
        else
        {
            Day today2 = static_cast<Day>(today);
            cout << today2;
            dayOfTheWeek(today2);
            

            cout << "If you are done enter '-1'" << endl;
        }
    }
    
    return 0;
}


void dayOfTheWeek(Day today)
{
    //this function is going to print 3 items to the console
    int tomorrow, yesterday;
    tomorrow = today + 1;
    yesterday = today - 1;
    
    if (today == 0)
    //this if statement checks that they are staying within the days of the week
    {
        yesterday = 6;
    }
    else if(today == 6)
    {
        tomorrow = 0;
    }
    
    
    cout << "Yesterday: " << yesterday << endl;
    cout << "Today: " << today << endl;
    cout << "Tomorrow: " << tomorrow << endl;

}

