#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLoadoutsQueue { 
    bool isTeamBuilderManaged; 
  };
  void to_json(json& j, const LolLoadoutsQueue& v) {
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged; 
  }
  void from_json(const json& j, LolLoadoutsQueue& v) {
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>(); 
  }
}