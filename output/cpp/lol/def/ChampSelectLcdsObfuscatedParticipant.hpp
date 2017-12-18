#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct ChampSelectLcdsObfuscatedParticipant { 
    uint64_t gameUniqueId; 
  };
  inline void to_json(json& j, const ChampSelectLcdsObfuscatedParticipant& v) {
    j["gameUniqueId"] = v.gameUniqueId; 
  }
  inline void from_json(const json& j, ChampSelectLcdsObfuscatedParticipant& v) {
    v.gameUniqueId = j.at("gameUniqueId").get<uint64_t>(); 
  }
}