#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolMatchmakingQueue { 
    int32_t id;
    bool isTeamBuilderManaged; 
  };
  inline void to_json(json& j, const LolMatchmakingQueue& v) {
    j["id"] = v.id; 
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged; 
  }
  inline void from_json(const json& j, LolMatchmakingQueue& v) {
    v.id = j.at("id").get<int32_t>(); 
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>(); 
  }
}