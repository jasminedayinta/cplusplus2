//
//  main.cpp
//  a1p2
//
//  Created by Jasmine Juwono on 26.03.18.
//  Copyright © 2018 Jasmine Juwono. All rights reserved.
//

/*
 CH08-320143
 a1_p2.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de
 */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main() {
   
    int i, num, size;
    
    cout << "Enter number of files: " << endl;
    cin >> num;
    
    ifstream fin;
    string file_names[num];
    
    ofstream fout("concatn.txt", ios::out|ios::binary);
    if(!fout.good()){
        cout << "Error!" << endl;
        exit(1);
    }
    
    for( i = 0; i < num; i++){
        cout << "Enter file name: " << endl;
        cin >> file_names[i];
    }
    
    for(i = 0; i < num; i++){
        if(!(fin.is_open())){
            const char *ch = file_names[i].c_str();
            fin.open(ch, ios::in | ios::binary);
        
            if(!fin.good()){
                cout << "Error!" << endl;
                exit(1);
            }
        }
    }
    
    fin.seekg(0, ios::end);
    size = fin.tellg();
    fin.seekg(0, ios::beg);
    
    while(1){
        char buff[size + 1];
        fin.read(buff, size);
        fout.write(buff, size);
        fout.write("\n", 1);
        
        if(fin.eof()){
            break;
        }
    }
    
    fout.close();
    return 0;
}
