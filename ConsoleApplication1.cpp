// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

std::vector<int> find_longest_subsequence(const std::vector<int>& vect) {

	if (vect.empty()){
		throw std::runtime_error("Vector is empty !");
	}

	std::vector<int> subsequence;
	for (size_t i = 1; i <= vect.size(); i++){
		if (vect[i - 1] < vect[i]) {
			subsequence.push_back(vect[i]);
		}
		else{
			subsequence.clear();
			subsequence.push_back(vect[i]);
		}
	}

	return subsequence;
}


std::string get_LCS(const std::string& str, const std::string& str2) {
	
	if (str.empty() || str2.empty()) {
		throw std::runtime_error("invalid arg, string is empty");
	}
	
	std::string ret;

	for (const char& c : str) {
		if (str2.find(c) != std::string::npos) {
			ret += c;
		}
	}

	return ret;
}
int main() {
	//find the longest increasing subarray within the given array.
	/*std::vector<int> subsequence;
	const std::vector<int> vector{ 2, 5, 1, 2, 3, 4, 7, 9, 10, 12 };
	const std::vector<int> input_vector{ 5, 7, 2, 3, 4, 5, 6, 4, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	const std::vector<int> input_vector1{};

	try {
		subsequence = find_longest_subsequence(input_vector1);
	}
	catch(const std::exception& ex){
		std::cout << ex.what();
	}
	
	for (size_t i = 0; i < subsequence.size(); i++){
		std::cout << subsequence[i] << " " << std::endl;
	}*/

 // // // // // // // // // // // // // // // // // // // // // // // // // // //
 // // // // // // // // // // // // // // // // // // // // // // // // // // //


	const std::string str = "ABCDGH";
	const std::string str2 = "AEDFHR";
	

	const auto LCS = get_LCS(str, str2);
	std::cout << LCS;
	return 0;
}