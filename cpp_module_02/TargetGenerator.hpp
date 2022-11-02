#pragma once
#include "ATarget.hpp"
#include <map>
#include <iostream>

class TargetGenerator
{
	public:
		TargetGenerator();
		~TargetGenerator();

		void 		learnTargetType(ATarget *target);
		void 		forgetTargetType(std::string const &targetName);
		ATarget		*createTarget(std::string const &targetName);

	private:
		TargetGenerator(TargetGenerator const &other);
		TargetGenerator &operator=(TargetGenerator const &other);

		std::map<std::string, ATarget *> targetMap;

};

