#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChampSelectLegacyLobbyStatus { 
    int32_t queueId;
    bool isCustom;
    bool isLeader;
    bool isSpectator;
    bool allowedPlayAgain;
    std::vector<uint64_t> memberSummonerIds; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyLobbyStatus& v) {
    j["queueId"] = v.queueId; 
    j["isCustom"] = v.isCustom; 
    j["isLeader"] = v.isLeader; 
    j["isSpectator"] = v.isSpectator; 
    j["allowedPlayAgain"] = v.allowedPlayAgain; 
    j["memberSummonerIds"] = v.memberSummonerIds; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyLobbyStatus& v) {
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.isCustom = j.at("isCustom").get<bool>(); 
    v.isLeader = j.at("isLeader").get<bool>(); 
    v.isSpectator = j.at("isSpectator").get<bool>(); 
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>(); 
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>(); 
  }
}