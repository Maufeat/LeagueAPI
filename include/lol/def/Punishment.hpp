#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct Punishment { 
    std::vector<uint64_t> punishedForGameIds;
    uint64_t punishmentLengthMillis;
    int64_t punishmentLengthGames;
    std::string punishmentType;
    std::string punishmentReason;
    std::vector<std::string> punishedForChatLogs;
    uint64_t punishedUntilDateMillis;
    bool permaBan;
    std::string playerFacingMessage; 
  };
  inline void to_json(json& j, const Punishment& v) {
    j["punishedForGameIds"] = v.punishedForGameIds; 
    j["punishmentLengthMillis"] = v.punishmentLengthMillis; 
    j["punishmentLengthGames"] = v.punishmentLengthGames; 
    j["punishmentType"] = v.punishmentType; 
    j["punishmentReason"] = v.punishmentReason; 
    j["punishedForChatLogs"] = v.punishedForChatLogs; 
    j["punishedUntilDateMillis"] = v.punishedUntilDateMillis; 
    j["permaBan"] = v.permaBan; 
    j["playerFacingMessage"] = v.playerFacingMessage; 
  }
  inline void from_json(const json& j, Punishment& v) {
    v.punishedForGameIds = j.at("punishedForGameIds").get<std::vector<uint64_t>>(); 
    v.punishmentLengthMillis = j.at("punishmentLengthMillis").get<uint64_t>(); 
    v.punishmentLengthGames = j.at("punishmentLengthGames").get<int64_t>(); 
    v.punishmentType = j.at("punishmentType").get<std::string>(); 
    v.punishmentReason = j.at("punishmentReason").get<std::string>(); 
    v.punishedForChatLogs = j.at("punishedForChatLogs").get<std::vector<std::string>>(); 
    v.punishedUntilDateMillis = j.at("punishedUntilDateMillis").get<uint64_t>(); 
    v.permaBan = j.at("permaBan").get<bool>(); 
    v.playerFacingMessage = j.at("playerFacingMessage").get<std::string>(); 
  }
}