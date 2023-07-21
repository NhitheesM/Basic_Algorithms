
// Moore's Voting Algorithm 
int findMajorityElement(int* arr, int n) {
    // Step 1: Find a candidate for the majority element
    int candidate = arr[0];
    int count = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }

        if (count == 0) {
            candidate = arr[i];
            count = 1;
        }
    }

    // Step 2: Verify if the candidate is the majority element
    int majorityCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            majorityCount++;
        }
    }

    if (majorityCount > n / 2) {
        return candidate;
    } else {
        return -1; // No majority element found
    }
}


// Unordered map for finding majority element
int findMajorityElement(int* arr, int n) {
    std::unordered_map<int, int> countMap;

    // Step 1: Count the occurrences of each element
    for (int i = 0; i < n; i++) {
        countMap[arr[i]]++;
    }

    // Step 2: Find the element with maximum count
    int majorityElement = -1;
    int maxCount = 0;

    for (const auto& it : countMap) {
        if (it.second > maxCount) {
            majorityElement = it.first;
            maxCount = it.second;
        }
    }

    // Step 3: Verify if the majority element appears more than n/2 times
    if (maxCount > n / 2) {
        return majorityElement;
    } else {
        return -1; // No majority element found
    }
}