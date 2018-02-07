#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct Punishment { 
    std::vector<std::string> punishedForChatLogs;
    std::vector<uint64_t> punishedForGameIds;
    std::string punishmentReason;
    std::string punishmentType;
    uint64_t punishedUntilDateMillis;
    uint64_t punishmentLengthMillis;
    bool permaBan;
    int64_t punishmentLengthGames;
    std::string playerFacingMessage; 
  };
  inline void to_json(json& j, const Punishment& v) {
    j["punishedForChatLogs"] = v.punishedForChatLogs; 
    j["punishedForGameIds"] = v.punishedForGameIds; 
    j["punishmentReason"] = v.punishmentReason; 
    j["punishmentType"] = v.punishmentType; 
    j["punishedUntilDateMillis"] = v.punishedUntilDateMillis; 
    j["punishmentLengthMillis"] = v.punishmentLengthMillis; 
    j["permaBan"] = v.permaBan; 
    j["punishmentLengthGames"] = v.punishmentLengthGames; 
    j["playerFacingMessage"] = v.playerFacingMessage; 
  }
  inline void from_json(const json& j, Punishment& v) {
    v.punishedForChatLogs = j.at("punishedForChatLogs").get<std::vector<std::string>>(); 
    v.punishedForGameIds = j.at("punishedForGameIds").get<std::vector<uint64_t>>(); 
    v.punishmentReason = j.at("punishmentReason").get<std::string>(); 
    v.punishmentType = j.at("punishmentType").get<std::string>(); 
    v.punishedUntilDateMillis = j.at("punishedUntilDateMillis").get<uint64_t>(); 
    v.punishmentLengthMillis = j.at("punishmentLengthMillis").get<uint64_t>(); 
    v.permaBan = j.at("permaBan").get<bool>(); 
    v.punishmentLengthGames = j.at("punishmentLengthGames").get<int64_t>(); 
    v.playerFacingMessage = j.at("playerFacingMessage").get<std::string>(); 
  }
}