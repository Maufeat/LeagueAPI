#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct EndOfGameLcdsPointsPenalty { 
    std::string type;
    double penalty; 
  };
  void to_json(json& j, const EndOfGameLcdsPointsPenalty& v) {
  j["type"] = v.type; 
  j["penalty"] = v.penalty; 
  }
  void from_json(const json& j, EndOfGameLcdsPointsPenalty& v) {
  v.type = j.at("type").get<std::string>(); 
  v.penalty = j.at("penalty").get<double>(); 
  }
}