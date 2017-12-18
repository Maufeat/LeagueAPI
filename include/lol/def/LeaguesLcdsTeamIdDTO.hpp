#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LeaguesLcdsTeamIdDTO { 
    std::string fullId; 
  };
  inline void to_json(json& j, const LeaguesLcdsTeamIdDTO& v) {
    j["fullId"] = v.fullId; 
  }
  inline void from_json(const json& j, LeaguesLcdsTeamIdDTO& v) {
    v.fullId = j.at("fullId").get<std::string>(); 
  }
}