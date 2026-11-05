
#ifndef supplementary_h
#define supplementary_h

template <typename T>
void bubbleSort(T arr[], int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        for (int j = i+1; j < arrSize; j++) {
            if (arr[i] > arr[j]) {
                std::swap(arr[i], arr[j]);
            }
        }
    }
}

template <typename T>
void voteCount(T arr[], int arrSize) {
    int count = 0;
    int cand1 = 0;
    int cand2 = 0;
    int cand3 = 0;
    int cand4 = 0;
    int cand5 = 0;

    for (int i = 0; i < arrSize; i++) {
        if (arr[i] == 1) {
            cand1++;
        } else if (arr[i] == 2) {
            cand2++;
        } else if (arr[i] == 3) {
            cand3++;
        }else if (arr[i] == 4) {
            cand4++;
        }else{
            cand5++;
        }
    }
    std::cout << "Number of votes for Candidate 1: " << cand1 << std::endl;
    std::cout << "Number of votes for Candidate 2: " << cand2 << std::endl;
    std::cout << "Number of votes for Candidate 3: " << cand3 << std::endl;
    std::cout << "Number of votes for Candidate 4: " << cand4 << std::endl;
    std::cout << "Number of votes for Candidate 5: " << cand5 << std::endl;
}
    


#endif //SORTING_SUPPLEMENTARY_SUPPLEMENTARY_H
