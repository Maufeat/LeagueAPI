#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolChampSelectLegacyLobbyStatus { /**/ 
    int32_t queueId;/**/
    bool isSpectator;/**/
    bool allowedPlayAgain;/**/
    std::vector<uint64_t> memberSummonerIds;/**/
    bool isCustom;/**/
    bool isLeader;/**/
  };
  static void to_json(json& j, const LolChampSelectLegacyLobbyStatus& v) { 
    j["queueId"] = v.queueId;
    j["isSpectator"] = v.isSpectator;
    j["allowedPlayAgain"] = v.allowedPlayAgain;
    j["memberSummonerIds"] = v.memberSummonerIds;
    j["isCustom"] = v.isCustom;
    j["isLeader"] = v.isLeader;
  }
  static void from_json(const json& j, LolChampSelectLegacyLobbyStatus& v) { 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.isSpectator = j.at("isSpectator").get<bool>(); 
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>(); 
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>(); 
    v.isCustom = j.at("isCustom").get<bool>(); 
    v.isLeader = j.at("isLeader").get<bool>(); 
  }
} 