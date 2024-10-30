#include <cmath>
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
   
    int kilometer, time;
   
    cout << "Привет, Сэм! Сколько километров ты сегодня пробежал? ";
    cin >> kilometer;
    
    int totalTime = 0;
    int i = 0;
    int circle = 1;
   

    while (i < kilometer) {
        int time;
        cout << "Какой у тебя был темп на километре " << circle << "? ";
        cin >> time;
        totalTime += time;
        i++;
        circle++;
        
    }
    
    int resultTime = round(totalTime / kilometer);

    int minutes = resultTime / 60;
    int seconds = resultTime % 60;

    cout << "Твой средний темп за тренировку: " << minutes << " минуты " << seconds << " секунд.";
}

