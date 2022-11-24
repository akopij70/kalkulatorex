#include <iostream>

int main()
{
    char answer;
    bool get_mark = true;
    double mark, weight, weight_counter, mark_counter, mark_strength, strength_counter, average;
    mark = weight = weight_counter = mark_counter = mark_strength = strength_counter, average = 0.0;
    std::cout << "Witam w super kalkulatorze sredniej\n";
    std::cout << "Wpisuj oceny tak dlugo jak sobie zyczysz, zakoncz podajac ocene spoza zakresu 2 - 5.5\n";
    while (get_mark)
    {
        std::cout << "Podaj ocene:\n";
        std::cin >> mark;
        if (mark < 2 || mark > 5.5)
            get_mark = false;
        std::cout << "Podaj wage:\n";
        std::cin >> weight;
        
        mark_counter++;

        if (get_mark == false)
        {
            mark = weight = 0.0;
            mark_counter--;
        }
        mark_strength = mark * weight;
        strength_counter += mark_strength;
        weight_counter += weight;
    }
    average = double(strength_counter)/double(weight_counter);
    std::cout << "Podano " << mark_counter << " ocen\n";
    std::cout << "Srednia: " << average << std::endl;
    return 0;
}