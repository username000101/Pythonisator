#include "IO.hpp"
template<>
void print<const char*>(const char* text) {
    cout << text;
}
template<>
void println<const char*>(const char* text) {
    cout << text << endl;
}
template<>
void print<int>(int num) {
    cout << num;
}
template<>
void println<int>(int num) {
    cout << num << endl;
}
template<>
void print<string>(string text) {
    cout << text;
}
template<>
void println<string>(string text) {
    cout << text << endl;
}
template<>
void print<bool>(bool value) {
    cout << boolalpha << value << noboolalpha;
}
template<>
void println<bool>(bool value) {
    cout << boolalpha << value << noboolalpha << endl;
}
template<>
void print<long>(long num) {
    cout << num;
}
template<>
void print<long long>(long long num) {
    cout << num;
}
template<>
void println<long>(long num) {
    cout << num << endl;
}
template<>
void println<long long>(long long num) {
    cout << num << endl;
}
template<>
void print<double>(double value) {
    cout << value;
}
template<>
void println<double>(double value) {
    cout << value << endl;
}
template<>
void print<float>(float value) {
    cout << value;
}
template<>
void println<float>(float value) {
    cout << value << endl;
}

string open(string filename, string mode, string text) {
    if (strcasecmp(mode.c_str(),"r") == 0) {
        ifstream readFile(filename);
        if (!readFile.is_open()) {
            return"";
        }
        string temBuf;
        string Final;
        while(getline(readFile,temBuf)) {
            Final+=temBuf+"\n";
        }
        readFile.close();
        return Final;
    } else if (strcasecmp(mode.c_str(),"w")==0) {
        ofstream writeFile(filename);
        if (!writeFile.is_open()) {
            return "";
        }
        writeFile << text << endl;
        writeFile.close();
        return "";
    }
    return "";
}
