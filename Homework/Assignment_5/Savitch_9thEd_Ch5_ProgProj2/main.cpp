/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * CSC 5 42829
 * Created on April 26, 2016, 12:00 PM
 */
//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes
bool get_repeat();
int convert_time(int, int, char);
int caculate_data(int, int);
void output_time(int);
int get_hour(bool);
int get_min(bool);
char get_time();

//Execution Begins Here
int main()
{
    int start_hour, start_min, wait_hour, wait_min;
    int final_start_time, final_wait_time, final_time;
    char start_time;

    do
    {
        // Ask the user for the current time.
        cout << "Enter starting time: " << endl;
        start_hour = get_hour(true);
        start_min = get_min(true); 
        start_time = get_time();

        // Ask the user for how long to wait for.
        cout << "Enter waiting time: " << endl;
        wait_hour = get_hour(false);
        wait_min = get_min(false);

        // Do some magic!
        final_start_time = convert_time(start_hour, start_min, start_time);
        final_wait_time = convert_time(wait_hour, wait_min, 'N');

        // Loop through each min and it towards the right vear.
        final_time = caculate_data(final_start_time, final_wait_time);

        // Output the results.
        cout << "Time after wait: ";
        output_time(final_time);
   } while(get_repeat());

    cout << endl;
    return 0;
}

// Ask the user for the hour. If limit is true only use 12 hours.
int get_hour(bool limit)
{
	int hour;
	do
	{
		cout << "Hour: ";
        cin >> hour;
    } while (!(hour > 0 && hour <= 12 || !limit));
	return hour;
}

// Ask the user for the minute.
int get_min(bool limit)
{
	int minute;
	do
	{
		cout << "Minute: ";
		cin >> minute;
	} while (!(minute >= 0 && minute < 60 || !limit));
	return minute;
}


// Ask the user for time of day ex AM/PM
char get_time()
{
	char time, temp;
	do
	{
		cout << "AM/PM: ";
        cin >> time >> temp;
    } while (!(time == 'a' || time == 'A' || time == 'p' || time == 'P'));

	if (time == 'a' || time == 'A')
	{
		return 'A';
	}
	else if (time == 'p' || time == 'P')
	{
		return 'P';
	}
}

// Convert the time to 24 hour time.
int convert_time(int hour, int minute, char time)
{
    // Convert time to 24 hour format.
    if (time == 'P')
    {
        return ((hour + 12) * 100) + minute;  
    }
    else if (time == 'A' && hour == 12)
    {
        return minute;
    }
    // All else fais this is the answer.
    return (hour * 100) + minute;    
}

// Ask the user to repeat the program.
bool get_repeat()
{
	char a; // This is answer
	do
	{
		cout << "Repeat? Enter 'y/n': ";
		cin >> a;
		if (a == 'Y' || a == 'y')
		{
			return true;
		}
		else if (a == 'N' || a == 'n')
		{
			return false;
		}
	} while(!(a == 'Y' || a == 'y' || a == 'N' || a == 'n'));
}

// Output time
void output_time(int time)
{
    int end_hour = time / 100;
    int end_minute = time - (end_hour * 100);
    string final_time;

    // Get the right hour.
    if (end_hour > 12)
    {
        end_hour = abs(12 - end_hour);
        final_time = " PM";
    }
    else
    {
        if (end_hour == 0)
        {
            end_hour = 12;
        }
        final_time = " AM";
    }
    
    // Display the right minute.
    if (end_minute < 10)
    {
        cout << end_hour << ":0" << end_minute << final_time  << endl;
    }
    else
    {
        cout <<  end_hour << ":" << end_minute << final_time << endl;
    }
}

// Caculate the time after the wait.
int caculate_data(int start_time, int wait_time)
{
    int start_hour = start_time / 100;
    int start_min = start_time - (start_hour * 100);

    int wait_hour = wait_time / 100;
    int wait_min = wait_time - (wait_hour * 100);

    int final_hour = start_hour, final_min = start_min;

    // Get the right math for mins.
    for (int i = 0; i < wait_min; i++)
    {
        if (final_min < 60)
        {
            final_min++;
        }
        else
        {
            final_min = 0;
            final_hour++;
        }
    }

    // Get the right math for hour
    for (int i = 0; i < wait_hour; i++)
    {
        if (final_hour < 24)
        {
            final_hour++;
        }
        else
        {
            final_hour = 0;
        }
    }
        
    return (final_hour * 100) + final_min;
}