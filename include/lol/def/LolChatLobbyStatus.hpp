#pragma once
#include "../base_def.hpp" 
#include "LolChatQueueCustomGameSpectatorPolicy.hpp"
namespace lol {
  struct LolChatLobbyStatus { 
    LolChatQueueCustomGameSpectatorPolicy customSpectatorPolicy;
    bool isLeader;
    bool isCustom;
    int32_t queueId;
    bool isPracticeTool; 
  };
  inline void to_json(json& j, const LolChatLobbyStatus& v) {
    j["customSpectatorPolicy"] = v.customSpectatorPolicy; 
    j["isLeader"] = v.isLeader; 
    j["isCustom"] = v.isCustom; 
    j["queueId"] = v.queueId; 
    j["isPracticeTool"] = v.isPracticeTool; 
  }
  inline void from_json(const json& j, LolChatLobbyStatus& v) {
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolChatQueueCustomGameSpectatorPolicy>(); 
    v.isLeader = j.at("isLeader").get<bool>(); 
    v.isCustom = j.at("isCustom").get<bool>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.isPracticeTool = j.at("isPracticeTool").get<bool>(); 
  }
}