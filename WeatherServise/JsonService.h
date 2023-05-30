#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include "Weather.h"
#include "Service.h"
#include "json.hpp"

using nlohmann::json;

class JsonService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~JsonService() {};
};


