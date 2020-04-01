#include <iostream>
#include <vector>

   int main(){ 
    int num, i;
    std::cin >> num;
    int * arr = new int[num];
    for (i = 0; i < num; ++i)
        std::cin >> arr[i];
    for(i=0;i<num;i++){
        if(arr[2]<arr[2+1]){
        int temp;
        temp = arr[2+1];
        arr[2+1] = arr[2];
        arr[2]=temp;
        }
        std::cout << arr[i]<<" ";
    }
       
    return 0;
}
