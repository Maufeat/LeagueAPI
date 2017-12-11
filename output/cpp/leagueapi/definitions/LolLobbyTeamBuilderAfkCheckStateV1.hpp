#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderTbdInventory.hpp>

namespace leagueapi {
  struct LolLobbyTeamBuilderAfkCheckStateV1 { /**/ 
    uint32_t maxAfkMillis;/**/
    bool afkReady;/**/
    int32_t remainingAfkMillis;/**/
    LolLobbyTeamBuilderTbdInventory inventoryDraft;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderAfkCheckStateV1& v) { 
    j["maxAfkMillis"] = v.maxAfkMillis;
    j["afkReady"] = v.afkReady;
    j["remainingAfkMillis"] = v.remainingAfkMillis;
    j["inventoryDraft"] = v.inventoryDraft;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderAfkCheckStateV1& v) { 
    v.maxAfkMillis = j.at("maxAfkMillis").get<uint32_t>(); 
    v.afkReady = j.at("afkReady").get<bool>(); 
    v.remainingAfkMillis = j.at("remainingAfkMillis").get<int32_t>(); 
    v.inventoryDraft = j.at("inventoryDraft").get<LolLobbyTeamBuilderTbdInventory>(); 
  }
} 