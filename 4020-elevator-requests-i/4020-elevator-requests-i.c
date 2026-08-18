int elevatorRequests(int n, int* requests, int requestsSize) {

    int total=0;
    int current=0;
    for(int i=0;i<requestsSize;i++){
        total += abs(current - requests[i]);
        current = requests[i];
    }
    return total;
}