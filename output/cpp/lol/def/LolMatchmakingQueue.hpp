#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolMatchmakingQueue { 
    bool isTeamBuilderManaged;
    int32_t id; 
  };
  void to_json(json& j, const LolMatchmakingQueue& v) {
  j["isTeamBuilderManaged"] = v.isTeamBuilderManaged; 
  j["id"] = v.id; 
  }
  void from_json(const json& j, LolMatchmakingQueue& v) {
  v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>(); 
  v.id = j.at("id").get<int32_t>(); 
  }
}