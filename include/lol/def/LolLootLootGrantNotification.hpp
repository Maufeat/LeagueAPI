#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLootLootGrantNotification { 
    std::string msgId;
    uint64_t gameId;
    std::string lootName;
    int32_t championId;
    uint64_t accountId;
    int64_t id;
    std::string playerGrade;
    std::string messageKey;
    uint64_t playerId; 
  };
  inline void to_json(json& j, const LolLootLootGrantNotification& v) {
    j["msgId"] = v.msgId; 
    j["gameId"] = v.gameId; 
    j["lootName"] = v.lootName; 
    j["championId"] = v.championId; 
    j["accountId"] = v.accountId; 
    j["id"] = v.id; 
    j["playerGrade"] = v.playerGrade; 
    j["messageKey"] = v.messageKey; 
    j["playerId"] = v.playerId; 
  }
  inline void from_json(const json& j, LolLootLootGrantNotification& v) {
    v.msgId = j.at("msgId").get<std::string>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.lootName = j.at("lootName").get<std::string>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.playerGrade = j.at("playerGrade").get<std::string>(); 
    v.messageKey = j.at("messageKey").get<std::string>(); 
    v.playerId = j.at("playerId").get<uint64_t>(); 
  }
}