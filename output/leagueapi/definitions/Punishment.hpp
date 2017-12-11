#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct Punishment { /**/ 
    uint64_t punishedUntilDateMillis;/**/
    std::vector<uint64_t> punishedForGameIds;/**/
    uint64_t punishmentLengthMillis;/**/
    bool permaBan;/**/
    std::vector<std::string> punishedForChatLogs;/**/
    std::string punishmentReason;/**/
    std::string punishmentType;/**/
    int64_t punishmentLengthGames;/**/
    std::string playerFacingMessage;/**/
  };
  static void to_json(json& j, const Punishment& v) { 
    j["punishedUntilDateMillis"] = v.punishedUntilDateMillis;
    j["punishedForGameIds"] = v.punishedForGameIds;
    j["punishmentLengthMillis"] = v.punishmentLengthMillis;
    j["permaBan"] = v.permaBan;
    j["punishedForChatLogs"] = v.punishedForChatLogs;
    j["punishmentReason"] = v.punishmentReason;
    j["punishmentType"] = v.punishmentType;
    j["punishmentLengthGames"] = v.punishmentLengthGames;
    j["playerFacingMessage"] = v.playerFacingMessage;
  }
  static void from_json(const json& j, Punishment& v) { 
    v.punishedUntilDateMillis = j.at("punishedUntilDateMillis").get<uint64_t>(); 
    v.punishedForGameIds = j.at("punishedForGameIds").get<std::vector<uint64_t>>(); 
    v.punishmentLengthMillis = j.at("punishmentLengthMillis").get<uint64_t>(); 
    v.permaBan = j.at("permaBan").get<bool>(); 
    v.punishedForChatLogs = j.at("punishedForChatLogs").get<std::vector<std::string>>(); 
    v.punishmentReason = j.at("punishmentReason").get<std::string>(); 
    v.punishmentType = j.at("punishmentType").get<std::string>(); 
    v.punishmentLengthGames = j.at("punishmentLengthGames").get<int64_t>(); 
    v.playerFacingMessage = j.at("playerFacingMessage").get<std::string>(); 
  }
} 