void Words::append(string word) {
    if (used == capacity) {
        string *new_data = new string[used*2]; 
        for (int i = 0; i < used; i++) {
            new_data[i] = data[i];
        }
        delete[] data;
        data = new_data;
        capacity = used*2; 
        ++used;   
    } else {
        data[used] = word;
        ++used;
    }
}
