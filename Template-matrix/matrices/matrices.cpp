#include "mainwindow.h"
template<class T> matrix <T> matrix <T>::add(matrix<T> b)
{
    matrix <T> temp;
    for(int i=0;i<MAX;i++){
        for(int j=0;j<MAX;j++){
            temp.mat[i][j] = mat[i][j] + b.mat[i][j];
        }
    }
    return temp;
}

template<class T> matrix <T> matrix <T>::subtract(matrix<T> b)
{
    {
        matrix <T> temp;
        for(int i=0;i<MAX;i++){
            for(int j=0;j<MAX;j++){
                temp.mat[i][j] = mat[i][j] - b.mat[i][j];
            }
        }
        return temp;

    }
}
template<class T> matrix <T> matrix<T>::multiply(matrix<T> b)
{
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

template <class T> matrix <T> matrix<T>::transpose()
{
    matrix <T> temp;
    for(int i=0;i<MAX;i++){
        for(int j=0;j<MAX;j++){
            temp.mat[i][j] = mat[j][i];
        }
    }
    return temp;

}
