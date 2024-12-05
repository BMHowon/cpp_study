#include <iostream>
#include <ctime>

int main() {
    // 현재 시간 가져오기
    std::time_t now = std::time(nullptr);
    std::tm* local_time = std::localtime(&now);

    // 날짜 출력
    std::cout << local_time->tm_year + 1900 << "-"
              << (local_time->tm_mon + 1 < 10 ? "0" : "") << local_time->tm_mon + 1 << "-"
              << (local_time->tm_mday < 10 ? "0" : "") << local_time->tm_mday << std::endl;

    return 0;
}
