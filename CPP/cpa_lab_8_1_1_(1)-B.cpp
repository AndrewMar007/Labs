#include <iostream>
#include <stdexcept>

using namespace std;

class Matrix{
    private:
        int matrix[2][2];
        int arrayIndex;
        int elementIndex;
        int arraySize;
    public:
        Matrix(){
            arraySize = 2;
            arrayIndex = elementIndex = 0;
        }
        friend istream& operator>> (istream& is, Matrix& matrix);
        friend ostream& operator<< (ostream& os, Matrix& matrix);
};

istream& operator>> (istream& is, Matrix& matrix){
    if(matrix.arrayIndex == matrix.arraySize && matrix.elementIndex == matrix.arraySize)
        throw invalid_argument("Matrix is full");

    if(matrix.elementIndex == matrix.arraySize){
        matrix.elementIndex = 0;
        ++matrix.arrayIndex;
    }

    is >> matrix.matrix[matrix.arrayIndex][matrix.elementIndex];
    ++matrix.elementIndex;

    return is;
}

ostream& operator<< (ostream& os, Matrix& matrix){
    os << matrix.matrix[0][0] << " " << matrix.matrix[0][1] << endl <<
        matrix.matrix[1][0] << " " << matrix.matrix[1][1];
    return os;
}

int main()
{
    Matrix matrix = Matrix();
    for(int i = 0; i < 2; ++i)
        for(int j = 0; j < 2; ++j)
        {
            cout << "Enter [" << i << "][" << j <<"] element of matrix: ";
            cin >> matrix;
        }
    cout << "Result is:" << endl << matrix;
    return 0;
}
