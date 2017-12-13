#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct Punishment { 
    std::string punishmentType;
    uint64_t punishedUntilDateMillis;
    uint64_t punishmentLengthMillis;
    std::string punishmentReason;
    std::string playerFacingMessage;
    std::vector<uint64_t> punishedForGameIds;
    bool permaBan;
    int64_t punishmentLengthGames;
    std::vector<std::string> punishedForChatLogs; 
  };
  void to_json(json& j, const Punishment& v) {
    j["punishmentType"] = v.punishmentType; 
    j["punishedUntilDateMillis"] = v.punishedUntilDateMillis; 
    j["punishmentLengthMillis"] = v.punishmentLengthMillis; 
    j["punishmentReason"] = v.punishmentReason; 
    j["playerFacingMessage"] = v.playerFacingMessage; 
    j["punishedForGameIds"] = v.punishedForGameIds; 
    j["permaBan"] = v.permaBan; 
    j["punishmentLengthGames"] = v.punishmentLengthGames; 
    j["punishedForChatLogs"] = v.punishedForChatLogs; 
  }
  void from_json(const json& j, Punishment& v) {
    v.punishmentType = j.at("punishmentType").get<std::string>(); 
    v.punishedUntilDateMillis = j.at("punishedUntilDateMillis").get<uint64_t>(); 
    v.punishmentLengthMillis = j.at("punishmentLengthMillis").get<uint64_t>(); 
    v.punishmentReason = j.at("punishmentReason").get<std::string>(); 
    v.playerFacingMessage = j.at("playerFacingMessage").get<std::string>(); 
    v.punishedForGameIds = j.at("punishedForGameIds").get<std::vector<uint64_t>>(); 
    v.permaBan = j.at("permaBan").get<bool>(); 
    v.punishmentLengthGames = j.at("punishmentLengthGames").get<int64_t>(); 
    v.punishedForChatLogs = j.at("punishedForChatLogs").get<std::vector<std::string>>(); 
  }
}