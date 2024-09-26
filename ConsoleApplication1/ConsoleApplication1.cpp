#include <iostream>

int main() {
    double distanceAB, distanceBC;
    double totalWeight;
    const double tankCapacity = 500;
    double fuelConsumption;
    double fuelNeededAB, fuelNeededBC;
    double totalFuelNeeded;


    std::cout << "Введите расстояние от пункта А до пункта В (в км): ";
    std::cin >> distanceAB;
    std::cout << "Введите расстояние от пункта В до пункта С (в км): ";
    std::cin >> distanceBC;
    std::cout << "Введите итоговый вес видеокарт (в кг): ";
    std::cin >> totalWeight;

    // расход топлива в зависимости от веса
    if (totalWeight > 1900) {
        std::cout << "перевес" << std::endl;
        return 0;
    }
    else if (totalWeight > 1400) {
        fuelConsumption = 10;
    }
    else if (totalWeight > 900) {
        fuelConsumption = 8;
    }
    else if (totalWeight > 400) {
        fuelConsumption = 5;
    }
    else {
        fuelConsumption = 2;
    }

    fuelNeededAB = distanceAB * fuelConsumption;
    fuelNeededBC = distanceBC * fuelConsumption;
    totalFuelNeeded = fuelNeededAB + fuelNeededBC;

    if (fuelNeededAB > tankCapacity) {
        std::cout << "Недостаточно топлива в баке для достижения пункта В." << std::endl;
        return 0;
    }

    double fuelInTankAfterAB = tankCapacity - fuelNeededAB;

    if (fuelNeededBC > fuelInTankAfterAB) {
        std::cout << "Необходимо заправить " << (fuelNeededBC - fuelInTankAfterAB) << " литров соляры в пункте В." << std::endl;
    }
    else {
        std::cout << "Достаточно топлива для поездки без заправки в пункте В." << std::endl;
    }

    return 0;
}