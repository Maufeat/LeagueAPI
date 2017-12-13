#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolEndOfGameGameflowGameData { 
    uint64_t gameId; 
  };
  void to_json(json& j, const LolEndOfGameGameflowGameData& v) {
  j["gameId"] = v.gameId; 
  }
  void from_json(const json& j, LolEndOfGameGameflowGameData& v) {
  v.gameId = j.at("gameId").get<uint64_t>(); 
  }
}