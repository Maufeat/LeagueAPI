#pragma once
#include "../base_def.hpp" 
#include "LolChatQueueCustomGameSpectatorPolicy.hpp"
namespace lol {
  struct LolChatLobbyStatus { 
    bool isPracticeTool;
    bool isLeader;
    bool isCustom;
    int32_t queueId;
    LolChatQueueCustomGameSpectatorPolicy customSpectatorPolicy; 
  };
  inline void to_json(json& j, const LolChatLobbyStatus& v) {
    j["isPracticeTool"] = v.isPracticeTool; 
    j["isLeader"] = v.isLeader; 
    j["isCustom"] = v.isCustom; 
    j["queueId"] = v.queueId; 
    j["customSpectatorPolicy"] = v.customSpectatorPolicy; 
  }
  inline void from_json(const json& j, LolChatLobbyStatus& v) {
    v.isPracticeTool = j.at("isPracticeTool").get<bool>(); 
    v.isLeader = j.at("isLeader").get<bool>(); 
    v.isCustom = j.at("isCustom").get<bool>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolChatQueueCustomGameSpectatorPolicy>(); 
  }
}