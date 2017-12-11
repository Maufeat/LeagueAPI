#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolChatQueueCustomGameSpectatorPolicy.hpp>

namespace leagueapi {
  struct LolChatLobbyStatus { /**/ 
    int32_t queueId;/**/
    bool isCustom;/**/
    bool isPracticeTool;/**/
    bool isLeader;/**/
    LolChatQueueCustomGameSpectatorPolicy customSpectatorPolicy;/**/
  };
  static void to_json(json& j, const LolChatLobbyStatus& v) { 
    j["queueId"] = v.queueId;
    j["isCustom"] = v.isCustom;
    j["isPracticeTool"] = v.isPracticeTool;
    j["isLeader"] = v.isLeader;
    j["customSpectatorPolicy"] = v.customSpectatorPolicy;
  }
  static void from_json(const json& j, LolChatLobbyStatus& v) { 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.isCustom = j.at("isCustom").get<bool>(); 
    v.isPracticeTool = j.at("isPracticeTool").get<bool>(); 
    v.isLeader = j.at("isLeader").get<bool>(); 
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolChatQueueCustomGameSpectatorPolicy>(); 
  }
} 