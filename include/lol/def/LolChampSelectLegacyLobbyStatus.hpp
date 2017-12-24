#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChampSelectLegacyLobbyStatus { 
    bool isLeader;
    std::vector<uint64_t> memberSummonerIds;
    bool isSpectator;
    bool isCustom;
    int32_t queueId;
    bool allowedPlayAgain; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyLobbyStatus& v) {
    j["isLeader"] = v.isLeader; 
    j["memberSummonerIds"] = v.memberSummonerIds; 
    j["isSpectator"] = v.isSpectator; 
    j["isCustom"] = v.isCustom; 
    j["queueId"] = v.queueId; 
    j["allowedPlayAgain"] = v.allowedPlayAgain; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyLobbyStatus& v) {
    v.isLeader = j.at("isLeader").get<bool>(); 
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>(); 
    v.isSpectator = j.at("isSpectator").get<bool>(); 
    v.isCustom = j.at("isCustom").get<bool>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>(); 
  }
}