#include<iostream>
#include<chrono>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    chrono::seconds sec(5);
    chrono::minutes min(5);
    chrono::hours hr(1);

    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    std::cout << "Current time: " << std::ctime(&now_c) << std::endl;
    return 0;
}