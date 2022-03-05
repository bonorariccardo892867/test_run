#include <iostream>

struct vector{

		int size;
        int *a;
	
		vector(){
            size = 10;
            a = new int [size];
        }
        ~vector(){ //distruttore
		delete[] a;
        }

        void stampa(){
		for (int i=0; i<size;i++){
			std::cout<<a[i]<<std::endl;
		}
	}
	

};

int main(){
    vector v;
    v.size = 10;
    for (int i=0; i<v.size; i++){
        v.a[i] = i+2;
    }

    v.stampa();
}