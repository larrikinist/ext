#include<iostream>
#include<algorithm>
int main(int argc, char* argv[]){
	std::string arg;
	for(int i = 1;i < argc;i++){
		arg = argv[i];
		if(arg == "--help" || arg == "-h"){
			std::cout << "Usage: " << argv[0] << " [OPTION]" << std::endl;
			std::cout << "Get the extension of a file." << std::endl;
			std::cout << "Example: " << argv[0] << " main.c main.h" << std::endl;
			std::cout << "Output:\n.c\n.h" << std::endl;
			std::cout << "If a file has no extension, it returns \"_None\"" << std::endl;
			return 0;
		}
		auto path = arg.find_last_of('.');
		if((path == -1)){
			std::cout << "_None" << std::endl;
			continue;
		}
		std::string print = arg.substr(path+1);
		std::cout << "." << print << std::endl;
		}
	return 0;
}