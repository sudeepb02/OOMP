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
    matrix add(matrix<T> b)
    {
        matrix <T> temp;
        for(int i=0;i<MAX;i++){
            for(int j=0;j<MAX;j++){
                temp.mat[i][j] = mat[i][j] + b.mat[i][j];
            }
        }
        return temp;
    }

    matrix <T> subtract(matrix<T> b)
    {
        matrix <T> temp;
        for(int i=0;i<MAX;i++){
            for(int j=0;j<MAX;j++){
                temp.mat[i][j] = mat[i][j] - b.mat[i][j];
            }
        }
        return temp;

    }

    matrix <T> multiply(matrix<T> b){
        matrix <T> temp;
        for(int i=0;i<MAX;i++){
            for(int j=0;j<MAX;j++){
                for(int k=0;k<MAX;k++){
                    temp.mat[i][j] = temp.mat[i][j] + mat[i][k]*b.mat[k][j];
                }
            }
        }
        return temp;
    }

    friend class MainWindow;

};

#endif // MATRICES_H
