#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChampSelectLegacyLobbyStatus { 
    bool isCustom;
    bool isSpectator;
    bool allowedPlayAgain;
    bool isLeader;
    int32_t queueId;
    std::vector<uint64_t> memberSummonerIds; 
  };
  void to_json(json& j, const LolChampSelectLegacyLobbyStatus& v) {
    j["isCustom"] = v.isCustom; 
    j["isSpectator"] = v.isSpectator; 
    j["allowedPlayAgain"] = v.allowedPlayAgain; 
    j["isLeader"] = v.isLeader; 
    j["queueId"] = v.queueId; 
    j["memberSummonerIds"] = v.memberSummonerIds; 
  }
  void from_json(const json& j, LolChampSelectLegacyLobbyStatus& v) {
    v.isCustom = j.at("isCustom").get<bool>(); 
    v.isSpectator = j.at("isSpectator").get<bool>(); 
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>(); 
    v.isLeader = j.at("isLeader").get<bool>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>(); 
  }
}