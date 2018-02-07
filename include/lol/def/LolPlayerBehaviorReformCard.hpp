#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPlayerBehaviorReformCard { 
    uint64_t id;
    std::string punishmentType;
    std::string reason;
    uint64_t timeWhenPunishmentExpires;
    uint64_t punishmentLengthTime;
    int64_t punishmentLengthGames;
    int64_t restrictedChatGamesRemaining;
    std::vector<std::string> chatLogs;
    std::vector<uint64_t> gameIds;
    std::string playerFacingMessage; 
  };
  inline void to_json(json& j, const LolPlayerBehaviorReformCard& v) {
    j["id"] = v.id; 
    j["punishmentType"] = v.punishmentType; 
    j["reason"] = v.reason; 
    j["timeWhenPunishmentExpires"] = v.timeWhenPunishmentExpires; 
    j["punishmentLengthTime"] = v.punishmentLengthTime; 
    j["punishmentLengthGames"] = v.punishmentLengthGames; 
    j["restrictedChatGamesRemaining"] = v.restrictedChatGamesRemaining; 
    j["chatLogs"] = v.chatLogs; 
    j["gameIds"] = v.gameIds; 
    j["playerFacingMessage"] = v.playerFacingMessage; 
  }
  inline void from_json(const json& j, LolPlayerBehaviorReformCard& v) {
    v.id = j.at("id").get<uint64_t>(); 
    v.punishmentType = j.at("punishmentType").get<std::string>(); 
    v.reason = j.at("reason").get<std::string>(); 
    v.timeWhenPunishmentExpires = j.at("timeWhenPunishmentExpires").get<uint64_t>(); 
    v.punishmentLengthTime = j.at("punishmentLengthTime").get<uint64_t>(); 
    v.punishmentLengthGames = j.at("punishmentLengthGames").get<int64_t>(); 
    v.restrictedChatGamesRemaining = j.at("restrictedChatGamesRemaining").get<int64_t>(); 
    v.chatLogs = j.at("chatLogs").get<std::vector<std::string>>(); 
    v.gameIds = j.at("gameIds").get<std::vector<uint64_t>>(); 
    v.playerFacingMessage = j.at("playerFacingMessage").get<std::string>(); 
  }
}