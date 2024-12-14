#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{

    /*
    // Get the timestamp for the current date and time
    // time_t timestamp;
    // time(&timestamp);
    time_t timestamp = time(NULL); // This is the same as the two lines above

    // Display the date and time represented by the timestamp
    cout << ctime(&timestamp);
    */

    /*
    struct tm datetime;
    time_t timestamp;

    // Make your own time stamp
    datetime.tm_year = 2024 - 1900; // Number of years since 1900
    datetime.tm_mon = 12 - 1; // Number of months since January
    datetime.tm_mday = 14;
    datetime.tm_hour = 21;
    datetime.tm_min = 40;
    datetime.tm_sec = 51;
    // Daylight Savings must be specified
    // -1 uses the computer's timezone setting
    datetime.tm_isdst = -1;

    timestamp = mktime(&datetime);

    cout << ctime(&timestamp);
    string weekdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    cout << "The date is on a " << weekdays[datetime.tm_wday]; // It automatically gets the day of the week among other information
    */

    /*
    time_t timestamp = time(&timestamp);
    struct tm datetime = *localtime(&timestamp);  // Get time in datetime struct

    // cout << datetime.tm_hour << endl;

    cout << asctime(&datetime); // Print the time in a readable format 
    */

    /*
    // Create the datetime structure with mistakes and let mktime() fix it
    struct tm datetime;
    datetime.tm_year = 2022 - 1900; // Number of years since 1900
    datetime.tm_mon = 0; // 0 is January
    datetime.tm_mday = 35;
    datetime.tm_hour = 25; datetime.tm_min = 40; datetime.tm_sec = 70;
    datetime.tm_isdst = -1;
    mktime(&datetime);

    cout << asctime(&datetime);
    */

    /*
    // Get date in a specific format
    time_t timestamp = time(NULL);
    struct tm datetime = *localtime(&timestamp);

    char output[50];

    strftime(output, 50, "%B %e, %Y", &datetime); // December 14, 2024
    cout << output << "\n";

    strftime(output, 50, "%I:%M:%S %p", &datetime); // 10:01:07 PM
    cout << output << "\n";

    strftime(output, 50, "%d/%m/%y", &datetime); // 14/12/24
    cout << output << "\n";

    strftime(output, 50, "%a %b %e %H:%M:%S %Y", &datetime); // Sat Dec 14 22:01:07 2024
    cout << output << "\n";
    */

    /*
    // Measure time
    
    // Example 1
    clock_t start, end;
    start = clock();   // clock() is used to measure the time in milliseconds (short durations)

    for (int i = 0; i < 100000; i++)
    {
        cout << i << endl;
    }

    end = clock();
    cout << "Time: " << (double)(end - start) / CLOCKS_PER_SEC << " seconds" << endl;
    */
    // Example 2
    time_t now;
    time_t next_bday;
    struct tm datetime;

    now = time(NULL);
    datetime = *localtime(&now);
    datetime.tm_year = datetime.tm_year + 1;
    datetime.tm_mon = 0;
    datetime.tm_mday = 28;
    datetime.tm_hour = 7; datetime.tm_min = 0; datetime.tm_sec = 0;
    datetime.tm_isdst = -1;
    next_bday = mktime(&datetime);

    int diff = difftime(next_bday, now);   // Get the difference between the two timestamps with difftime(t2, t1) (Large duration)

    cout << asctime(&datetime);
    cout << diff << " seconds until next birthday." << endl;
    
    return 0;
}

// I think I understand whatever I've written over here, yet I can say with almost a 100% certainty that if I ever need to use this, I'll have to look it up again. sed lyf