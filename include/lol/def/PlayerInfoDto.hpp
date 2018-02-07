#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PlayerInfoDto { 
    std::string currentPlatformId;
    uint64_t currentAccountId;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const PlayerInfoDto& v) {
    j["currentPlatformId"] = v.currentPlatformId; 
    j["currentAccountId"] = v.currentAccountId; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, PlayerInfoDto& v) {
    v.currentPlatformId = j.at("currentPlatformId").get<std::string>(); 
    v.currentAccountId = j.at("currentAccountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}