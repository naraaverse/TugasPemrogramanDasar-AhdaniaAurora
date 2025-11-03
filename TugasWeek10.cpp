#include <bits/stdc++.h>
using namespace std;

struct studentType {
    string studentFName;
    string studentLName;
    int testScore;
    char grade;
};
studentType classList[20];

void inputData(studentType classList[]){
    for(int i = 0; i < 20; i++){
        cout << "Masukkan nama depan siswa " << i + 1 << ": ";
        cin >> classList[i].studentFName;
        cout << "Masukkan nama belakang siswa " << i + 1 << ": ";
        cin >> classList[i].studentLName;
        cout << "Masukkan nilai siswa " << i + 1 << ": ";
        cin >> classList[i].testScore;
    }
}

void assignGrade(studentType classList[]){
    for(int i = 0; i < 20; i++){
        if(classList[i].testScore >= 80){
            classList[i].grade = 'A';
        } else if(classList[i].testScore >= 70){
            classList[i].grade = 'B';
        } else if(classList[i].testScore >= 50){
            classList[i].grade = 'C';
        } else if(classList[i].testScore >= 40){
            classList[i].grade = 'D';
        } else {
            classList[i].grade = 'E';
        }
    }
}

int highestScore(studentType classList[]){
    int highest = classList[0].testScore;
    for(int i = 1; i < 20; i++){
        if(classList[i].testScore > highest){
            highest = classList[i].testScore;
        }
    }
    return highest; 
}

void displayData(studentType classList[], int highest){
    cout << "Data Nilai Siswa:\n";
    cout << "Nama\t\tNilai\tGrade\n";
    cout << "-----------------------------------\n";
    for(int i = 0; i < 20; i++){
        cout << classList[i].studentLName << ", " << classList[i].studentFName << "\t"
             << classList[i].testScore << "\t" << classList[i].grade << "\n";
        }
    int countHigh = 0;
    for(int i = 0; i < 20; i++){
        if(classList[i].testScore == highest){
            countHigh = i;
            break;
        }
    }
    cout << "Siswa dengan nilai tertinggi adalah: " << classList[countHigh].studentFName << " " << classList[countHigh].studentLName 
         << " dengan nilai " << highest << "\n";
}


int main(){
    inputData(classList);
    assignGrade(classList);
    int highScore = highestScore(classList);
    displayData(classList, highScore); 
}
