#pragma once
#include "Weather.h"
#include "Service.h"
#include "pugixml.hpp"

using namespace pugi;

class XmlService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~XmlService() {};
};

