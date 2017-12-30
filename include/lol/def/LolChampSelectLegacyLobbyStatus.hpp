#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChampSelectLegacyLobbyStatus { 
    bool isSpectator;
    bool isCustom;
    std::vector<uint64_t> memberSummonerIds;
    bool allowedPlayAgain;
    int32_t queueId;
    bool isLeader; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyLobbyStatus& v) {
    j["isSpectator"] = v.isSpectator; 
    j["isCustom"] = v.isCustom; 
    j["memberSummonerIds"] = v.memberSummonerIds; 
    j["allowedPlayAgain"] = v.allowedPlayAgain; 
    j["queueId"] = v.queueId; 
    j["isLeader"] = v.isLeader; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyLobbyStatus& v) {
    v.isSpectator = j.at("isSpectator").get<bool>(); 
    v.isCustom = j.at("isCustom").get<bool>(); 
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>(); 
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.isLeader = j.at("isLeader").get<bool>(); 
  }
}