#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderTbdInventory.hpp"
namespace lol {
  struct LolLobbyTeamBuilderAfkCheckStateV1 { 
    bool afkReady;
    LolLobbyTeamBuilderTbdInventory inventoryDraft;
    int32_t remainingAfkMillis;
    uint32_t maxAfkMillis; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderAfkCheckStateV1& v) {
    j["afkReady"] = v.afkReady; 
    j["inventoryDraft"] = v.inventoryDraft; 
    j["remainingAfkMillis"] = v.remainingAfkMillis; 
    j["maxAfkMillis"] = v.maxAfkMillis; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderAfkCheckStateV1& v) {
    v.afkReady = j.at("afkReady").get<bool>(); 
    v.inventoryDraft = j.at("inventoryDraft").get<LolLobbyTeamBuilderTbdInventory>(); 
    v.remainingAfkMillis = j.at("remainingAfkMillis").get<int32_t>(); 
    v.maxAfkMillis = j.at("maxAfkMillis").get<uint32_t>(); 
  }
}