#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct EndOfGameLcdsPointsPenalty { 
    double penalty;
    std::string type; 
  };
  inline void to_json(json& j, const EndOfGameLcdsPointsPenalty& v) {
    j["penalty"] = v.penalty; 
    j["type"] = v.type; 
  }
  inline void from_json(const json& j, EndOfGameLcdsPointsPenalty& v) {
    v.penalty = j.at("penalty").get<double>(); 
    v.type = j.at("type").get<std::string>(); 
  }
}