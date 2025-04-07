#include <iostream>
#include <string>

using namespace std;

int main() {
    // تعریف یک رشته
    string str = "سلام دنیا!";
    cout << "طول رشته: " << str.length() << endl;

    // بررسی وجود کلمه با str.find()
    size_t pos = str.find("دنیا");
    if (pos != string::npos) {
        cout << "کلمه 'دنیا' در موقعیت " << pos << " پیدا شد." << endl;
    }

    // بررسی خالی بودن رشته با متغیر
    string emptyStr;
    bool isEmpty = emptyStr.empty(); // متغیر برای ذخیره نتیجه بررسی خالی بودن
    if (isEmpty) {
        cout << "رشته خالی است!" << endl;
    } else {
        cout << "رشته خالی نیست!" << endl;
    }

    // مقایسه رشته‌ها
    string str1 = "apple";
    string str2 = "orange";
    if (str1.compare(str2) < 0) {
        cout << str1 << " قبل از " << str2 << " در ترتیب لغت‌نامه‌ای می‌آید." << endl;
    }

    // تبدیل عدد به رشته
    int number = 123;
    string numberStr = to_string(number);
    cout << "عدد به رشته تبدیل شد: " << numberStr << endl;

    // تبدیل رشته به عدد صحیح
    string numericStr = "456";
    int convertedNumber = stoi(numericStr);
    cout << "رشته به عدد تبدیل شد: " << convertedNumber << endl;

    // تبدیل رشته اعشاری به عدد اعشاری
    string floatStr = "123.45";
    float convertedFloat = stof(floatStr);
    cout << "رشته اعشاری به عدد اعشاری تبدیل شد: " << convertedFloat << endl;

    return 0;
}

