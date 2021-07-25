#include <iostream>
#include <vector>

using namespace std;

//c++, асимптотическая оценка времени работы - O(n), доп. памяти - О(n)
void merge(vector <int> &arr, size_t left, size_t mid, size_t right) {
    size_t res_sz = right - left + 2; //на 1 элемент больше чем размер сортируемого отрезка,
                                      //потому что в условии индексация в массиве с единицы
    vector <int> res(res_sz);
    size_t ind_left  = 0,
           ind_right = 1;
           
    while (left + ind_left <= mid && mid + ind_right <= right) { 
    // пока одна из половинок не закончится пишем в ответ минимум из соотв. элементов в половинках
        size_t ind_res = ind_left + ind_right;
        
        if (arr[left + ind_left] < arr[mid + ind_right]) {
            res[ind_res] = arr[left + ind_left];
            ++ind_left;
        } else {
            res[ind_res] = arr[mid + ind_right];
            ++ind_right;
        }
    }
    
    
    //дописываем хвост
    while (left + ind_left <= mid) { 
        res[ind_left + ind_right] = arr[left + ind_left];
        ++ind_left;
    }
    while (mid + ind_right <= right) { 
        res[ind_left + ind_right] = arr[mid + ind_right];
        ++ind_right;
    }
    
    //переприсваиваем массив (в текущию фунцию arr передается по ссылке)
    for (size_t i = 0; i + 1 < res_sz; ++i) {
        arr[left + i] = res[i + 1];
    }
}

void sort(vector <int> & arr, size_t L, size_t R) {
    if (L < R) {
        size_t m = (L + R) / 2;
        sort(arr, L, m);
        sort(arr, m + 1, R);
        merge(arr, L, m, R);
    }
}

int main() {
    size_t n;
    cin >> n;
    vector <int> arr(n + 1);
    for (size_t i = 1; i <= n; ++i) {
        cin >> arr[i];    
    }
    sort(arr, 1, n);
    for (size_t i = 1; i <= n; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}
