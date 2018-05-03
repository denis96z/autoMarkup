#include "../../autoMarkup/Tokenizer/Tokenizer.hpp"
#include <iostream>
#include <fstream>


int main()
{
	Tokenizer t;
	std::ifstream fin("test_text.txt");
	std::cout << "-------------READ TEST------------------------\n\n";
	t.ReadText(fin);
	std::cout << "\n\n-------------SEPARATION ON SENTECES TEST------------------------\n\n";
	// t.sentence_token();
	std::cout << "\n\n-------------SEPARATION SENTECES ON WORDS TEST------------------------\n\n";
	t.sentence_to_words();
	// std::cout << t.text << "\n";
	return 0;
}