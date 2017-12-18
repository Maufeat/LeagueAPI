#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLoadoutsQueue { 
    bool isTeamBuilderManaged; 
  };
  inline void to_json(json& j, const LolLoadoutsQueue& v) {
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged; 
  }
  inline void from_json(const json& j, LolLoadoutsQueue& v) {
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>(); 
  }
}