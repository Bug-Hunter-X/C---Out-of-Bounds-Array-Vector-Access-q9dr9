std::vector<int> vec = {1, 2, 3, 4, 5};
for (int i = 0; i <= vec.size(); ++i) { // Error: Accessing vec[vec.size()] is out of bounds
    std::cout << vec[i] << " ";
}

int arr[5] = {1,2,3,4,5};
int *ptr = arr; 
for (int i=0; i<=5; i++) { //Error: Accessing memory out of bounds
    *ptr++;
}
