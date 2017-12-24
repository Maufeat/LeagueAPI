#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct Punishment { 
    std::string punishmentType;
    bool permaBan;
    uint64_t punishmentLengthMillis;
    std::string punishmentReason;
    int64_t punishmentLengthGames;
    std::vector<std::string> punishedForChatLogs;
    uint64_t punishedUntilDateMillis;
    std::string playerFacingMessage;
    std::vector<uint64_t> punishedForGameIds; 
  };
  inline void to_json(json& j, const Punishment& v) {
    j["punishmentType"] = v.punishmentType; 
    j["permaBan"] = v.permaBan; 
    j["punishmentLengthMillis"] = v.punishmentLengthMillis; 
    j["punishmentReason"] = v.punishmentReason; 
    j["punishmentLengthGames"] = v.punishmentLengthGames; 
    j["punishedForChatLogs"] = v.punishedForChatLogs; 
    j["punishedUntilDateMillis"] = v.punishedUntilDateMillis; 
    j["playerFacingMessage"] = v.playerFacingMessage; 
    j["punishedForGameIds"] = v.punishedForGameIds; 
  }
  inline void from_json(const json& j, Punishment& v) {
    v.punishmentType = j.at("punishmentType").get<std::string>(); 
    v.permaBan = j.at("permaBan").get<bool>(); 
    v.punishmentLengthMillis = j.at("punishmentLengthMillis").get<uint64_t>(); 
    v.punishmentReason = j.at("punishmentReason").get<std::string>(); 
    v.punishmentLengthGames = j.at("punishmentLengthGames").get<int64_t>(); 
    v.punishedForChatLogs = j.at("punishedForChatLogs").get<std::vector<std::string>>(); 
    v.punishedUntilDateMillis = j.at("punishedUntilDateMillis").get<uint64_t>(); 
    v.playerFacingMessage = j.at("playerFacingMessage").get<std::string>(); 
    v.punishedForGameIds = j.at("punishedForGameIds").get<std::vector<uint64_t>>(); 
  }
}