#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPlayerBehaviorReformCard { 
    std::string playerFacingMessage;
    uint64_t id;
    uint64_t timeWhenPunishmentExpires;
    std::vector<uint64_t> gameIds;
    int64_t punishmentLengthGames;
    uint64_t punishmentLengthTime;
    int64_t restrictedChatGamesRemaining;
    std::string reason;
    std::string punishmentType;
    std::vector<std::string> chatLogs; 
  };
  inline void to_json(json& j, const LolPlayerBehaviorReformCard& v) {
    j["playerFacingMessage"] = v.playerFacingMessage; 
    j["id"] = v.id; 
    j["timeWhenPunishmentExpires"] = v.timeWhenPunishmentExpires; 
    j["gameIds"] = v.gameIds; 
    j["punishmentLengthGames"] = v.punishmentLengthGames; 
    j["punishmentLengthTime"] = v.punishmentLengthTime; 
    j["restrictedChatGamesRemaining"] = v.restrictedChatGamesRemaining; 
    j["reason"] = v.reason; 
    j["punishmentType"] = v.punishmentType; 
    j["chatLogs"] = v.chatLogs; 
  }
  inline void from_json(const json& j, LolPlayerBehaviorReformCard& v) {
    v.playerFacingMessage = j.at("playerFacingMessage").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.timeWhenPunishmentExpires = j.at("timeWhenPunishmentExpires").get<uint64_t>(); 
    v.gameIds = j.at("gameIds").get<std::vector<uint64_t>>(); 
    v.punishmentLengthGames = j.at("punishmentLengthGames").get<int64_t>(); 
    v.punishmentLengthTime = j.at("punishmentLengthTime").get<uint64_t>(); 
    v.restrictedChatGamesRemaining = j.at("restrictedChatGamesRemaining").get<int64_t>(); 
    v.reason = j.at("reason").get<std::string>(); 
    v.punishmentType = j.at("punishmentType").get<std::string>(); 
    v.chatLogs = j.at("chatLogs").get<std::vector<std::string>>(); 
  }
}