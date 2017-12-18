#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChatGameflowGameMap { 
    int64_t id; 
  };
  inline void to_json(json& j, const LolChatGameflowGameMap& v) {
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolChatGameflowGameMap& v) {
    v.id = j.at("id").get<int64_t>(); 
  }
}