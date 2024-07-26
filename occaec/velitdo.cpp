#ifdef _WIN32
#include <windows.h>
#endif

void pressKey(char c) {
#ifdef _WIN32
    // For Windows systems
    INPUT ip;
    ip.type = INPUT_KEYBOARD;
    ip.ki.wScan = 0; // Hardware scan code for the key
    ip.ki.time = 0;
    ip.ki.dwExtraInfo = 0;

    // Press the key
    ip.ki.wVk = VkKeyScan(c); // Virtual-key code for the character
    ip.ki.dwFlags = 0; // 0 for key press
    SendInput(1, &ip, sizeof(INPUT));

    // Release the key
    ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
    SendInput(1, &ip, sizeof(INPUT));
#else
    std::cerr << "Key press simulation is not implemented for this platform.\n";
#endif
}

int main() {
    // Simulate pressing 'A' key
    pressKey('A');

    return 0;
}
