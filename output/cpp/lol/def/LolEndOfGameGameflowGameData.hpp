#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEndOfGameGameflowGameData { 
    uint64_t gameId; 
  };
  inline void to_json(json& j, const LolEndOfGameGameflowGameData& v) {
    j["gameId"] = v.gameId; 
  }
  inline void from_json(const json& j, LolEndOfGameGameflowGameData& v) {
    v.gameId = j.at("gameId").get<uint64_t>(); 
  }
}