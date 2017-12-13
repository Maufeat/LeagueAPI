#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChatQueueCustomGameSpectatorPolicy.hpp>
namespace lol {
  struct LolChatLobbyStatus { 
    LolChatQueueCustomGameSpectatorPolicy customSpectatorPolicy;
    bool isCustom;
    bool isLeader;
    int32_t queueId;
    bool isPracticeTool; 
  };
  void to_json(json& j, const LolChatLobbyStatus& v) {
  j["customSpectatorPolicy"] = v.customSpectatorPolicy; 
  j["isCustom"] = v.isCustom; 
  j["isLeader"] = v.isLeader; 
  j["queueId"] = v.queueId; 
  j["isPracticeTool"] = v.isPracticeTool; 
  }
  void from_json(const json& j, LolChatLobbyStatus& v) {
  v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolChatQueueCustomGameSpectatorPolicy>(); 
  v.isCustom = j.at("isCustom").get<bool>(); 
  v.isLeader = j.at("isLeader").get<bool>(); 
  v.queueId = j.at("queueId").get<int32_t>(); 
  v.isPracticeTool = j.at("isPracticeTool").get<bool>(); 
  }
}