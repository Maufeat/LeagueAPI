#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PlayerInfoDto { 
    std::string currentPlatformId;
    uint64_t summonerId;
    uint64_t currentAccountId; 
  };
  inline void to_json(json& j, const PlayerInfoDto& v) {
    j["currentPlatformId"] = v.currentPlatformId; 
    j["summonerId"] = v.summonerId; 
    j["currentAccountId"] = v.currentAccountId; 
  }
  inline void from_json(const json& j, PlayerInfoDto& v) {
    v.currentPlatformId = j.at("currentPlatformId").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.currentAccountId = j.at("currentAccountId").get<uint64_t>(); 
  }
}