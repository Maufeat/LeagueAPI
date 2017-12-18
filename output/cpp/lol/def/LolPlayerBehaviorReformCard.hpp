#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPlayerBehaviorReformCard { 
    std::string punishmentType;
    std::vector<uint64_t> gameIds;
    int64_t punishmentLengthGames;
    uint64_t punishmentLengthTime;
    uint64_t timeWhenPunishmentExpires;
    int64_t restrictedChatGamesRemaining;
    std::vector<std::string> chatLogs;
    uint64_t id;
    std::string playerFacingMessage;
    std::string reason; 
  };
  inline void to_json(json& j, const LolPlayerBehaviorReformCard& v) {
    j["punishmentType"] = v.punishmentType; 
    j["gameIds"] = v.gameIds; 
    j["punishmentLengthGames"] = v.punishmentLengthGames; 
    j["punishmentLengthTime"] = v.punishmentLengthTime; 
    j["timeWhenPunishmentExpires"] = v.timeWhenPunishmentExpires; 
    j["restrictedChatGamesRemaining"] = v.restrictedChatGamesRemaining; 
    j["chatLogs"] = v.chatLogs; 
    j["id"] = v.id; 
    j["playerFacingMessage"] = v.playerFacingMessage; 
    j["reason"] = v.reason; 
  }
  inline void from_json(const json& j, LolPlayerBehaviorReformCard& v) {
    v.punishmentType = j.at("punishmentType").get<std::string>(); 
    v.gameIds = j.at("gameIds").get<std::vector<uint64_t>>(); 
    v.punishmentLengthGames = j.at("punishmentLengthGames").get<int64_t>(); 
    v.punishmentLengthTime = j.at("punishmentLengthTime").get<uint64_t>(); 
    v.timeWhenPunishmentExpires = j.at("timeWhenPunishmentExpires").get<uint64_t>(); 
    v.restrictedChatGamesRemaining = j.at("restrictedChatGamesRemaining").get<int64_t>(); 
    v.chatLogs = j.at("chatLogs").get<std::vector<std::string>>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.playerFacingMessage = j.at("playerFacingMessage").get<std::string>(); 
    v.reason = j.at("reason").get<std::string>(); 
  }
}