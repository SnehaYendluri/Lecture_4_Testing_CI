#include <iostream>
#include <vector>
using namespace std;
#include "functions_to_implement.cpp"

int main(){
	std::cout << Factorial (5) <<std::endl;
	std::vector<int> v{1,2,3};
     
    cout << "The product is: " << Product(v) << endl; 
    cout << "The Sum is: " << Sum(v) << endl;

    vector<int> plusresult = VectorPlusN(v,2);
    cout << "If we add 2 to every single vector we get: { "; 
    for (int i = 0; i < plusresult.size(); i++)
	 {
		cout << plusresult[i] << " ";  
	 } 
    cout << "}" << endl; 

    vector<int> multiplyresult = VectorTimesN(v,5);
    cout << "If we multiply 5 to every single vector we get: { "; 
    for (int i = 0; i < multiplyresult.size(); i++)
	 {
		cout << multiplyresult[i] << " ";  
	 } 
     cout << "}"; 
     
	// std::vector<int> res = AddN(v, 5);
	// for(int i=0;i<res.size();i++){
	// 	std::cout<<res[i]<<" ";
	// }
}