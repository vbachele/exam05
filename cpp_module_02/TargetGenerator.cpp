#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{

}

TargetGenerator::~TargetGenerator()
{
	std::map<std::string, ATarget *>::iterator itBegin = this->targetMap.begin();
	std::map<std::string, ATarget *>::iterator itEnd = this->targetMap.end();
	for(; itBegin != itEnd; ++itBegin)
	{
		delete itBegin->second;
	}
	this->targetMap.clear();
}

void TargetGenerator::learnTargetType(ATarget *target)
{
	if (target)
		this->targetMap.insert(std::pair<std::string, ATarget *>(target->getType(), target->clone()));
}

void  TargetGenerator::forgetTargetType(std::string const &targetName)
{
	std::map<std::string, ATarget *>::iterator it = this->targetMap.find(targetName);
	if (it !=this->targetMap.end())
	{
		delete it->second;
	}
	this->targetMap.erase(targetName);
}

ATarget *TargetGenerator::createTarget(std::string const &targetName)
{
	std::map<std::string, ATarget *>::iterator it = this->targetMap.find(targetName);

	if (it != this->targetMap.end())
		return (this->targetMap[targetName]);
	return NULL;
}