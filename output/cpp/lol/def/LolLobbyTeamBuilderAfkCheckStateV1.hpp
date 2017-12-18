#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyTeamBuilderTbdInventory.hpp>
namespace lol {
  struct LolLobbyTeamBuilderAfkCheckStateV1 { 
    LolLobbyTeamBuilderTbdInventory inventoryDraft;
    uint32_t maxAfkMillis;
    bool afkReady;
    int32_t remainingAfkMillis; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderAfkCheckStateV1& v) {
    j["inventoryDraft"] = v.inventoryDraft; 
    j["maxAfkMillis"] = v.maxAfkMillis; 
    j["afkReady"] = v.afkReady; 
    j["remainingAfkMillis"] = v.remainingAfkMillis; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderAfkCheckStateV1& v) {
    v.inventoryDraft = j.at("inventoryDraft").get<LolLobbyTeamBuilderTbdInventory>(); 
    v.maxAfkMillis = j.at("maxAfkMillis").get<uint32_t>(); 
    v.afkReady = j.at("afkReady").get<bool>(); 
    v.remainingAfkMillis = j.at("remainingAfkMillis").get<int32_t>(); 
  }
}