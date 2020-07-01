#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int>data={1,2,3,4,9};
	
	// .push_back adds index at the end of the vector which we write.
	data.push_back(10);

    //Gives us 3. index.
	cout<<data[3]<<endl;
	
	//Gives us final index.
	cout<<data[data.size() -1]<<endl;
	
	//Gives us the size of the vector.
	cout<<data.size()<<endl;
	
	data.pop_back();
	
	cout<<
	

	return 0;
}
