/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * CSC 5 42829
 * Created on April 27, 2016, 3:00 PM
 */

// System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

//Menu Function
void menu();

//Problems
//Savitch_9thEd_Ch5_PracProg1
void prob1();

//Savitch_9thEd_Ch5_PracProg2
void prob2();

//Savitch_9thEd_Ch5_PracProg3
void prob3();

//Savitch_9thEd_Ch5_PracProg5
void prob4();

//Savitch_9thEd_Ch5_PracProg6
void prob5();

//Savitch_9thEd_Ch5_PracProg7
void prob6();

//Savitch_9thEd_Ch5_ProgProj1
void prob7();

//Savitch_9thEd_Ch5_ProgProj2
void prob8();

//Savitch_9thEd_Ch5_ProgProj4
void prob9();

//Savitch_9thEd_Ch5_ProgProj5
void prob10();

//Functions
//Functions for Practice Program 1
void description1();
void get_input1(float& num1, float& num2, float& num3, float& num4);
void get_average(float& num1, float& num2, float& num3, float& num4, float& avg);
void get_standard_deviation(float& num1, float& num2, float& num3, float& num4, float& avg, float& sd, float& vr);
void output_standard(float num1, float num2, float num3, float num4, float avg, float sd, float vr);

//Functions for Practice Program 2
void get_input2(float& feet, float& inches, float& meters, float& centimeters);
float convert2(float& feet, float& inches, float& meters, float& centimeters);
void give_output2(float feet, float inches, float meters, float centimeters);

//Functions for Practice Program 3
void get_input3(float& feet, float& inches, float& meters, float& centimeters);
float convert3(float& feet, float& inches, float& meters, float& centimeters);
void give_output3(float feet, float inches, float meters, float centimeters);

//Functions for Practice Program 5
void get_input4(float& lbs, float& oz, float& kg, float& g);
float convert4(float& lbs, float& oz, float& kg, float& g);
void give_output4(float lbs, float oz, float kg, float g);

//Functions for Practice Program 6
void get_input5(float& lbs, float& oz, float& kg, float& g);
float convert5(float& lbs, float& oz, float& kg, float& g);
void give_output5(float lbs, float oz, float kg, float g);

//Functions for Practice Program 7
void description7();
void get_input6(float side_a, float side_b, float side_c);
bool check_triangle(float& side_a, float& side_b, float& side_c);
float semiperimter(float side_a, float side_b, float side_c);
void area_perimeter(float side_a, float side_b, float side_c, float perimeter, float area);

//Functions for Programming Project 1
void input(int&, int&, char&);
void convert(int&, int&, char&);
void output(int&, int&, char&);

//Functions for Programming Project 2
bool get_repeat();
int convert_time(int, int, char);
int caculate_data(int, int);
void output_time(int);
int get_hour(bool);
int get_min(bool);
char get_time();

//Functions for Programming Project 4
//None

//Functions for Programming Project 5
void wind(float& w, float& spd, float& t);

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare the loop variable
    unsigned short choice;
    //General Menu Format
    do {
        //Display the selection
        menu();
        //Read the choice
        cin>>choice;
        //Solve a problem that has been chosen.
        switch (choice) {
            case 1: prob1();
                break;
            case 2: prob2();
                break;
            case 3: prob3();
                break;
            case 4: prob4();
                break;
            case 5: prob5();
                break;
            case 6: prob6();
                break;
            case 7: prob7();
                break;
            case 8: prob8();
                break;
            case 9: prob9();
                break;
            case 10: prob10();
                break;

            default:
            {
                cout << "Exit?" << endl;
            }
        };
    } while (choice <= 10 && choice >= 1);
    return 0;
}

//Menu Function

void menu() {
    cout << "Type 1 to solve Practice Program 1" << endl;
    cout << "Type 2 to solve Practice Program 2" << endl;
    cout << "Type 3 to solve Practice Program 3" << endl;
    cout << "Type 4 to solve Practice Program 5" << endl;
    cout << "Type 5 to solve Practice Program 6" << endl;
    cout << "Type 6 to solve Practice Program 7" << endl;
    cout << "Type 7 to solve Programming Project 1" << endl;
    cout << "Type 8 to solve Programming Project 2" << endl;
    cout << "Type 9 to solve Programming Project 4" << endl;
    cout << "Type 10 to solve Programming Project 5" << endl;
    cout << "Type a letter to quit with no solutions." << endl;
}

//Savitch_9thEd_Ch5_PracProg1

void prob1() {
    {
        float avg, sd, num1, num2, num3, num4, vr;
        char again;
        description1();
        do {
            get_input1(num1, num2, num3, num4);
            get_average(num1, num2, num3, num4, avg);
            get_standard_deviation(num1, num2, num3, num4, avg, sd, vr);
            output_standard(num1, num2, num3, num4, avg, sd, vr);
            cout << "Would you like to run program again?" << endl;
            cin >> again;
            cout << endl;
        } while ((again == 'y') || (again == 'Y'));
        cout << "Program has been terminated." << endl;
    }
}

//Savitch_9thEd_Ch5_PracProg2

void prob2() {
    {
        float feet, inches, meters, centimeters;
        char check;

        do {
            get_input2(feet, inches, meters, centimeters);
            convert2(feet, inches, meters, centimeters);
            give_output2(feet, inches, meters, centimeters);
            cout << "Repeat calculation? (Y/N)" << endl;
            cin>>check;

        } while (check == 'Y' || check == 'y');
        cout << "Program has been terminated." << endl;
    }
}

//Savitch_9thEd_Ch5_PracProg3

void prob3() {
    {
        float feet, inches, meters, centimeters;
        char check;
        do {
            get_input3(feet, inches, meters, centimeters);
            convert3(feet, inches, meters, centimeters);
            give_output3(feet, inches, meters, centimeters);
            cout << "Repeat calculation? (Y/N)" << endl;
            cin>>check;

        } while (check == 'Y' || check == 'y');
        cout << "Program has been terminated." << endl;
    }
}

//Savitch_9thEd_Ch5_PracProg5

void prob4() {
    {
        float lbs, oz, kg, g;
        char check;
        do {
            get_input4(lbs, oz, kg, g);
            convert4(lbs, oz, kg, g);
            give_output4(lbs, oz, kg, g);
            cout << "Repeat calculation? (Y/N)" << endl;
            cin >> check;
        } while (check == 'Y' || check == 'y');
        cout << "Program has been terminated." << endl;
    }
}

//Savitch_9thEd_Ch5_PracProg6

void prob5() {
    {
        float lbs, oz, kg, g;
        char check;
        do {
            get_input5(lbs, oz, kg, g);
            convert5(lbs, oz, kg, g);
            give_output5(lbs, oz, kg, g);
            cout << "Repeat calculation? (Y/N)" << endl;
            cin >> check;
        } while (check == 'Y' || check == 'y');
        cout << "Program has been terminated." << endl;
    }
}

//Savitch_9thEd_Ch5_PracProg7

void prob6() {
    {
        float side_a, side_b, side_c;
        char answer;

        do {
            description7();
            get_input6(side_a, side_b, side_c);
            check_triangle(side_a, side_b, side_c);
        } while (answer == 'y' || answer == 'Y');
    }
}

//Savitch_9thEd_Ch5_ProgProj1

void prob7() {
    {
        //Declare variables
        int hours, minutes;
        char ampm;
        char again;

        //Loop to re-run program as long as user wants
        do {
            input(hours, minutes, ampm);
            convert(hours, minutes, ampm);
            output(hours, minutes, ampm);

            cout << endl << "Enter Y to run again, any other key to exit: ";
            cin >> again;
        } while (again == 'y' || again == 'Y');
    }
}

//Savitch_9thEd_Ch5_ProgProj2

void prob8() {
    {
        int start_hour, start_min, wait_hour, wait_min;
        int final_start_time, final_wait_time, final_time;
        char start_time;

        do {
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
        } while (get_repeat());

        cout << endl;
    }
}

//Savitch_9thEd_Ch5_ProgProj4

void prob9() {
    {
        //Declare variables
        int coin_value;
        int quarters;
        int dimes;
        int nickles;
        int pennies;
        int total_amount;
        char yes = 'y';
        char Yes = 'Y';
        char again;

        cout << " Coin counting program.\n";
        cout << " \n";

        do {
            quarters = 0;
            dimes = 0;
            nickles = 0;
            pennies = 0;


            cout << " Enter the amount of change ";
            cin >> coin_value;
            cout << "\n";

            if (coin_value >= 25 && coin_value <= 100) {
                quarters = coin_value / 25;
                coin_value = coin_value % 25;
            }


            if (coin_value <= 24 && coin_value >= 10) {
                dimes = coin_value / 10;
                coin_value = coin_value % 10;
            }


            if (coin_value <= 9 && coin_value >= 5) {
                nickles = coin_value / 5;
                coin_value = coin_value % 5;
            }


            if (coin_value <= 4 && coin_value >= 1) {
                pennies = coin_value;
            }


            ////////
            total_amount = (quarters * 25)+ (dimes * 10)+ (nickles * 5) + pennies;
            cout << total_amount << " Cents Can be given as ";
            ////////


            if (quarters == 1) {
                cout << quarters << " quarter, ";
            }


            if (quarters == 2 || quarters == 3) {
                cout << quarters << " quarters, ";
            }


            if (dimes == 1) {
                cout << dimes << " dime, ";
            }


            if (dimes == 2) {
                cout << dimes << " dimes, ";
            }


            if (nickles == 1) {
                cout << nickles << " nickle, ";
            }


            if (pennies == 1) {
                cout << pennies << " penny. " << endl;
            }


            if (pennies < 4 && pennies > 2) {
                cout << pennies << " pennies. " << endl;
            }


            cout << "\n";
            cout << " Would you like to run the program agian (Y or N)? ";
            cin >> again;

        } while (again == yes || again == Yes);

        cout << "\n\nEnd Program.\n";
    }
}

//Savitch_9thEd_Ch5_ProgProj5

void prob10() {
    {
        //Declare Variables
        float W;
        float V;
        float T;
        char response;

        cout << "Enter the wind speed in meters per second :\n";
        cin >> V;


        cout << "Enter the temperature in Degree Celcius:\n";
        cin >> T;


        cout << "This is the wind chill in your area" << W << endl;


        cout << "do you want a go again ";
        cin >> response;

        if (response == 'Y') {
            cout << "type in the wind speed and temperature:\n";
        }

        if (response == 'N') {
            cout << "Good Bye:\n";
        }

    }
}

//Functions for Problems
//Functions for Practice Program 1

void description1() {
    cout << "This program calulates the standard deviation." << endl;
    cout << "It asks for 4 scores." << endl;
    cout << "Then, it finds the average using the scores you enter and then" << endl;
    cout << "the scores are subtraced by the average and squared to find the deviations." << endl;
    cout << "Then, the program adds the 4 deviations" << endl;
    cout << "and then divides them by the number of scores." << endl;
    cout << "The value that is found is called variance." << endl;
    cout << "Finally the program square roots the variance and outputs standard deviation." << endl;
}

void get_input1(float& num1, float& num2, float& num3, float& num4) {
    cout << "Enter first score:" << endl;
    cin >> num1;
    cout << "Enter second Score:" << endl;
    cin >> num2;
    cout << "Enter third score:" << endl;
    cin >> num3;
    cout << "Enter fourth score:" << endl;
    cin >> num4;
    return;
}

void get_average(float& num1, float& num2, float& num3, float& num4, float& avg) {
    avg = num1 + num2 + num3 + num4; // Formula to calculate average
    avg = avg / 4; // Final step to get average
    return;
}

void get_standard_deviation(float& num1, float& num2, float& num3, float& num4, float& avg, float& sd, float& vr) {
    num1 = num1 - avg;
    num1 = pow(num1, 2); // Deviation for score 1
    num2 = num2 - avg;
    num2 = pow(num2, 2); // Deviation for score 2
    num3 = num3 - avg;
    num3 = pow(num3, 2); // Deviation for score 3
    num4 = num4 - avg;
    num4 = pow(num4, 2); // Deviation for score 4
    sd = num1 + num2 + num3 + num4; // Calculation for variance part 1
    sd = sd / 4; // Step to get variance
    sd = sqrt(sd); // Calculation of standard deviation is square root of variance
    cout << endl;
    return;
}

void output_standard(float num1, float num2, float num3, float num4, float avg, float sd, float vr) {
    cout << "The Standard devation is: " << sd << endl; // Final out for standard deviation
    cout << "How:" << endl;
    cout << "Average is: " << avg << endl;
    cout << "Devations are: ";
    cout << "(" << num1 << " + " << num2 << " + " << num3 << " + " << num4 << ") / 4" << endl;
    cout << "Variance is: " << vr << endl;
    cout << "Finally square root the variance and you get: " << sd << endl;
}

//Functions for Practice Program 2

void get_input2(float& feet, float& inches, float& meters, float& centimeters) {
    cout << "Enter feet to convert it to meters: ";
    cin >> feet;
    cout << endl << "Enter inches to convert it to centimeters: ";
    cin >> inches;
}

float convert2(float& feet, float& inches, float& meters, float& centimeters) {
    meters = feet * 0.3048;
    return meters;
    centimeters = inches * 2.54;
    return centimeters;
}

void give_output2(float feet, float inches, float meters, float centimeters) {
    cout << feet << " feet " << inches << " inches is equivalent to " << meters << " meters " << centimeters << " centimeters" << endl;
}

//Functions for Practice Program 3

void get_input3(float& feet, float& inches, float& meters, float& centimeters) {
    cout << "Enter meters to convert it to feet: ";
    cin >> meters;
    cout << endl << "Enter centimeters to convert it to inches: ";
    cin >> centimeters;
}

float convert3(float& feet, float& inches, float& meters, float& centimeters) {
    feet = meters * 3.28084;
    return feet;
    inches = centimeters * 0.393701;
    return inches;
}

void give_output3(float feet, float inches, float meters, float centimeters) {
    cout << meters << " meters " << centimeters << " centimeters is equivalent to " << feet << " feet " << inches << " inches" << endl;
}

//Functions for Practice Program 5

void get_input4(float& lbs, float& oz, float& kg, float& g) {
    cout << "Enter pounds to convert it to kilograms: ";
    cin >> lbs;
    cout << endl << "Enter ounces to convert it to grams: ";
    cin >> oz;
}

float convert4(float& lbs, float& oz, float& kg, float& g) {
    kg = lbs * 2.2046;
    return kg;
    g = oz * 28.3495;
    return g;
}

void give_output4(float lbs, float oz, float kg, float g) {
    cout << lbs << " pounds and " << oz << " ounces is equivalent to " << kg << " kilograms and " << g << " grams." << endl;
}

//Functions for Practice Program 6

void get_input5(float& lbs, float& oz, float& kg, float& g) {
    cout << "Enter kilograms to convert it to pounds: ";
    cin >> lbs;
    cout << endl << "Enter grams to convert it to ounces: ";
    cin >> oz;
}

float convert5(float& lbs, float& oz, float& kg, float& g) {
    lbs = kg * 0.453592;
    return lbs;
    oz = g * 0.035274;
    return oz;
}

void give_output5(float lbs, float oz, float kg, float g) {
    cout << kg << " kilograms and " << g << " grams is equivalent to " << lbs << " pounds and " << oz << " ounces." << endl;
}

//Functions for Practice Program 7

void description7() {
    cout << "This program calculates the perimeter and area of a triangle" << endl;
    cout << "based on inputed values of three side lengths." << endl;
}

void get_input6(float side_a, float side_b, float side_c) {
    cout << "Input the lengths of three sides of a triangle: ";
    cin >> side_a;
    while (side_a <= 0) {
        cout << "Enter a positive nonzero number for the length of side a";
        cin >> side_a;
    }
    cout << ",";
    cin >> side_b;
    while (side_b <= 0) {
        cout << "Enter a positive nonzero number for the length of side b";
        cin >> side_b;
    }
    cout << ",";
    cin >> side_c;
    while (side_c <= 0) {
        cout << "Enter a positive nonzero number for the length of side c";
        cin >> side_c;
    }
    cout << endl;
}

bool check_triangle(float& side_a, float& side_b, float& side_c) {
    if (side_a + side_b >= side_c)
        return true;
    else
        return false;

    cout << "Those side lengths cannot produce a triangle.\n";
    float semiperimter(float side_a, float side_b, float side_c);
    {
        float s;

        s = (side_a + side_b + side_c) / 2.0;
        return s;
    }
}

void area_perimeter(float side_a, float side_b, float side_c, float perimeter, float area) {
    area_perimeter(side_a, side_b, side_c, perimeter, area);
}

//Functions for Programming Project 1

void input(int& hours, int& minutes, char& ampm) {
    //This loop makes sure value entered is legal for hours(i.e. 23 or below)
    do {
        cout << "Enter hours: ";
        cin >> hours;
        if (hours > 23) cout << "Please enter a value between 0 and 23" << endl;
    } while (hours > 23);

    //This loop makes sure value entered is legal for minutes (i.e. 59 or below)
    do {
        cout << "Enter minutes: ";
        cin >> minutes;
        if (minutes > 59) cout << "Please enter a value between 0 and 59" << endl;
    } while (minutes > 59);
}

void convert(int& hours, int& minutes, char& ampm) {
    //Set AM/PM flag to PM if hour is 13 onwards, and set hours to 12hr format
    if (hours > 12) {
        hours = hours - 12;
        ampm = 'p';
    } else if (hours == 12) ampm = 'p';
    else ampm = 'a';
}

void output(int& hours, int& minutes, char& ampm) {
    if (ampm == 'p') {
        if (minutes < 10) cout << hours << ":0" << minutes << " P.M.";
        else cout << hours << ":" << minutes << " P.M.";
    } else {
        if (minutes < 10) cout << hours << ":0" << minutes << " A.M.";
        else cout << hours << ":" << minutes << " A.M.";
    }
}

//Functions for Programming Project 2
// Ask the user for the hour. If limit is true only use 12 hours.

int get_hour(bool limit) {
    int hour;
    do {
        cout << "Hour: ";
        cin >> hour;
    } while (!(hour > 0 && hour <= 12 || !limit));
    return hour;
}
// Ask the user for the minute.

int get_min(bool limit) {
    int minute;
    do {
        cout << "Minute: ";
        cin >> minute;
    } while (!(minute >= 0 && minute < 60 || !limit));
    return minute;
}
// Ask the user for time of day ex AM/PM

char get_time() {
    char time, temp;
    do {
        cout << "AM/PM: ";
        cin >> time >> temp;
    } while (!(time == 'a' || time == 'A' || time == 'p' || time == 'P'));

    if (time == 'a' || time == 'A') {
        return 'A';
    } else if (time == 'p' || time == 'P') {
        return 'P';
    }
}
// Convert the time to 24 hour time.

int convert_time(int hour, int minute, char time) {
    // Convert time to 24 hour format.
    if (time == 'P') {
        return ((hour + 12) * 100) +minute;
    } else if (time == 'A' && hour == 12) {
        return minute;
    }
    // All else fais this is the answer.
    return (hour * 100) +minute;
}
// Ask the user to repeat the program.

bool get_repeat() {
    char a; // This is answer
    do {
        cout << "Repeat? Enter 'y/n': ";
        cin >> a;
        if (a == 'Y' || a == 'y') {
            return true;
        } else if (a == 'N' || a == 'n') {
            return false;
        }
    } while (!(a == 'Y' || a == 'y' || a == 'N' || a == 'n'));
}
// Output time

void output_time(int time) {
    int end_hour = time / 100;
    int end_minute = time - (end_hour * 100);
    string final_time;

    // Get the right hour.
    if (end_hour > 12) {
        end_hour = abs(12 - end_hour);
        final_time = " PM";
    } else {
        if (end_hour == 0) {
            end_hour = 12;
        }
        final_time = " AM";
    }

    // Display the right minute.
    if (end_minute < 10) {
        cout << end_hour << ":0" << end_minute << final_time << endl;
    } else {
        cout << end_hour << ":" << end_minute << final_time << endl;
    }
}
// Caculate the time after the wait.

int caculate_data(int start_time, int wait_time) {
    int start_hour = start_time / 100;
    int start_min = start_time - (start_hour * 100);

    int wait_hour = wait_time / 100;
    int wait_min = wait_time - (wait_hour * 100);

    int final_hour = start_hour, final_min = start_min;

    // Get the right math for mins.
    for (int i = 0; i < wait_min; i++) {
        if (final_min < 60) {
            final_min++;
        } else {
            final_min = 0;
            final_hour++;
        }
    }

    // Get the right math for hour
    for (int i = 0; i < wait_hour; i++) {
        if (final_hour < 24) {
            final_hour++;
        } else {
            final_hour = 0;
        }
    }

    return (final_hour * 100) +final_min;
}

//Functions for Programming Project 4
//None

//Functions for Programming Project 5

void wind(float& W, float& spd, float& T) {
    W = (13.12 + 0.6215 * T - 11.37 * pow(spd, (0.16)) + 0.3965 * T * pow(spd, (0.16)));
}
