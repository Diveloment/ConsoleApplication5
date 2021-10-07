#include <iostream>

using namespace std;

class Time
{
    int m_Hours;
    int m_Minutes;
    int m_Seconds;

public:
    Time()
    {
        m_Hours = 0;
        m_Minutes = 0;
        m_Seconds = 0;

    }
    Time(int hours, int minutes, int seconds)
    {
        m_Hours = hours;
        m_Minutes = minutes;
        m_Seconds = seconds;

    }

    void ShowTime()
    {
        cout << m_Hours << " : " << m_Minutes << " : " << m_Seconds << endl;
    }
};

using namespace std;

int main(void)
{
    setlocale(LC_CTYPE, "Russian");
    cout << endl;
    system("pause");
    return 0;
}
