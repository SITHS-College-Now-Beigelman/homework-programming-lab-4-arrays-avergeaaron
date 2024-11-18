// Aaron Lin
// 11/12/2024
// Homework 4

//Libraries
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

//Function Prototypes
void filterEvens(int arr[], int size);
void totalCarsSold(int cars[], int size);
void bestSalesperson(int cars[], int size);
void dna_to_rna(string dna);

//Beginning of code
int main()
{
    //Part 1
    const int SIZE = 8; //sets the size of the array to a constant of 8
    int myArray[SIZE]; //array is a integer type
    cout << "Enter 8 integers: "; //ask user to enter 8 integers
    for (int i = 0; i < SIZE; ++i) //loop to read integers into array
    {
        cin >> myArray[i]; //read integer into array
    }
    filterEvens(myArray, SIZE); //call filterEvens function

    //Part 2
    int cars[10] = {7, 3, 6, 0, 14, 8, 1, 2, 9, 8}; //array of cars sold
    totalCarsSold(cars, 10); //all totalCarsSold function
    bestSalesperson(cars, 10); //call bestSalesperson function

    //Part 3
    string dna; //string to store DNA sequence
    cout << "Enter a DNA sequence: "; //prompt user to enter DNA sequence
    cin >> dna; //read DNA sequence into string
    dna_to_rna(dna); //call dna_to_rna function

    return 0; //end of code
}

//Functions
void filterEvens(int arr[], int size) //function to filter out the even numbers
{
    cout << "Even numbers in the array are: "; //print message
    for (int i = 0; i < size; ++i) //loop to read through the array
    {
        if (arr[i] % 2 == 0) //check if element is even
        {
            cout << arr[i] << " "; //prints the even element
        }
    }
    cout << endl;
}

void totalCarsSold(int cars[], int size) //function to calculate total cars sold
{
    int total = 0; //sets total to 0
    for (int i = 0; i < size; ++i) //loop to read through array
    {
        total += cars[i]; //add current cars to total
    }
    cout << "Total number of cars sold: " << total << endl; //print the total amount of cars sold
}

void bestSalesperson(int cars[], int size) //function to find the best salesperson
{
    int maxCars = cars[0]; //read maxCars to first element of the array
    int bestSalesperson = 1; //set bestSalesperson to 1
    for (int i = 1; i < size; ++i) //loop to read through array
    {
        if (cars[i] > maxCars) //if the next salesperson's sale is greater than the current one
        {
            maxCars = cars[i]; //sets the car[i] to the maxCar
            bestSalesperson = i + 1; //updates bestSalesperson
        }
    }
    cout << "The best salesperson is Salesperson #" << bestSalesperson << endl; //print best salesperson
    cout << "The total amount of cars sold by the best salesperson is " << maxCars << endl; //print number of cars sold by best salesperson
}

void dna_to_rna(string dna) //function to change dna to rna
{
    string rna = "";
    for (int i = 0; i < dna.length(); i++) //loop to read through DNA sequence
    {
        switch (dna[i])
        {
            case 'A':
                rna += 'U'; // replace A with U
                break;
            case 'C':
                rna += 'G'; // replace C with G
                break;
            case 'G':
                rna += 'C'; // replace G with C
                break;
            case 'T':
                rna += 'A'; // replace T with A
                break;
            default:
                break;
        }
    }
    cout << "The corresponding RNA sequence for " << dna << " is: " << rna << endl;
}

/*
Enter 8 integers: 1 2 3 4 5 6 7 8   
Even numbers in the array are: 2 4 6 8 
Total number of cars sold: 58
The best salesperson is Salesperson #5
The total amount of cars sold by the best salesperson is 14
Enter a DNA sequence: JGUHGADGUAJB%6378GHUACT
The corresponding RNA sequence for JGUHGADGUAJB%6378GHUACT is: CCUCUCUGA
*/