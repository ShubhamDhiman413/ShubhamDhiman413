#include <bits/stdc++.h>
using namespace std;

void pointClip(int XY[][2], int n, int Xmin, int Ymin,int Xmax, int Ymax)
{

	cout << "Point inside the viewing pane:" << endl;
	for (int i = 0; i < n; i++)
	{
		if ((XY[i][0] >= Xmin) && (XY[i][0] <= Xmax))
		{
			if ((XY[i][1] >= Ymin) && (XY[i][1] <= Ymax))
				cout <<"[" << XY[i][0] <<","<<XY[i][1]<<"] ";
		}
	}

	cout<<"\n"<< endl;
	cout << "Point outside the viewing pane:"<<endl;
	for (int i = 0; i < n; i++)
	{
		if ((XY[i][0] < Xmin) || (XY[i][0] > Xmax))
			cout << "[" << XY[i][0] << "," << XY[i][1] << "] ";
		if ((XY[i][1] < Ymin) || (XY[i][1] > Ymax))
			cout << "[" << XY[i][0] << "," << XY[i][1] << "] ";
	}
}

int main()
{
    int n,a;
    int XY[n][2];
    cout<<"Enter the number of points\n";
    cin>>n;
    for(int i=0 ; i<n ;i++){
        cout<<"Enter the coordinate of"<<i+1<<"point";
    for(int j=0;j<2;j++){
     cin>>a;
     XY[i][j]=a;
    }
    }

	int Xmin = 0;
	int Xmax = 350;
	int Ymin = 0;
	int Ymax = 350;
	pointClip(XY, n, Xmin, Ymin, Xmax, Ymax);
	return 0;
}
