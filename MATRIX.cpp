#include <iostream>
using namespace std;

// دریافت ابعاد و ماتریس از کاربر
void inputMatrix(int matrix[][10], int rows, int cols) {
    cout << "Enter the elements of the matrix row by row:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }
}

// تابع چاپ ماتریس
void printMatrix(int matrix[][10], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// تابع جمع ماتریس‌ها
void addMatrices(int mat1[][10], int mat2[][10], int result[][10], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// تابع تفریق ماتریس‌ها
void subtractMatrices(int mat1[][10], int mat2[][10], int result[][10], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

// تابع ضرب ماتریس‌ها
void multiplyMatrices(int mat1[][10], int mat2[][10], int result[][10], int rows1, int cols1, int rows2, int cols2) {
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// تابع ضرب یک عدد در ماتریس
void multiplyByScalar(int mat[][10], int result[][10], int scalar, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = mat[i][j] * scalar;
        }
    }
}

// تابع جستجوی یک درایه در ماتریس
pair<int, int> searchElement(int mat[][10], int element, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (mat[i][j] == element) {
                return {i, j};
            }
        }
    }
    return {-1, -1}; // اگر درایه پیدا نشد
}

// تابع ویرایش یک درایه مشخص (i, j) از ماتریس با مقدار جدید
void editElement(int mat[][10], int i, int j, int newValue) {
    mat[i][j] = newValue;
}

// تابع جمع عناصر سطرها به تفکیک
void sumOfRows(int mat[][10], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        int sum = 0;
        for (int j = 0; j < cols; ++j) {
            sum += mat[i][j];
        }
        cout << "Sum of row " << i << ": " << sum << endl;
    }
}

// تابع جمع عناصر ستون‌ها به تفکیک
void sumOfColumns(int mat[][10], int rows, int cols) {
    for (int j = 0; j < cols; ++j) {
        int sum = 0;
        for (int i = 0; i < rows; ++i) {
            sum += mat[i][j];
        }
        cout << "Sum of column " << j << ": " << sum << endl;
    }
}

// تابع جمع عناصر روی قطر اصلی
int sumOfMainDiagonal(int mat[][10], int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < min(rows, cols); ++i) {
        sum += mat[i][i];
    }
    return sum;
}

// تابع مشخص کردن تعداد درایه‌های صفر ماتریس
int countZeros(int mat[][10], int rows, int cols) {
    int zeroCount = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (mat[i][j] == 0) {
                ++zeroCount;
            }
        }
    }
    return zeroCount;
}

// تابع مشخص کردن نوع ماتریس (بالا مثلثی/پایین مثلثی/هیچ کدام)
string determineType(int mat[][10], int rows, int cols) {
    bool isUpperTriangular = true, isLowerTriangular = true;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (i < j && mat[i][j] != 0) {
                isUpperTriangular = false;
            }
            if (i > j && mat[i][j] != 0) {
                isLowerTriangular = false;
            }
        }
    }
    if (isUpperTriangular) return "Upper Triangular";
    if (isLowerTriangular) return "Lower Triangular";
    return "None";
}

int main() {
    int rows1, cols1, rows2, cols2;

    cout << "Enter the dimensions of the first matrix (rows and columns): ";
    cin >> rows1 >> cols1;
    cout << "Enter the dimensions of the second matrix (rows and columns): ";
    cin >> rows2 >> cols2;

    int matrix1[10][10], matrix2[10][10], result[10][10];

    inputMatrix(matrix1, rows1, cols1);
    inputMatrix(matrix2, rows2, cols2);

    cout << "Matrix 1:" << endl;
    printMatrix(matrix1, rows1, cols1);

    cout << "Matrix 2:" << endl;
    printMatrix(matrix2, rows2, cols2);

    addMatrices(matrix1, matrix2, result, rows1, cols1);
    cout << "Sum of Matrices:" << endl;
    printMatrix(result, rows1, cols1);

    subtractMatrices(matrix1, matrix2, result, rows1, cols1);
    cout << "Difference of Matrices:" << endl;
    printMatrix(result, rows1, cols1);

    if (cols1 == rows2) {
        multiplyMatrices(matrix1, matrix2, result, rows1, cols1, rows2, cols2);
        cout << "Product of Matrices:" << endl;
        printMatrix(result, rows1, cols2);
    } else {
        cout << "Matrices cannot be multiplied due to incompatible dimensions." << endl;
    }

    int scalar = 2;
    multiplyByScalar(matrix1, result, scalar, rows1, cols1);
    cout << "Matrix 1 multiplied by " << scalar << ":" << endl;
    printMatrix(result, rows1, cols1);

    int element = 3;
    pair<int, int> position = searchElement(matrix1, element, rows1, cols1);
    if (position.first != -1) {
        cout << "Element " << element << " found at position (" << position.first << ", " << position.second << ")" << endl;
    } else {
        cout << "Element " << element << " not found." << endl;
    }

    editElement(matrix1, 0, 0, 9);
    cout << "Matrix 1 after editing element (0, 0) to 9:" << endl;
    printMatrix(matrix1, rows1, cols1);

    cout << "Sum of rows in Matrix 1:" << endl;
    sumOfRows(matrix1, rows1, cols1);

    cout << "Sum of columns in Matrix 1:" << endl;
    sumOfColumns(matrix1, rows1, cols1);

    int diagonalSum = sumOfMainDiagonal(matrix1, rows1, cols1);
    cout << "Sum of main diagonal in Matrix 1: " << diagonalSum << endl;

    int zeroCount = countZeros(matrix1, rows1, cols1);
    cout << "Number of zeros in Matrix 1: " << zeroCount << endl;

    string matrixType = determineType(matrix1, rows1, cols1);
    cout << "Matrix 1 is of type: " << matrixType << endl;

    return 0;
}
