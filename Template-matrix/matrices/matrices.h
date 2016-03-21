#ifndef MATRICES_H
#define MATRICES_H
#define MAX 3
template <class T>

class matrix{
    T mat[MAX][MAX];
public:
    matrix(){
        for(int i=0;i<MAX;i++){
            for(int j=0;j<MAX;j++){
                mat[i][j] = 0;
            }
        }
    }
    matrix add(matrix<T>);

    matrix <T> subtract(matrix<T>);

    matrix <T> multiply(matrix<T>);

    matrix <T> transpose();

    friend class MainWindow;

};

#endif // MATRICES_H
