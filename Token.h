#pragma once
#include <string>
using namespace std;
enum TokenType {COMMA, PERIOD, Q_MARK, LEFT_PAREN, RIGHT_PAREN, 
	COLON, COLON_DASH, MULTIPLY, ADD, SCHEMES, FACTS, RULES, 
	QUERIES, ID, STRING, COMMENT, UNDEFINED, ENDFILE};
class Token
{
private:
	string value;
	int lineNumber;
	TokenType type;
public:
};

