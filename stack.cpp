#include <iostream>
#include <vector>
#include <string>
template <typename E>

class Stack {


	private:
		std::vector<E> elements;
	public:
		void push(const E& value) {
		elements.push_back(value);

		}

		void pop() {
		
		   if(!elements.empty()) {
		   
		   	elements.pop_back();
		   } else {
		   	std::cerr << "Stack is empty. Cannot pop." << std::endl;
		   }
		}


	E top() const {
	
	 if(!elements.empty()) {
	   return elements.back();
	 } else {
		 std::cerr << "Stack is empty." << std:: endl;
		 return E();
	}
	}

	bool empty() const {
	  return elements.empty();

	}

	size_t size() const {
	  return elements.size();
	}
};

 int main() {
 
 	Stack<int> intStack;
	intStack.push(10);
	intStack.push(20);
	intStack.push(80);

	std::cout << "Top element: " << intStack.top() << std::endl;
	std::cout << "Stack size: " << intStack.size() << std::endl;

	intStack.pop();
        std::cout << "After pop, top element: " << intStack.top() << std::endl;
 
	Stack<std::string> stringStack;
	stringStack.push("Hello");
	stringStack.push("Army");

	std::cout << "Top element: " << stringStack.top() << std::endl;
	std::cout << "Stack size: " << stringStack.size() << std::endl;

	return 0;
 }
