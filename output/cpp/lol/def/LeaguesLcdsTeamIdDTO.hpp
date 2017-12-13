#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LeaguesLcdsTeamIdDTO { 
    std::string fullId; 
  };
  void to_json(json& j, const LeaguesLcdsTeamIdDTO& v) {
  j["fullId"] = v.fullId; 
  }
  void from_json(const json& j, LeaguesLcdsTeamIdDTO& v) {
  v.fullId = j.at("fullId").get<std::string>(); 
  }
}