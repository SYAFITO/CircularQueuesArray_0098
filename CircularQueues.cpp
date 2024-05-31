#include <iostream>
using namespace std;

class Queues {
    int FRONT, REAR, max = 5;
    int queues_array[5];

public:
    Queues() {
		FRONT = -1;
		REAR = -1;
	}

    void insert() {
        int num;
        cout << "Enter a number :";
        cin >> num;
        cout << endl;

        if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1)) {
           cout << "\nQueue overFlow\n";
           return; 
        }
        if (FRONT == -1) {
            FRONT = 0;
			REAR = 0;
        }
        queue_array[REAR] = num;              
    }

    void remove() {
        //cek apakah antrian kosong
        if (FRONT == -1) {
            cout << "Queue underflow\n";

            //cek jika antrian hanya memiliki satu elemen
            if (FRONT == REAR) {
                FRONT = -1;
                REAR = -1;
            }
            else {
                //jika elemen yang di hapus berada di posos terakhir array, kembali ke awal array
                if (FRONT == max -1)
                FRONT == 0;
                else
                FRONT = FRONT +1;
            }
        }
        void display() {
        int FRONT_postition = FRONT;
		int REAR_postition = FRONT;
        
        //cek apakah antrian kosong        
        if (FRONT == -1) {
            cout << "Queue is empty\n";

           }
           // jika FRONT_poostition <= REAR_postition, iterai dari FRONT hingga REAR
           if (FRONT_postition <= REAR_postition) {
            while (FRONT_postition <= REAR_postition) {
                cout << queue_array[FRONT_postition] << " ";
				FRONT_postition++;
               }
               cout << endl;
           }
           else {
            //jika FRONT_postition >REAR_postition, iterasi dari FRONT hingga akhri array
            while (FRONT_postition <= max - 1) {
                cout << queue_array[FRONT_postition] << " ";
				FRONT_postition++;
               }
               FRONT_postition = 0;

               //literasi dari awal array hingga REAR
               while (FRONT_postition <= REAR_postition){
                cout << queue_array[FRONT_postition] << " ";
				FRONT_postition++;
               }
               cout << endl;
           }
        }
    }
};
int main () {
    
}
