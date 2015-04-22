#include<math.h>
#include<matrix.h>
#include<mex.h>
void mexFunction (int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
    double *a = NULL,*mean = NULL; //aָ�������
    double i = 0,j = 0, sum = 0;  //���
    if(nrhs < 1)
    {
    mexErrMsgIdAndTxt("Lecs:mat:lec9","Error!");
    }
    a = mxGetPr(prhs[0]);
    plhs[0] = mxCreateDoubleMatrix(1,1,mxREAL);
    mean = mxGetPr(plhs[0]);//meanָ�򷵻�ֵ
    for (i =a[0] ; j <= a[1]; i = j)
    {
        j = i + 1.0/pow(2,8);  //���Ϊ1.0/pow��2,8��
        sum = sum+( j - i )/6 *(sin(i)/i + 4* sin((i + j)/2) / ((i + j)/2) + sin(j)/j );
    }//���빫ʽ
    *mean = sum; //��� 
}