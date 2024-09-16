#include <iostream>
#include <chrono>
#include <time.h>
#include <string>
#include <vector>
#include <random>
#include <algorithm>
#include <ostream>

class Nature {
private:

int Plantscount;
int gardenCount;
std::vector<std::string> plants;
std::string input;

public:
void CellsOnGarden();
void HowMany();
void WhatGrowing();
void checkWhatGrowing();
void checkCells();
void substract();
void randomPlant();

};

int main(int argc, char** argv) {
Nature nature;
int ch;

while(1) {
std::cout << "\n1. Enter cells garden" << std::endl;
std::cout << "2. Enter how many garden u want to grow" << std::endl;
std::cout << "3. Enter plant that u want grow: " << std::endl;
std::cout << "4. Check how many cells avalaible" << std::endl;
std::cout << "5. Random plant grow" << std::endl;
std::cin >> ch;
   
switch (ch)
{
case 1:
nature.CellsOnGarden();
break;

case 2:
nature.HowMany();
nature.substract();
break;

case 3:
nature.WhatGrowing();
//nature.checkWhatGrowing();
break;

case 4:
nature.checkCells();
break;

case 5:
nature.randomPlant();

case 0:
exit(0);

default:
std::cout << "Invalid number!" << std::endl;

}

}
    return 0;
}

void Nature::CellsOnGarden() {
    std::cout << "Enter cells on Garden: " << std::endl;
    std::cin >> gardenCount;
   
}

void Nature::HowMany() {
    std::cout << "How many plants you want to grow: " << std::endl;
    std::cin >> Plantscount;
    std::cout << "plants what u want to grow: " << Plantscount << std::endl;
 gardenCount - Plantscount;

    if(Plantscount > gardenCount) {
        std::cout << "No free cells for plants" << std::endl;
        std::cout << "No more, pls!" << std::endl;
    }

}

void Nature::WhatGrowing() {
    std::string back;
    std::cout << "What plant u want: ";
    std::cin >> back;
    plants.push_back(back); 
    std::cout << back;
}

// void Nature::checkWhatGrowing() {

// std::cout << "Plants: " << ", " << back;

// }


void Nature::checkCells() {
    std::cout << "Cells on garden: " << gardenCount << std::endl;
}

void Nature::substract() {
gardenCount = gardenCount - Plantscount;
}

void Nature::randomPlant() {


std::default_random_engine generator;
std::uniform_int_distribution<int> distribution(1, 5);
int ran = distribution(generator);

if(1) 
{
plants.push_back("White cabbage");
 std::string *back = &plants.back();
std::cout << *back << std::endl;
}

if(2) 
{
plants.push_back("Red cabbage");
 std::string *back = &plants.back();
std::cout << *back << std::endl;
}

if(ran == 3) 
{
plants.push_back("Color cabbage");
 std::string *back = &plants.back();
std::cout << *back << std::endl;
}

if(ran == 4) 
{
plants.push_back("Pekin cabbage");
 std::string *back = &plants.back();
std::cout << *back << std::endl;
}

if(ran == 5) 
{
plants.push_back("Brussels sprouts");
 std::string *back = &plants.back();
std::cout << *back << std::endl;
}



}