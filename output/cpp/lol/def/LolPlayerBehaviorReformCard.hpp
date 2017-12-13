#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPlayerBehaviorReformCard { 
    std::vector<std::string> chatLogs;
    std::string reason;
    uint64_t id;
    int64_t restrictedChatGamesRemaining;
    std::string playerFacingMessage;
    std::vector<uint64_t> gameIds;
    uint64_t punishmentLengthTime;
    std::string punishmentType;
    int64_t punishmentLengthGames;
    uint64_t timeWhenPunishmentExpires; 
  };
  void to_json(json& j, const LolPlayerBehaviorReformCard& v) {
  j["chatLogs"] = v.chatLogs; 
  j["reason"] = v.reason; 
  j["id"] = v.id; 
  j["restrictedChatGamesRemaining"] = v.restrictedChatGamesRemaining; 
  j["playerFacingMessage"] = v.playerFacingMessage; 
  j["gameIds"] = v.gameIds; 
  j["punishmentLengthTime"] = v.punishmentLengthTime; 
  j["punishmentType"] = v.punishmentType; 
  j["punishmentLengthGames"] = v.punishmentLengthGames; 
  j["timeWhenPunishmentExpires"] = v.timeWhenPunishmentExpires; 
  }
  void from_json(const json& j, LolPlayerBehaviorReformCard& v) {
  v.chatLogs = j.at("chatLogs").get<std::vector<std::string>>(); 
  v.reason = j.at("reason").get<std::string>(); 
  v.id = j.at("id").get<uint64_t>(); 
  v.restrictedChatGamesRemaining = j.at("restrictedChatGamesRemaining").get<int64_t>(); 
  v.playerFacingMessage = j.at("playerFacingMessage").get<std::string>(); 
  v.gameIds = j.at("gameIds").get<std::vector<uint64_t>>(); 
  v.punishmentLengthTime = j.at("punishmentLengthTime").get<uint64_t>(); 
  v.punishmentType = j.at("punishmentType").get<std::string>(); 
  v.punishmentLengthGames = j.at("punishmentLengthGames").get<int64_t>(); 
  v.timeWhenPunishmentExpires = j.at("timeWhenPunishmentExpires").get<uint64_t>(); 
  }
}