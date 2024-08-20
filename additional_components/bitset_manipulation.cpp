#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    bitset<8> bits; // Create a bitset with 8 bits

    // Set individual bits
    bits.set(0);       // Set the first bit to 1
    bits.set(3, true); // Set the fourth bit to 1

    // Reset individual bits
    bits.reset(1); // Set the second bit to 0
    bits.reset(4); // Set the fifth bit to 0

    // Flip individual bits
    bits.flip(2); // Flip the third bit
    bits.flip(5); // Flip the sixth bit

    // Check if a bit is set
    if (bits.test(0))
    {
        cout << "First bit is set." << endl;
    }

    // Count the number of set bits
    cout << "Number of set bits: " << bits.count() << endl;

    // Convert bitset to string
    string bitString = bits.to_string();
    cout << "Bitset as string: " << bitString << endl;

    // Convert bitset to unsigned long long
    unsigned long long bitValue = bits.to_ullong();
    cout << "Bitset as unsigned long long: " << bitValue << endl;

    int num = 10;            
    // Example integer value
    bitset<32> numBits(num); 
    // Convert integer to bitset with 32 bits

    cout << "Integer as bitset: " << numBits << endl;

    long longValue = 123456789;     
    // Example long value
    bitset<64> longBits(longValue); 
    // Convert long to bitset with 64 bits

    cout << "Long as bitset: " << longBits << endl;
    return 0;
}