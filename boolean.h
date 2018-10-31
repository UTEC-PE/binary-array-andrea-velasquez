#ifndef BOOLEAN_H
#define BOOLEAN_H

#include <iostream>
using namespace std;

class boolean {
    private:
        char* array;
        int size;
    
    public:
        boolean(int s) : size(s){
            array = new char[s] {};
        }
        
        void bitOn(int position) {
            int char_index = position/8;
            int index = position%8;
			array[char_index] |= 1 << index;
        }
             
        void bitOff(int position) {
            int char_index = position/8;
            int index = position%8;
			array[char_index] &= ~(1 << index);
        }
             
        bool operator[](int position) {
            int char_index = position/8;
            int index = position%8;
			return (array[char_index] >> index) & 1;
        }
    
        void clear() {
            for (int i=0; i<sizeof(array)/sizeof(array[0]);++i){
                array[i] = array[i] << 8;
            }
        }

        int get_size() {return size;}
             
        ~boolean() {
            delete array;
			array = nullptr;
        }
};

#endif
