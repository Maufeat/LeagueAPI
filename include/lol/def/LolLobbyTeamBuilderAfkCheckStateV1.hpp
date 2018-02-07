#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderTbdInventory.hpp"
namespace lol {
  struct LolLobbyTeamBuilderAfkCheckStateV1 { 
    uint32_t maxAfkMillis;
    int32_t remainingAfkMillis;
    bool afkReady;
    LolLobbyTeamBuilderTbdInventory inventoryDraft; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderAfkCheckStateV1& v) {
    j["maxAfkMillis"] = v.maxAfkMillis; 
    j["remainingAfkMillis"] = v.remainingAfkMillis; 
    j["afkReady"] = v.afkReady; 
    j["inventoryDraft"] = v.inventoryDraft; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderAfkCheckStateV1& v) {
    v.maxAfkMillis = j.at("maxAfkMillis").get<uint32_t>(); 
    v.remainingAfkMillis = j.at("remainingAfkMillis").get<int32_t>(); 
    v.afkReady = j.at("afkReady").get<bool>(); 
    v.inventoryDraft = j.at("inventoryDraft").get<LolLobbyTeamBuilderTbdInventory>(); 
  }
}