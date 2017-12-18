#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct EndOfGameLcdsTeamId { 
    std::string fullId; 
  };
  inline void to_json(json& j, const EndOfGameLcdsTeamId& v) {
    j["fullId"] = v.fullId; 
  }
  inline void from_json(const json& j, EndOfGameLcdsTeamId& v) {
    v.fullId = j.at("fullId").get<std::string>(); 
  }
}