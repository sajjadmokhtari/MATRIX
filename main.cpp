#include <iostream>

using namespace std;

// دریافت ابعاد  و خود ماتریس
void inputMatrix(int matrix[10][10], int rows, int cols) {
    cout << "Enter the elements of the matrix " << rows << "x" << cols <<endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
}

// چاپ ماتریس
void printMatrix(int matrix[10][10], int rows, int cols) {
    cout << "The matrix is: " <<endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[10][10];
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);

    return 0;
}















#include <iostream>

using namespace std;

// تابع ضرب دو ماتریس
void zarbmatrix(int A[10][10], int B[10][10], int result[10][10], int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// تابع دریافت ماتریس
void inputMatrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
}

// تابع چاپ ماتریس
void printMatrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int A[10][10], B[10][10], result[10][10];
    int rowsA, colsA, rowsB, colsB;

    cout << "Enter the number of rows and columns for matrix A: ";
    cin >> rowsA >> colsA;

    cout << "Enter the number of rows and columns for matrix B: ";
    cin >> rowsB >> colsB;

    if (colsA != rowsB) {
        cout << "Matrix multiplication not possible! Number of columns of matrix A must be equal to number of rows of matrix B." << endl;
        return 0;
    }

    cout << "Enter the elements of matrix A:" << endl;
    inputMatrix(A, rowsA, colsA);

    cout << "Enter the elements of matrix B:" << endl;
    inputMatrix(B, rowsB, colsB);

    zarbmatrix(A, B, result, rowsA, colsA, colsB);

    cout << "The resulting matrix is:" << endl;
    printMatrix(result, rowsA, colsB);

    return 0;
}

















#include <iostream>
// جمع ماتریس
using namespace std;

void plusmatrix(int A[10][10], int B[10][10], int result[10][10], int row, int cols) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main() {
    int A[10][10], B[10][10], result[10][10];
    int rows, cols;

    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    cout << "Enter the elements of matrix A:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter the elements of matrix B:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> B[i][j];
        }
    }

    plusmatrix(A, B, result, rows, cols);

    cout << "The resulting matrix is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

















#include <iostream>

using namespace std;

// تابع ضرب یک عدد در ماتریس
void scalarMultiply(int matrix[10][10], int rows, int cols, int scalar) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] =matrix[i][j] * scalar ;
        }
    }
}

// تابع چاپ ماتریس
void printMatrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[10][10];
    int rows, cols, scalar;

    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    cout << "Enter the scalar value: ";
    cin >> scalar;

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    scalarMultiply(matrix, rows, cols, scalar);

    cout << "The resulting matrix is:" << endl;
    printMatrix(matrix, rows, cols);

    return 0;
}















#include <iostream>

using namespace std;

// تابع جستجوی یک درایه در ماتریس
bool searchElement(int matrix[10][10], int rows, int cols, int element) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == element) {
                return true;
            }
        }
    }
    return false;
}

void inputMatrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[10][10];
    int rows, cols, element;

    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    cout << "Enter the elements of the matrix:" << endl;
    inputMatrix(matrix, rows, cols);

    cout << "Enter the element to search for: ";
    cin >> element;

    if (searchElement(matrix, rows, cols, element)) {
        cout << "Element found in the matrix." << endl;
    } else {
        cout << "Element not found in the matrix." << endl;
    }

    return 0;
}













#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

// تابع ویرایش یک درایه مشخص از ماتریس
void editElement(int matrix[MAX_SIZE][MAX_SIZE], int row, int col, int newValue) {
    matrix[row][col] = newValue;
}

// تابع نمایش ماتریس
void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int size, row, col, newValue;

    // گرفتن اندازه ماتریس از کاربر
    cout << "Enter the size of the matrix (max " << MAX_SIZE << "): ";
    cin >> size;

    // گرفتن مقادیر ماتریس از کاربر
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> matrix[i][j];
        }
    }

    // نمایش ماتریس اولیه
    cout << "Original Matrix:" << endl;
    displayMatrix(matrix, size);

    // گرفتن مختصات و مقدار جدید از کاربر
    cout << "Enter the row and column to edit: ";
    cin >> row >> col;
    cout << "Enter the new value: ";
    cin >> newValue;

    // ویرایش درایه مشخص شده
    editElement(matrix, row, col, newValue);

    // نمایش ماتریس پس از ویرایش
    cout << "Updated Matrix:" << endl;
    displayMatrix(matrix, size);

    return 0;
}















#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

// تابع جمع عناصر سطرها به تفکیک
void sumRows(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        cout << "Sum of row " << i << ": " << sum << endl;
    }
}

// تابع نمایش ماتریس
void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    // گرفتن تعداد ردیف‌ها و ستون‌ها از کاربر
    cout << "Enter the number of rows (max " << MAX_SIZE << "): ";
    cin >> rows;
    cout << "Enter the number of columns (max " << MAX_SIZE << "): ";
    cin >> cols;

    // گرفتن مقادیر ماتریس از کاربر
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // نمایش ماتریس اولیه
    cout << "Original Matrix:" << endl;
    displayMatrix(matrix, rows, cols);

    // نمایش جمع عناصر هر سطر
    cout << "Sum of each row:" << endl;
    sumRows(matrix, rows, cols);

    return 0;
}
















#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

// تابع جمع عناصر ستون‌ها به تفکیک
void sumColumns(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int j = 0; j < cols; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) {
            sum += matrix[i][j];
        }
        cout << "Sum of column " << j << ": " << sum << endl;
    }
}

// تابع نمایش ماتریس
void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];

















#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

// تابع جمع عناصر روی قطر اصلی
int sumMainDiagonal(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i];
    }
    return sum;
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int size;

    // گرفتن اندازه ماتریس از کاربر
    cout << "Enter the size of the matrix (max " << MAX_SIZE << "): ";
    cin >> size;

    // گرفتن مقادیر ماتریس از کاربر
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> matrix[i][j];
        }
    }

    // محاسبه و نمایش جمع عناصر روی قطر اصلی
    int sum = sumMainDiagonal(matrix, size);
    cout << "Sum of the main diagonal: " << sum << endl;

    return 0;
}
















#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

// تابع مشخص کردن تعداد درایه‌های صفر ماتریس
int countZeros(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    int count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                count++;
            }
        }
    }
    return count;
}

// تابع نمایش ماتریس
void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    // گرفتن تعداد ردیف‌ها و ستون‌ها از کاربر
    cout << "Enter the number of rows (max " << MAX_SIZE << "): ";
    cin >> rows;
    cout << "Enter the number of columns (max " << MAX_SIZE << "): ";
    cin >> cols;

    // گرفتن مقادیر ماتریس از کاربر
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // نمایش ماتریس اولیه
    cout << "Original Matrix:" << endl;
    displayMatrix(matrix, rows, cols);

    // محاسبه و نمایش تعداد درایه‌های صفر
    int zeros = countZeros(matrix, rows, cols);
    cout << "Number of zero elements: " << zeros << endl;

    return 0;
}















#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

// تابع بررسی ماتریس بالا مثلثی
bool isUpperTriangular(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

// تابع بررسی ماتریس پایین مثلثی
bool isLowerTriangular(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (matrix[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int size;

    // گرفتن اندازه ماتریس از کاربر
    cout << "Enter the size of the matrix (max " << MAX_SIZE << "): ";
    cin >> size;

    // گرفتن مقادیر ماتریس از کاربر
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> matrix[i][j];
        }
    }

    // بررسی و نمایش نوع ماتریس
    if (isUpperTriangular(matrix, size)) {
        cout << "The matrix is upper triangular." << endl;
    } else if (isLowerTriangular(matrix, size)) {
        cout << "The matrix is lower triangular." << endl;
    } else {
        cout << "The matrix is neither upper nor lower triangular." << endl;
    }

    return 0;
}




