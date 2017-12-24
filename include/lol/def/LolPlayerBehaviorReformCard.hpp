#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPlayerBehaviorReformCard { 
    std::string punishmentType;
    uint64_t timeWhenPunishmentExpires;
    std::string reason;
    uint64_t punishmentLengthTime;
    uint64_t id;
    int64_t punishmentLengthGames;
    std::vector<uint64_t> gameIds;
    int64_t restrictedChatGamesRemaining;
    std::vector<std::string> chatLogs;
    std::string playerFacingMessage; 
  };
  inline void to_json(json& j, const LolPlayerBehaviorReformCard& v) {
    j["punishmentType"] = v.punishmentType; 
    j["timeWhenPunishmentExpires"] = v.timeWhenPunishmentExpires; 
    j["reason"] = v.reason; 
    j["punishmentLengthTime"] = v.punishmentLengthTime; 
    j["id"] = v.id; 
    j["punishmentLengthGames"] = v.punishmentLengthGames; 
    j["gameIds"] = v.gameIds; 
    j["restrictedChatGamesRemaining"] = v.restrictedChatGamesRemaining; 
    j["chatLogs"] = v.chatLogs; 
    j["playerFacingMessage"] = v.playerFacingMessage; 
  }
  inline void from_json(const json& j, LolPlayerBehaviorReformCard& v) {
    v.punishmentType = j.at("punishmentType").get<std::string>(); 
    v.timeWhenPunishmentExpires = j.at("timeWhenPunishmentExpires").get<uint64_t>(); 
    v.reason = j.at("reason").get<std::string>(); 
    v.punishmentLengthTime = j.at("punishmentLengthTime").get<uint64_t>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.punishmentLengthGames = j.at("punishmentLengthGames").get<int64_t>(); 
    v.gameIds = j.at("gameIds").get<std::vector<uint64_t>>(); 
    v.restrictedChatGamesRemaining = j.at("restrictedChatGamesRemaining").get<int64_t>(); 
    v.chatLogs = j.at("chatLogs").get<std::vector<std::string>>(); 
    v.playerFacingMessage = j.at("playerFacingMessage").get<std::string>(); 
  }
}