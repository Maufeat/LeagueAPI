#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLootLootGrantNotification { 
    std::string playerGrade;
    int64_t id;
    std::string msgId;
    uint64_t accountId;
    uint64_t playerId;
    uint64_t gameId;
    std::string lootName;
    int32_t championId;
    std::string messageKey; 
  };
  inline void to_json(json& j, const LolLootLootGrantNotification& v) {
    j["playerGrade"] = v.playerGrade; 
    j["id"] = v.id; 
    j["msgId"] = v.msgId; 
    j["accountId"] = v.accountId; 
    j["playerId"] = v.playerId; 
    j["gameId"] = v.gameId; 
    j["lootName"] = v.lootName; 
    j["championId"] = v.championId; 
    j["messageKey"] = v.messageKey; 
  }
  inline void from_json(const json& j, LolLootLootGrantNotification& v) {
    v.playerGrade = j.at("playerGrade").get<std::string>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.msgId = j.at("msgId").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.playerId = j.at("playerId").get<uint64_t>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.lootName = j.at("lootName").get<std::string>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.messageKey = j.at("messageKey").get<std::string>(); 
  }
}