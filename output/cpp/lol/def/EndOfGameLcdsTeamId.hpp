#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct EndOfGameLcdsTeamId { 
    std::string fullId; 
  };
  void to_json(json& j, const EndOfGameLcdsTeamId& v) {
    j["fullId"] = v.fullId; 
  }
  void from_json(const json& j, EndOfGameLcdsTeamId& v) {
    v.fullId = j.at("fullId").get<std::string>(); 
  }
}