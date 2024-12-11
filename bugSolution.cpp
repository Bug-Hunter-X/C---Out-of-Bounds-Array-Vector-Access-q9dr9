std::vector<int> vec = {1, 2, 3, 4, 5};
for (int i = 0; i < vec.size(); ++i) { // Corrected: Loop condition is i < vec.size()
    std::cout << vec[i] << " ";
}
std::cout << std::endl;

int arr[5] = {1,2,3,4,5};
int *ptr = arr; 
for (int i=0; i<5; i++) { //Corrected: Loop condition is i < 5
    std::cout << *ptr++ << " ";
}
std::cout << std::endl;