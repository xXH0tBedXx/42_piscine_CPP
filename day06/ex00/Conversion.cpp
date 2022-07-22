#include "Conversion.hpp"

const std::string Converter::floatSpecial[SPECIAL_VALUES_COUNT] = {"inff", "+inff", "-inff", "nanf"};
const std::string Converter::doubleSpecial[SPECIAL_VALUES_COUNT] = {"inf", "+inf", "-inf", "nan"};

Converter::Converter(void)
{
	this->reset(NULL);
}

Converter::Converter(const Converter& init)
{
	*this = init;
}

Converter::~Converter(void)
{}

Converter	&Converter::operator=(const Converter& other)
{
	if (this == &other)
		return *this;
	this->_selType = other._selType;
	this->_charRes = other._charRes;
	this->_intRes = other._intRes;
	this->_floatRes = other._floatRes;
	this->_doubleRes = other._doubleRes;
	return *this;
}

void	Converter::analyze_input(char* input)
{
	this->reset(input);
	if (this->_input == NULL)
		throw Converter::EmptyInput();
	if (this->select() == false)
		throw Converter::NotAnalyze();
	this->setValues();
}

void	Converter::reset(char* input)
{
	this->_input = input;
	this->_selType = NoneType;
	this->_charRes = 0;
	this->_intRes = 0;
	this->_floatRes = 0.0f;
	this->_doubleRes = 0.0;
}

bool					Converter::select(void)
{
	bool ret = false;

	this->_selType = this->handleFloatingSpecial();
	if (this->_selType != NoneType)
		ret = true;
	if (!ret)
	{
		if (std::isdigit(this->_input[0]) || this->_input[0] == '-' || this->_input[0] == '+' || this->_input[0] == '.')
			this->_selType = handleNumeric();
		if (this->_selType != NoneType)
		ret = true;
	}
	if (!(ret || this->_input[1]))
	{
		ret = true;
		this->_selType = CharType;
	}
	return ret;
}

void					Converter::setValues(void)
{
	switch (this->_selType)
	{
	case CharType:
		this->_charRes = this->_input[0];
		break;
	case IntType:
		this->_intRes = atoi(this->_input);
		break;
	case FloatType:
		this->_floatRes = (float)atof(this->_input);
		break;
	case DoubleType:
		this->_doubleRes = atof(this->_input);
		break;
	default:
		std::cout << "unknown type";
	}
}

Converter::t_type	Converter::handleFloatingSpecial(void)
{
	Converter::t_type	ret = NoneType;
	ssize_t					i = -1;

	while (ret == NoneType && ++i < SPECIAL_VALUES_COUNT)
	{
		if (floatSpecial[i] == this->_input)
			ret = FloatType;
		if (doubleSpecial[i] == this->_input)
			ret = DoubleType;
	}
	return ret;
}

void					Converter::print_result(void) const
{
	this->printChar();
	this->printInt();
	this->printFloat();
	this->printDouble();
}



Converter::t_type	Converter::handleNumeric(void)
{
	Converter::t_type	ret = NoneType;
	int	i = 0;
	int	dotCount = 0;

	if ((this->_input[0] == '-' || this->_input[0] == '+') && this->_input[1])
		i++;
	if (!(this->_input[i] == '.' && (this->_input[i + 1] == 'f' || this->_input[i + 1] == 0)))
	{
		while (this->_input[i] == '.' || std::isdigit(this->_input[i]))
		{
			if (this->_input[i] == '.')
				dotCount++;
			if (dotCount > 1)
				break;
			i++;
		}
		if (!this->_input[i])
		{
			if (dotCount == 1)
				ret = DoubleType;
			if (dotCount == 0)
				ret = IntType;
		}
		else if (this->_input[i] == 'f' && !this->_input[i + 1] && dotCount == 1)
				ret = FloatType;
	}
	return ret;
}

bool					Converter::possibleToChar(const double value) const
{
	bool	ret = true;

	if (value - static_cast<int>(value) != 0 || value > 127 || value < 0)
	{
		std::cout << "impossible";
		ret = false;
	}
	if (ret && !(std::isprint(value)))
	{
		std::cout << "Non displayable";
		ret = false;
	}
	return ret;
}

bool		Converter::possibleToInt(const double value) const
{
	bool ret;

	ret = (value <= std::numeric_limits<int>::max() && value >= std::numeric_limits<int>::min()	&& value != std::numeric_limits<double>::infinity()	&& value != -(std::numeric_limits<double>::infinity()) && value != std::numeric_limits<double>::quiet_NaN());
	if (!ret)
		std::cout << "impossible";
	return ret;
}

bool		Converter::possibleToFloat(const double value) const
{
	bool	ret;

	ret = ((value <= std::numeric_limits<float>::max() && value >= -std::numeric_limits<float>::max()) || value == std::numeric_limits<double>::infinity() || value == -std::numeric_limits<double>::infinity() || std::isnan(value));
	if (!ret)
		std::cout << "impossible";
	return ret;
}

void					Converter::printChar(void) const
{
	std::cout << "char: ";
	switch (this->_selType)
	{
	case CharType:
		std::cout << static_cast<char>(this->_charRes);
		break;
	case IntType:
		if (this->possibleToChar(_intRes))
			std::cout << static_cast<char>(this->_intRes);
		break;
	case FloatType:
		if (this->possibleToChar(_floatRes))
			std::cout << static_cast<char>(this->_floatRes);
		break;
	case DoubleType:
		if (this->possibleToChar(_doubleRes))
			std::cout << static_cast<char>(this->_doubleRes);
		break;
	default:
		throw Converter::NotAnalyze();
	}
	std::cout << std::endl;
}

void					Converter::printInt(void) const
{
	std::cout << "int: ";
	switch (this->_selType)
	{
	case CharType:
		std::cout << static_cast<int>(this->_charRes);
		break;
	case IntType:
		std::cout << static_cast<int>(this->_intRes);
		break;
	case FloatType:
		if (this->possibleToInt(_floatRes))
			std::cout << static_cast<int>(this->_floatRes);
		break;
	case DoubleType:
		if (this->possibleToInt(_doubleRes))
			std::cout << static_cast<int>(this->_doubleRes);
		break;
	default:
		throw Converter::NotAnalyze();
		break;
	}
	std::cout << std::endl;
}

void					Converter::printFloat(void) const
{
	bool needF = true;

	std::cout << "float: ";
	switch (this->_selType)
	{
	case CharType:
		std::cout << static_cast<float>(this->_charRes);
		break;
	case IntType:
		std::cout << static_cast<float>(this->_intRes);
		break;
	case FloatType:
		std::cout << static_cast<float>(this->_floatRes);
		break;
	case DoubleType:
		if (this->possibleToFloat(_doubleRes))
			std::cout << static_cast<float>(this->_doubleRes);
		else
			needF = false;
		break;
	default:
		throw Converter::NotAnalyze();
		break;
	}
	if (this->_selType != NoneType)
		this->addDot(needF);
	std::cout << std::endl;
}

void					Converter::printDouble(void) const
{
	std::cout << "double: ";
	switch (this->_selType)
	{
	case CharType:
		std::cout << static_cast<double>(this->_charRes);
		break;
	case IntType:
		std::cout << static_cast<double>(this->_intRes);
		break;
	case FloatType:
		std::cout << static_cast<double>(this->_floatRes);
		break;
	case DoubleType:
		std::cout << static_cast<double>(this->_doubleRes);
		break;
	default:
		throw Converter::NotAnalyze();
		break;
	}
	if (this->_selType != NoneType)
		this->addDot(false);
	std::cout << std::endl;
}

void					Converter::addDot(bool f) const
{
	double dd;

	dd = atof(this->_input);
	if ((dd - atoi(this->_input) == 0.0) && (dd < 1e+06f && dd > -1e+06f))
		std::cout << ".0";
	if (f)
		std::cout << "f";
}

void					Converter::help(void) const
{
	std::cout << "./convert {char, int, float or double literal}" << std::endl;
}